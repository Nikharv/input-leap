#include <iostream>
#include <QCoreApplication>
#include <QSettings>
#include "src/gui/src/AppConfig.h"

int main(int argc, char **argv)
{
    QCoreApplication app(argc, argv);
    
    // Create temporary settings
    QSettings settings("TestApp", "TestConfig");
    AppConfig config(&settings);
    
    // Test 1: Add a peer
    config.setPeerFileTransferInfo(
        "macOS-machine",
        "192.168.1.100",
        "user1",
        "/uploads"
    );
    
    std::cout << "Added peer: macOS-machine" << std::endl;
    
    // Test 2: Add another peer
    config.setPeerFileTransferInfo(
        "Linux-machine",
        "192.168.1.101",
        "user2",
        "/home/user2/uploads"
    );
    
    std::cout << "Added peer: Linux-machine" << std::endl;
    
    // Test 3: Retrieve peers
    const auto peers = config.connectedPeers();
    std::cout << "Connected peers: " << std::endl;
    for (const auto& peer : peers) {
        std::cout << "  - " << peer.toStdString() << std::endl;
    }
    
    // Test 4: Retrieve peer info
    const auto info1 = config.peerFileTransferInfo("macOS-machine");
    std::cout << "macOS-machine info:" << std::endl;
    std::cout << "  Host: " << info1.hostName.toStdString() << std::endl;
    std::cout << "  User: " << info1.userName.toStdString() << std::endl;
    std::cout << "  Path: " << info1.uploadPath.toStdString() << std::endl;
    
    // Test 5: Construct SFTP URL like MainWindow does
    const auto url = QString("sftp://%1%2")
                     .arg(info1.hostName, info1.uploadPath);
    std::cout << "Constructed URL: " << url.toStdString() << std::endl;
    
    return 0;
}
