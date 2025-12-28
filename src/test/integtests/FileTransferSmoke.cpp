/*
 * FileTransfer smoke test using libcurl-backed FileTransfer.
 * Configure with env vars:
 *   FILETX_URL            Base URL (ftp://host[:port]/path or sftp:// or http[s]://)
 *   FILETX_USER           Optional username
 *   FILETX_PASS           Optional password
 *   FILETX_LIST_URL       Optional URL to directory to list (defaults to FILETX_URL)
 *   FILETX_DOWNLOAD_URL   Optional full URL to download
 *   FILETX_DOWNLOAD_OUT   Optional local path (default /tmp/ft_smoke_download.bin)
 *   FILETX_UPLOAD_URL     Optional full URL to upload to
 *   FILETX_UPLOAD_IN      Optional local file path; if missing a temp file is created
 *
 * Returns non-zero on any configured step failure.
 */

#include "net/FileTransfer.h"
#include "base/Log.h"
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using inputleap::FileTransfer;
using inputleap::Log;

namespace {

std::string getenv_str(const char* key)
{
    const char* val = std::getenv(key);
    return val ? std::string(val) : std::string();
}

struct Step {
    std::string name;
    bool enabled{false};
    bool ok{false};
    std::string detail;
};

} // namespace

int main()
{
    Log log;
    log.setFilter(kINFO);

    const std::string baseUrl = getenv_str("FILETX_URL");
    const std::string user = getenv_str("FILETX_USER");
    const std::string pass = getenv_str("FILETX_PASS");

    if (baseUrl.empty()) {
        std::cerr << "FILETX_URL is required (ftp://, sftp://, or http[s]://)." << std::endl;
        return 1;
    }

    FileTransfer ft;

    Step list{"list", false, false, ""};
    Step dl{"download", false, false, ""};
    Step ul{"upload", false, false, ""};

    const std::string listUrl = getenv_str("FILETX_LIST_URL");
    if (!listUrl.empty() || !baseUrl.empty()) {
        list.enabled = true;
        std::vector<FileTransfer::FileInfo> entries;
        const std::string target = listUrl.empty() ? baseUrl : listUrl;
        if (ft.listDirectory(target, user, pass, entries)) {
            list.ok = true;
            list.detail = "entries=" + std::to_string(entries.size());
            std::cout << "LIST OK: " << target << " entries=" << entries.size() << std::endl;
        } else {
            list.detail = ft.getLastError();
            std::cerr << "LIST FAIL: " << target << " error=" << list.detail << std::endl;
        }
    }

    const std::string dlUrl = getenv_str("FILETX_DOWNLOAD_URL");
    const std::string dlOut = getenv_str("FILETX_DOWNLOAD_OUT").empty() ? "/tmp/ft_smoke_download.bin" : getenv_str("FILETX_DOWNLOAD_OUT");
    if (!dlUrl.empty()) {
        dl.enabled = true;
        if (ft.downloadFile(dlUrl, dlOut, user, pass)) {
            dl.ok = true;
            dl.detail = dlOut;
            std::cout << "DOWNLOAD OK: " << dlUrl << " -> " << dlOut << std::endl;
        } else {
            dl.detail = ft.getLastError();
            std::cerr << "DOWNLOAD FAIL: " << dlUrl << " error=" << dl.detail << std::endl;
        }
    }

    const std::string ulUrl = getenv_str("FILETX_UPLOAD_URL");
    std::string ulIn = getenv_str("FILETX_UPLOAD_IN");
    if (!ulUrl.empty()) {
        ul.enabled = true;
        std::string tempPath;
        if (ulIn.empty()) {
            tempPath = "/tmp/ft_smoke_upload.bin";
            std::ofstream f(tempPath, std::ios::binary);
            f << "FileTransfer smoke upload";
            f.close();
            ulIn = tempPath;
        }
        if (ft.uploadFile(ulIn, ulUrl, user, pass)) {
            ul.ok = true;
            ul.detail = ulIn;
            std::cout << "UPLOAD OK: " << ulIn << " -> " << ulUrl << std::endl;
        } else {
            ul.detail = ft.getLastError();
            std::cerr << "UPLOAD FAIL: " << ulIn << " -> " << ulUrl << " error=" << ul.detail << std::endl;
        }
    }

    int failures = 0;
    for (const Step* s : {&list, &dl, &ul}) {
        if (s->enabled && !s->ok) {
            ++failures;
        }
    }

    if (!list.enabled && !dl.enabled && !ul.enabled) {
        std::cerr << "Nothing to do: set at least one of FILETX_LIST_URL, FILETX_DOWNLOAD_URL, or FILETX_UPLOAD_URL." << std::endl;
        return 1;
    }

    return failures == 0 ? 0 : 2;
}
