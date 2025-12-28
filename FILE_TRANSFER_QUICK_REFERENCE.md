# InputLeap File Transfer - Quick Reference

## For Users

### Setup (One-time)
1. **Launch InputLeap** → Server mode
2. **Configure Server** → Drag screens for each client
3. **Double-click each screen** → Click "Setup File Transfer..."
4. **Enter client details**:
   - IP: Client machine's IP address
   - Path: Where to save files (e.g., ~/Downloads)
   - User: Client's SSH username (optional)
   - Pass: Client's password (optional)
5. **Save** → Configuration persists

### Send File
1. **Menu** → Send File (or tray menu)
2. **Pick file** to send
3. **Select client** from list
4. **Done** → File uploads automatically

---

## For Developers

### Add File Transfer to a Screen
```cpp
// In ScreenSettingsDialog.cpp
Screen* screen = ...;  // The screen being configured

// Set file transfer info
screen->setFileTransferIP("192.168.1.100");
screen->setFileTransferPath("/home/user/uploads");
screen->setFileTransferUsername("alice");
screen->setFileTransferPassword("secret");

// Check if enabled
if (screen->fileTransferEnabled()) {
    // File transfer is configured
}
```

### Query Configured Clients
```cpp
// In MainWindow.cpp
ServerConfig& serverConfig = m_ServerConfig;
QStringList availableClients;

for (const auto& screen : serverConfig.screens()) {
    if (screen.fileTransferEnabled()) {
        availableClients.append(screen.name());
    }
}

// Show to user
QString selectedClient = QInputDialog::getItem(this,
    "Send File", "Choose client:", availableClients);
```

### Get Configuration
```cpp
const Screen* screen = ...;  // The selected screen

QString sftp_url = QString("sftp://%1%2")
    .arg(screen->fileTransferIP(), 
         screen->fileTransferPath());
QString username = screen->fileTransferUsername();
QString password = screen->fileTransferPassword();

// Use with FileTransfer
transfer.uploadFile(file, sftp_url.toStdString(),
                   username.toStdString(),
                   password.toStdString());
```

---

## File Locations

### Source Files
- `src/gui/src/FileTransferSetupDialog.h` - Dialog header
- `src/gui/src/FileTransferSetupDialog.cpp` - Dialog implementation
- `src/gui/src/FileTransferSetupDialog.ui` - Dialog layout
- `src/gui/src/Screen.h/cpp` - Screen config storage
- `src/gui/src/ScreenSettingsDialog.h/cpp` - Integration point
- `src/gui/src/MainWindow.cpp` - Send File logic

### Documentation
- `FILE_TRANSFER_WORKFLOW.md` - Complete workflow
- `TEST_FILE_TRANSFER_WORKFLOW.py` - Testing guide
- `IMPLEMENTATION_SUMMARY.md` - Technical summary

---

## Key Classes

### `FileTransferSetupDialog`
**Purpose**: Collect FT config from user
**Methods**:
- `FileTransferSetupDialog(parent, screen)` - Constructor
- `accept()` - Validate and save

### `Screen`
**New Properties**:
- `fileTransferIP()` - Get IP
- `fileTransferPath()` - Get path
- `fileTransferUsername()` - Get user
- `fileTransferPassword()` - Get pass
- `fileTransferEnabled()` - Is configured?

**New Setters**:
- `setFileTransferIP(ip)`
- `setFileTransferPath(path)`
- `setFileTransferUsername(user)`
- `setFileTransferPassword(pass)`

### `ScreenSettingsDialog`
**New Methods**:
- `on_m_pButtonFileTransferSetup_clicked()` - Show dialog

---

## Data Flow

```
ServerConfig
├── std::vector<Screen> screens
│   ├── Screen 1: MacBook-Pro
│   │   ├── name: "MacBook-Pro"
│   │   ├── aliases: [...]
│   │   └── [NEW] fileTransfer:
│   │       ├── IP: "192.168.1.100"
│   │       ├── path: "/Users/alice/Downloads"
│   │       ├── user: "alice"
│   │       └── pass: "secret"
│   │
│   └── Screen 2: Linux-Desktop
│       └── [NEW] fileTransfer:
│           ├── IP: "192.168.1.101"
│           ├── path: "/home/bob/uploads"
│           ├── user: "bob"
│           └── pass: "mypass"
```

---

## Common Tasks

### Check if Client Has File Transfer
```cpp
if (screen.fileTransferEnabled()) {
    // Yes, can send files
}
```

### Build SFTP URL
```cpp
QString url = QString("sftp://%1%2")
    .arg(screen.fileTransferIP(),
         screen.fileTransferPath());
// Result: "sftp://192.168.1.100/home/user/uploads"
```

### Validate Configuration
```cpp
if (screen.fileTransferIP().isEmpty()) {
    qWarning() << "IP missing!";
}
if (screen.fileTransferPath().isEmpty()) {
    qWarning() << "Path missing!";
}
```

### Show Configured Clients
```cpp
QStringList clients;
for (const auto& screen : m_ServerConfig.screens()) {
    if (screen.fileTransferEnabled()) {
        clients << screen.name();
    }
}
// clients = ["MacBook-Pro", "Linux-Desktop"]
```

---

## Testing Checklist

- [ ] Compile successfully
- [ ] Add FT config for a screen
- [ ] Config persists on restart
- [ ] Send file to configured client
- [ ] Error on missing IP
- [ ] Error on missing path
- [ ] Multiple clients work
- [ ] Credentials auto-filled
- [ ] Manual URL fallback works

---

## Error Messages

| Error | Cause | Solution |
|-------|-------|----------|
| IP missing | User didn't enter IP | Configure in Setup dialog |
| Path missing | User didn't enter path | Configure in Setup dialog |
| Connection refused | Client IP wrong or offline | Verify IP, check client online |
| Authentication failed | Wrong username/password | Update credentials in Setup |
| Upload failed | Path doesn't exist | Create directory on client |
| No file transfer configured | Client not set up | Use manual URL entry |

---

## Future APIs

### Auto-Detection
```cpp
// Server broadcasts its info to client
server.broadcastFileTransferInfo(hostname, ip, username, path);

// Client receives and stores
client.onServerFileTransferInfo(hostname, ip, username, path);
```

### IPC Exchange
```cpp
// Server sends to client during handshake
IpcFileTransferInfoMessage msg(hostname, username, path);
ipcClient.sendFileTransferInfo(msg);
```

### Drag & Drop
```cpp
// Drag client screen to file
void ServerConfigDialog::drop(const QDropEvent& event) {
    QString screenName = event.mimeData()->text();
    QString filePath = event.mimeData()->urls()[0].path();
    sendFileToScreen(filePath, screenName);
}
```

---

## Performance

- **Memory per client**: ~100 bytes (4 strings)
- **Startup time**: No impact
- **Send File dialog**: One extra query to ServerConfig
- **Transfer time**: Same as before (libcurl SFTP)

---

## Security Notes

⚠️ Passwords stored in plaintext in config file
🔒 Use SSH keys instead where possible
🔐 Future: Encrypt passwords at rest

---

## Getting Help

**See also**:
- `FILE_TRANSFER_WORKFLOW.md` - Detailed workflow
- `TEST_FILE_TRANSFER_WORKFLOW.py` - Test scenarios
- `IMPLEMENTATION_SUMMARY.md` - Full technical details
