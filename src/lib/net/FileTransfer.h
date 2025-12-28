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

#pragma once

#include <string>
#include <vector>
#include <memory>

namespace inputleap {

/**
 * @class FileTransfer
 * Cross-platform file transfer client using libcurl
 * Supports uploading and downloading files via FTP, SFTP, and HTTP
 */
class FileTransfer {
public:
    enum Protocol {
        FTP,    // FTP (port 21 or custom)
        SFTP,   // SFTP (port 22 or custom)
        HTTP    // HTTP/HTTPS
    };

    struct FileInfo {
        std::string name;
        size_t size;
        bool isDirectory;
    };

    FileTransfer();
    ~FileTransfer();

    /**
     * Download a file from remote server
     * @param remotePath Full URL or path to remote file
     * @param localPath Local file path to save to
     * @param username Optional username for authentication
     * @param password Optional password for authentication
     * @return true if successful, false otherwise
     */
    bool downloadFile(const std::string& remotePath,
                     const std::string& localPath,
                     const std::string& username = "",
                     const std::string& password = "");

    /**
     * Upload a file to remote server
     * @param localPath Local file path to upload
     * @param remotePath Full URL or path on remote server
     * @param username Optional username for authentication
     * @param password Optional password for authentication
     * @return true if successful, false otherwise
     */
    bool uploadFile(const std::string& localPath,
                   const std::string& remotePath,
                   const std::string& username = "",
                   const std::string& password = "");

    /**
     * List files in a remote directory
     * @param remotePath Remote directory path
     * @param username Optional username
     * @param password Optional password
     * @param files Output vector of file info
     * @return true if successful
     */
    bool listDirectory(const std::string& remotePath,
                      const std::string& username,
                      const std::string& password,
                      std::vector<FileInfo>& files);

    /**
     * Get the last error message
     */
    const std::string& getLastError() const { return m_lastError; }

    /**
     * Set connection timeout in seconds
     */
    void setConnectTimeout(long seconds) { m_connectTimeout = seconds; }

    /**
     * Set transfer timeout in seconds
     */
    void setTransferTimeout(long seconds) { m_transferTimeout = seconds; }

private:
    std::string m_lastError;
    long m_connectTimeout = 10;  // 10 seconds
    long m_transferTimeout = 60; // 60 seconds
};

} // namespace inputleap
