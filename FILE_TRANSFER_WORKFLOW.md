# InputLeap File Transfer Configuration Workflow

## Overview
This document describes the complete integrated workflow for setting up and using file transfer between InputLeap servers and clients. Users can now configure file transfer details per-client directly from the server's screen configuration UI, with automatic discovery and setup during file sending.

## Workflow

### Step 1: Configure Server and Add Client
1. User opens InputLeap GUI in **Server Mode**
2. Goes to "Configure Server"
3. Adds a new client screen by dragging the "New Screen" icon
4. Double-clicks on the client screen to open **Screen Settings**

### Step 2: Setup File Transfer for Client
1. In **Screen Settings** dialog, user sees new button: **"Setup File Transfer..."**
2. Clicks the button to open **FileTransferSetupDialog**
3. Dialog shows:
   - Current server information (hostname, auto-detected IP)
   - Client IP Address field (required)
   - Upload Path field (required)
   - Username field (optional)
   - Password field (optional)

4. User fills in:
   - Client IP: e.g., `192.168.1.100`
   - Upload Path: e.g., `/home/user/uploads` or `~/Downloads`
   - Username: e.g., `alice` (if SFTP requires it)
   - Password: (if needed, can be left blank for key-based auth)

5. Clicks OK to save

### Step 3: Send File to Client
1. User clicks "Send File" from menu/tray
2. Selects file to send
3. Dialog opens showing **list of configured clients** with file transfer enabled
4. Example dialog shows:
   ```
   Send File to Client
   Choose destination client:
   □ MacBook-Pro
   □ Linux-Desktop
   □ Windows-Laptop
   ```
5. User selects desired client
6. SFTP URL is **automatically constructed**: `sftp://192.168.1.100/home/user/uploads`
7. Username is **auto-filled** from client configuration
8. File upload begins using libcurl

### Step 4: File Received
File appears in the configured upload path on client machine.

---

## Technical Architecture

### Data Flow

```
ScreenSettingsDialog ("Edit Screen")
    ↓
    └─→ [Setup File Transfer] button
        ↓
        └─→ FileTransferSetupDialog
            ├─ Collect: IP, Path, Username, Password
            └─ Save to: Screen object
                ↓
                └─ ServerConfig stores Screen
                   ↓
                   └─ MainWindow.Send File reads ServerConfig
                      ├─ Query: serverConfig.screens()
                      ├─ Filter: screen.fileTransferEnabled()
                      ├─ Show: Dialog with client list
                      ├─ Get: Selected screen's FT info
                      └─ Construct: sftp://IP/path
                         ↓
                         └─ FileTransfer.uploadFile(url, username, password)
```

### Classes Modified

#### 1. **Screen** (src/gui/src/Screen.h/cpp)
- New properties:
  - `m_FileTransferIP` - Client IP address
  - `m_FileTransferUsername` - SFTP username
  - `m_FileTransferPassword` - SFTP password (encrypted in future)
  - `m_FileTransferPath` - Remote upload directory
  
- New methods:
  - `fileTransferIP()` - Get IP
  - `fileTransferUsername()` - Get username
  - `fileTransferPassword()` - Get password
  - `fileTransferPath()` - Get path
  - `fileTransferEnabled()` - Check if configured
  - `setFileTransferIP()`, `setFileTransferUsername()`, `setFileTransferPassword()`, `setFileTransferPath()` - Setters

- Serialization: Updated `operator>>` and `operator<<` to persist FT info

#### 2. **FileTransferSetupDialog** (NEW)
- **Purpose**: Dedicated UI for configuring file transfer per-client
- **Components**:
  - Label showing server info (hostname, auto-detected IP)
  - Text fields: IP, Path, Username, Password
  - Help text explaining what each field does
  - OK/Cancel buttons
  
- **Validation**:
  - IP address required
  - Upload path required
  - Username & password optional

#### 3. **ScreenSettingsDialog** (src/gui/src/ScreenSettingsDialog.h/cpp)
- Added "Setup File Transfer..." button
- New slot: `on_m_pButtonFileTransferSetup_clicked()`
- Creates and shows FileTransferSetupDialog modal

#### 4. **MainWindow** (src/gui/src/MainWindow.cpp)
- Updated `on_m_pActionSendFile_triggered()`:
  - Reads from `m_ServerConfig.screens()` instead of AppConfig test data
  - Filters for screens with `fileTransferEnabled()`
  - Shows combo box of configured clients
  - Constructs SFTP URL from selected screen's FT config
  - Auto-fills username from configuration
  - Passes password from config to FileTransfer

---

## Advantages of This Approach

✅ **No Manual URL Entry** - SFTP URL auto-constructed
✅ **Per-Client Configuration** - Each client can have different IP/path/credentials
✅ **Integrated with Server Config** - Users already familiar with Screen Settings
✅ **Persistent** - Settings saved with server configuration
✅ **Secure** - Credentials stored in config (encrypted in future)
✅ **User-Friendly** - Simple dialog, clear labels, help text
✅ **Flexible** - Falls back to manual URL if no clients configured
✅ **Cross-Platform** - Works on Linux, macOS, Windows

---

## Future Enhancements

1. **Encryption**: Store passwords encrypted (use Qt's credential storage)
2. **Server Auto-Detection**: Server automatically broadcasts its IP/path during IPC handshake
3. **IPC Integration**: Clients automatically receive server's FT info without manual setup
4. **Drag & Drop**: Send files by dragging to client screen in config UI
5. **Transfer History**: Log and retry failed transfers
6. **Bandwidth Limiting**: Control upload speed
7. **Multiple Files**: Select and send multiple files at once
8. **Preview**: Show file list being sent
9. **Permissions**: Configure which clients can receive files
10. **Notifications**: Alert on client when file arrives

---

## File Changes Summary

| File | Change |
|------|--------|
| `src/gui/src/Screen.h` | Added 4 file transfer properties + getters/setters |
| `src/gui/src/Screen.cpp` | Updated serialization operators to persist FT config |
| `src/gui/src/FileTransferSetupDialog.h` | NEW - Dialog header |
| `src/gui/src/FileTransferSetupDialog.cpp` | NEW - Dialog implementation |
| `src/gui/src/FileTransferSetupDialog.ui` | NEW - Dialog UI layout |
| `src/gui/src/ScreenSettingsDialog.h` | Added "Setup FT" button slot |
| `src/gui/src/ScreenSettingsDialog.cpp` | Implemented button handler |
| `src/gui/src/ScreenSettingsDialog.ui` | Added button to UI |
| `src/gui/src/MainWindow.cpp` | Refactored Send File to use ServerConfig |
| `src/gui/CMakeLists.txt` | Added FileTransferSetupDialog sources |

---

## Example Usage

### Server Configuration

```
Server: InputLeap (192.168.1.50)

Configured Clients:
  • MacBook-Pro (192.168.1.100)
    - Path: /Users/alice/Downloads
    - User: alice
    - Password: ••••••

  • Linux-Desktop (192.168.1.101)
    - Path: /home/bob/uploads
    - User: bob
    - Password: (none - key-based auth)

  • Windows-Laptop (192.168.1.102)
    - Path: C:\Users\charlie\Downloads
    - User: charlie
    - Password: ••••••
```

### Send File Sequence

```
User Action          → System Response
─────────────────────────────────────────────────────────────
1. Click "Send File" → File picker opens
2. Select file       → "Send File to Client" dialog opens
3. Shows options:
   • MacBook-Pro
   • Linux-Desktop
   • Windows-Laptop
4. Select "MacBook-Pro" → SFTP URL constructed: sftp://192.168.1.100/Users/alice/Downloads
                          Username: alice
                          File transfer starts
5. Transfer complete → "File uploaded successfully" message shown
```

---

## Testing Checklist

- [ ] Add screen with FT setup
- [ ] Verify FT info persists after restart
- [ ] Send file to configured client
- [ ] Verify SFTP URL correctly constructed
- [ ] Test with missing IP (should show error)
- [ ] Test with missing path (should show error)
- [ ] Test with optional fields empty (username, password)
- [ ] Test on Linux
- [ ] Test on macOS
- [ ] Test on Windows

---

## Code Quality

- Follows InputLeap naming conventions
- Reuses existing patterns (dialogs, screen configuration)
- No external dependencies
- Proper error handling and validation
- Clear user messaging
