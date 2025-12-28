/*
 * InputLeap -- mouse and keyboard sharing utility
 * Copyright (C) 2025 InputLeap Contributors
 *
 * This package is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * found in the file LICENSE that should have accompanied this file.
 *
 * This package is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "FileTransfer.h"
#include "base/Log.h"
#include "common/DataDirectories.h"
#include "io/filesystem.h"
#include <curl/curl.h>
#include <fstream>
#include <mutex>
#include <sstream>
#include <cstdio>

namespace inputleap {

namespace {

inline void ft_log(const char* level, const std::string& msg)
{
    std::fprintf(stderr, "FileTransfer[%s]: %s\n", level, msg.c_str());
}

std::once_flag g_curlInitOnce;

void ensure_default_file_transfer_setup(long connectTimeout, long transferTimeout)
{
    static std::once_flag once;
    std::call_once(once, [&]() {
        try {
            const auto profile = DataDirectories::profile();
            if (profile.empty()) {
                return;
            }

            fs::create_directories(profile);

            const auto dropDir = profile / "file-transfer";
            fs::create_directories(dropDir);

            const auto configPath = profile / "file-transfer.json";
            if (fs::exists(configPath)) {
                return;
            }

            std::ofstream configStream;
            open_utf8_path(configStream, configPath, std::ios::out | std::ios::trunc);
            if (!configStream.is_open()) {
                LOG_WARN("FileTransfer: unable to write default config at %s", configPath.u8string().c_str());
                return;
            }

            const auto dropDirStr = dropDir.u8string();

            configStream << "{\n";
            configStream << "  \"dropDir\": \"" << dropDirStr << "\",\n";
            configStream << "  \"connectTimeoutSeconds\": " << connectTimeout << ",\n";
            configStream << "  \"transferTimeoutSeconds\": " << transferTimeout << ",\n";
            configStream << "  \"protocols\": [\"ftp\", \"sftp\", \"http\"],\n";
            configStream << "  \"note\": \"Edit credentials and endpoints before remote transfers.\"\n";
            configStream << "}\n";

            ft_log("INFO", std::string("created default config at ") + configPath.u8string());
        }
        catch (const std::exception& e) {
            ft_log("WARN", std::string("default setup failed: ") + e.what());
        }
    });
}

} // namespace

// Callback for write operations (download)
static size_t write_callback(void* contents, size_t size, size_t nmemb, FILE* userp) {
    return fwrite(contents, size, nmemb, userp);
}

// Callback for read operations (upload)
static size_t read_callback(void* ptr, size_t size, size_t nmemb, FILE* userp) {
    return fread(ptr, size, nmemb, userp);
}

// Callback for verbose debug output
static int debug_callback(CURL* handle, curl_infotype type, char* data, size_t size, void* userp) {
    (void)handle;
    (void)userp;
    
    const char* text = "";
    switch(type) {
        case CURLINFO_TEXT:
            text = "INFO";
            break;
        case CURLINFO_HEADER_OUT:
            text = "HEADER_OUT";
            break;
        case CURLINFO_HEADER_IN:
            text = "HEADER_IN";
            break;
        case CURLINFO_DATA_OUT:
            text = "DATA_OUT";
            break;
        case CURLINFO_DATA_IN:
            text = "DATA_IN";
            break;
        case CURLINFO_SSL_DATA_OUT:
            text = "SSL_OUT";
            break;
        case CURLINFO_SSL_DATA_IN:
            text = "SSL_IN";
            break;
        default:
            return 0;
    }
    
    std::string msg(data, size);
    // Remove trailing newline for cleaner output
    if (!msg.empty() && msg.back() == '\n') {
        msg.pop_back();
    }
    ft_log("DEBUG", std::string(text) + ": " + msg);
    return 0;
}

FileTransfer::FileTransfer()
{
    // Initialize CURL and default config once per process
    std::call_once(g_curlInitOnce, [&]() {
        curl_global_init(CURL_GLOBAL_DEFAULT);
        ensure_default_file_transfer_setup(m_connectTimeout, m_transferTimeout);
    });
}

FileTransfer::~FileTransfer()
{
}

bool FileTransfer::downloadFile(const std::string& remotePath,
                               const std::string& localPath,
                               const std::string& username,
                               const std::string& password)
{
    m_lastError.clear();

    CURL* curl = curl_easy_init();
    if (!curl) {
        m_lastError = "Failed to initialize CURL";
        ft_log("ERROR", m_lastError);
        return false;
    }

    FILE* outFile = fopen(localPath.c_str(), "wb");
    if (!outFile) {
        m_lastError = "Cannot open local file for writing: " + localPath;
        ft_log("ERROR", m_lastError);
        curl_easy_cleanup(curl);
        return false;
    }

    // Set CURL options
    curl_easy_setopt(curl, CURLOPT_URL, remotePath.c_str());
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_callback);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, outFile);
    curl_easy_setopt(curl, CURLOPT_CONNECTTIMEOUT, m_connectTimeout);
    curl_easy_setopt(curl, CURLOPT_TIMEOUT, m_transferTimeout);
    curl_easy_setopt(curl, CURLOPT_NOPROGRESS, 1L);
    curl_easy_setopt(curl, CURLOPT_FAILONERROR, 1L);

    // Set authentication if provided
    if (!username.empty() && !password.empty()) {
        std::string auth = username + ":" + password;
        curl_easy_setopt(curl, CURLOPT_USERPWD, auth.c_str());
    }

    // Perform the transfer
    CURLcode res = curl_easy_perform(curl);
    
    fclose(outFile);

    if (res != CURLE_OK) {
        m_lastError = curl_easy_strerror(res);
        ft_log("ERROR", m_lastError);
        curl_easy_cleanup(curl);
        // Clean up partial file on failure
        remove(localPath.c_str());
        return false;
    }

    ft_log("INFO", std::string("Downloaded ") + remotePath + " to " + localPath);
    curl_easy_cleanup(curl);
    return true;
}

bool FileTransfer::uploadFile(const std::string& localPath,
                             const std::string& remotePath,
                             const std::string& username,
                             const std::string& password)
{
    m_lastError.clear();

    FILE* inFile = fopen(localPath.c_str(), "rb");
    if (!inFile) {
        m_lastError = "Cannot open local file for reading: " + localPath;
        ft_log("ERROR", m_lastError);
        return false;
    }

    // Get file size
    fseek(inFile, 0, SEEK_END);
    long fileSize = ftell(inFile);
    fseek(inFile, 0, SEEK_SET);

    CURL* curl = curl_easy_init();
    if (!curl) {
        m_lastError = "Failed to initialize CURL";
        ft_log("ERROR", m_lastError);
        fclose(inFile);
        return false;
    }

    // Log the attempted URL for debugging
    ft_log("INFO", std::string("Uploading to: ") + remotePath);
    
    // Set CURL options
    curl_easy_setopt(curl, CURLOPT_URL, remotePath.c_str());
    curl_easy_setopt(curl, CURLOPT_UPLOAD, 1L);
    curl_easy_setopt(curl, CURLOPT_READFUNCTION, read_callback);
    curl_easy_setopt(curl, CURLOPT_READDATA, inFile);
    curl_easy_setopt(curl, CURLOPT_INFILESIZE, fileSize);
    curl_easy_setopt(curl, CURLOPT_CONNECTTIMEOUT, m_connectTimeout);
    curl_easy_setopt(curl, CURLOPT_TIMEOUT, m_transferTimeout);
    curl_easy_setopt(curl, CURLOPT_NOPROGRESS, 1L);
    curl_easy_setopt(curl, CURLOPT_FAILONERROR, 1L);
    
    // Enable verbose mode to see SSH handshake details
    curl_easy_setopt(curl, CURLOPT_VERBOSE, 1L);
    curl_easy_setopt(curl, CURLOPT_DEBUGFUNCTION, debug_callback);

    // For SFTP: Accept any SSH host key without verification
    // This allows password-based auth to untrusted hosts
    // The hostkey doesn't need to be known in advance
    curl_easy_setopt(curl, CURLOPT_SSH_KNOWNHOSTS, 0);
    curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, 0L);
    curl_easy_setopt(curl, CURLOPT_SSL_VERIFYHOST, 0L);

    // Set authentication if provided
    if (!username.empty() && !password.empty()) {
        std::string auth = username + ":" + password;
        ft_log("INFO", std::string("Using username: ") + username);
        curl_easy_setopt(curl, CURLOPT_USERPWD, auth.c_str());
        
        // Force password auth for SFTP (some systems need this)
        curl_easy_setopt(curl, CURLOPT_SSH_AUTH_TYPES, CURLSSH_AUTH_PASSWORD);
    }

    // Perform the transfer
    CURLcode res = curl_easy_perform(curl);

    fclose(inFile);

    if (res != CURLE_OK) {
        m_lastError = curl_easy_strerror(res);
        ft_log("ERROR", m_lastError);
        curl_easy_cleanup(curl);
        return false;
    }

    ft_log("INFO", std::string("Uploaded ") + localPath + " to " + remotePath);
    curl_easy_cleanup(curl);
    return true;
}

bool FileTransfer::listDirectory(const std::string& remotePath,
                                const std::string& username,
                                const std::string& password,
                                std::vector<FileInfo>& files)
{
    m_lastError.clear();
    files.clear();

    CURL* curl = curl_easy_init();
    if (!curl) {
        m_lastError = "Failed to initialize CURL";
        return false;
    }

    std::string listOutput;
    
    // Callback to capture listing output
    auto list_callback = [](void* contents, size_t size, size_t nmemb, std::string* userp) -> size_t {
        userp->append((char*)contents, size * nmemb);
        return size * nmemb;
    };

    curl_easy_setopt(curl, CURLOPT_URL, remotePath.c_str());
    curl_easy_setopt(curl, CURLOPT_DIRLISTONLY, 1L);
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, list_callback);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &listOutput);
    curl_easy_setopt(curl, CURLOPT_CONNECTTIMEOUT, m_connectTimeout);
    curl_easy_setopt(curl, CURLOPT_TIMEOUT, m_transferTimeout);

    if (!username.empty() && !password.empty()) {
        std::string auth = username + ":" + password;
        curl_easy_setopt(curl, CURLOPT_USERPWD, auth.c_str());
    }

    CURLcode res = curl_easy_perform(curl);

    if (res != CURLE_OK) {
        m_lastError = curl_easy_strerror(res);
        curl_easy_cleanup(curl);
        return false;
    }

    // Parse the output
    std::istringstream stream(listOutput);
    std::string line;
    while (std::getline(stream, line)) {
        if (!line.empty()) {
            FileInfo info;
            info.name = line;
            info.isDirectory = false; // curl DIRLISTONLY doesn't distinguish
            info.size = 0;
            files.push_back(info);
        }
    }

    LOG_INFO("FileTransfer: Listed %zu items in %s", files.size(), remotePath.c_str());
    curl_easy_cleanup(curl);
    return true;
}

} // namespace inputleap
