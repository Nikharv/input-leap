# Input Leap AI Coding Assistant Instructions

## Project Overview

Input Leap is a software KVM switch that allows sharing a keyboard and mouse across multiple computers over a network. This is a fork of Barrier by its active maintainers, focusing on reliability and simplicity.

**Core Capabilities**: Keyboard/mouse sharing, clipboard sharing (not on Wayland), multi-platform support (Windows, macOS, Linux, *BSD)

## Architecture

### Three-Tier Component Structure

1. **Platform Layer** ([src/lib/platform](src/lib/platform/))
   - OS-specific implementations: `MSWindows*.cpp`, `OSX*.cpp`, `XWindows*.cpp`, `Ei*.cpp` (libei for Wayland)
   - Platform detection via `BUILD_MSWINDOWS`, `BUILD_CARBON`, `BUILD_XWINDOWS`, `BUILD_LIBEI` macros
   - Unity build exclusions: `.mm` files on macOS must set `SKIP_UNITY_BUILD_INCLUSION TRUE`

2. **Client/Server Core** ([src/lib/server](src/lib/server/), [src/lib/client](src/lib/client/))
   - `Server` class: Manages connected clients, clipboard syncing, screen configuration
   - `Client` class: Connects to server, handles input from `ServerProxy`
   - `ClientProxy1_6`: Server-side representation of connected client (protocol v1.6)
   - `ServerProxy`: Client-side representation of server, converts calls to protocol messages
   - Protocol messages use `ProtocolUtil::readf/writef` for serialization

3. **GUI Layer** ([src/gui](src/gui/))
   - Qt-based (Qt5 5.9+ or Qt6 6.2+), controlled by `QT_DEFAULT_MAJOR_VERSION`
   - Key classes: `MainWindow`, `ServerConfig`, `Screen`, `ZeroconfBrowser` (Bonjour discovery)
   - Uses Avahi on Linux/BSD (`avahi-compat-libdns_sd` required)

### Critical Data Flows

- **Clipboard sharing**: `ClipboardChunk` class for chunked transfers, max size controlled by `m_maximumClipboardSize`
- **File transfers**: `FileChunk` class, `DragFileList` for drag-and-drop operations
- **Screen coordinates**: Server maps mouse position across client screens using `Config` edge connections

## Build System

### Commands

```bash
# Quick build (uses clean_build.sh)
./clean_build.sh  # Defaults to Debug build in ./build/

# Environment variables
B_BUILD_TYPE=Release B_BUILD_DIR=build-release ./clean_build.sh
B_CMAKE_FLAGS="-DINPUTLEAP_BUILD_GUI=OFF" ./clean_build.sh

# CMake options (see CMakeLists.txt:21-26)
-DINPUTLEAP_BUILD_GUI=ON/OFF        # Qt GUI (default: ON)
-DINPUTLEAP_BUILD_TESTS=ON/OFF      # Unit/integration tests (default: ON)
-DINPUTLEAP_BUILD_X11=ON/OFF        # X11 support (default: ON on Linux)
-DINPUTLEAP_BUILD_LIBEI=ON/OFF      # libei/Wayland support (default: OFF)
-DQT_DEFAULT_MAJOR_VERSION=5/6      # Qt version (default: 6)
```

### Platform-Specific

- **macOS**: Requires `CMAKE_OSX_DEPLOYMENT_TARGET=10.9`, `xcrun` for SDK path
- **Windows**: MSVC required, uses `/MP` for parallel compilation, outputs to `build/bin/`
- **Linux/BSD**: Requires pkg-config, separate packages for X11 vs libei builds

## Testing

```bash
# Run tests after build
cd build
ctest  # or: bin/unittests, bin/integtests
```

Tests use Google Test/Mock (see [cmake/gtest.cmake](cmake/gtest.cmake)). Platform-specific tests in [src/test/integtests](src/test/integtests/) (e.g., `MSWindowsKeyStateTests.cpp`).

## Release Process

**Must use `towncrier` for release notes** (see [RELEASING.md](RELEASING.md)):

```bash
# Add news fragment to doc/newsfragments/
echo "Fixed issue" > doc/newsfragments/my_fix.bugfix
# Types: .feature, .bugfix, .security, .doc, .removal

# Generate release notes
towncrier build --version X.Y.Z --date $(date -u +%F)
```

Update version in: `cmake/Version.cmake`, `doc/input-leapc.1`, `doc/input-leaps.1`, `.github/ISSUE_TEMPLATE/bug_report.yml`, `dist/debian/changelog`

## Project Conventions

### Code Organization

- **No generic utilities**: Project uses `gulrak-filesystem` (header-only), not `std::filesystem` (see `INPUTLEAP_USE_GULRAK_FILESYSTEM`)
- **Logging**: Use `LOG_NOTE()`, `LOG_DEBUG()`, `LOG_ERR()` from [src/lib/base/Log.h](src/lib/base/Log.h)
- **Events**: Custom event system via `IEventQueue`, not Qt signals for core logic

### CMake Patterns

- Libraries link order matters: `arch base client common io ipc mt net platform server synlib` (see [src/test/integtests/CMakeLists.txt](src/test/integtests/CMakeLists.txt#L82))
- Always link OpenSSL: `OpenSSL::SSL OpenSSL::Crypto` (1.1.1+ required)
- Platform guards: Wrap OS-specific code in `#if SYSAPI_WIN32`, `#if WINAPI_CARBON`, `#if WINAPI_XWINDOWS`, `#if WINAPI_LIBEI`

### Common Pitfalls

- **Clipboard on Wayland**: Not supported, check `HAVE_LIBPORTAL_INPUTCAPTURE` before enabling
- **Screen names**: Case-insensitive but case-preserved, must match exactly in GUI config
- **Scroll Lock**: Prevents screen switching when active (user-facing behavior)
- **macOS .mm files**: Must not be in Unity builds (use `set_source_files_properties`)

## Integration Points

- **Bonjour/Zeroconf**: GUI auto-discovery uses dns_sd.h (Avahi on Linux/BSD)
- **OpenSSL**: All network traffic can use TLS, see `m_useSecureNetwork` flag
- **IPC**: Windows daemon uses named pipes ([src/lib/ipc](src/lib/ipc/))

## Quick File Reference

- Server entry: [src/server/input-leaps.cpp](src/server/input-leaps.cpp)
- Client entry: [src/client/input-leapc.cpp](src/client/input-leapc.cpp)
- Protocol definitions: [src/lib/inputleap/protocol_types.h](src/lib/inputleap/protocol_types.h)
- Configuration: [src/lib/server/Config.h](src/lib/server/Config.h)

## Linux Drag-and-Drop (XDND) Implementation

### Overview
XDND (X11 Drag and Drop) support was added to XWindowsScreen to enable drag-and-drop file transfers between Linux and macOS/Windows systems. This addresses GitHub issue #855.

### Key Implementation Details

**Files Modified:**
- `src/lib/platform/XWindowsScreen.h` - Added XDND atom members and method declarations
- `src/lib/platform/XWindowsScreen.cpp` - Implemented XDND protocol handling

**XDND Atoms Initialized in Constructor:**
```cpp
m_atomXdndEnter      = m_impl->XInternAtom(m_display, "XdndEnter", False);
m_atomXdndPosition   = m_impl->XInternAtom(m_display, "XdndPosition", False);
m_atomXdndStatus     = m_impl->XInternAtom(m_display, "XdndStatus", False);
m_atomXdndDrop       = m_impl->XInternAtom(m_display, "XdndDrop", False);
m_atomXdndSelection  = m_impl->XInternAtom(m_display, "XdndSelection", False);
m_atomUtf8String     = m_impl->XInternAtom(m_display, "text/uri-list", False);
```

**Core Methods Implemented:**
- `handle_xdnd_enter()` - Receives XdndEnter from drag source, sets m_xdndDragActive = true
- `handle_xdnd_position()` - Receives XdndPosition, sends XdndStatus accepting drops
- `handle_xdnd_drop()` - Receives XdndDrop, initiates XConvertSelection for file data
- `send_xdnd_status()` - Sends XdndStatus reply to source window
- `request_xdnd_data()` - Requests file list data via XConvertSelection
- `convert_uri_to_path()` - Converts file:// URIs to paths, decodes URL encoding (%20 → space)
- `isDraggingStarted()` - Overrides parent, returns m_xdndDragActive
- `getDraggingFilename()` - Overrides parent, returns m_xdndDragFilenames

**ClientMessage Event Integration:**
Added to `handle_system_event()` switch statement to dispatch XDND protocol messages.

**How It Works:**
1. User drags files from file manager over Input Leap window
2. File manager sends XdndEnter ClientMessage
3. XWindowsScreen::handle_xdnd_enter() sets drag active flag
4. File manager sends XdndPosition as mouse moves
5. XWindowsScreen::handle_xdnd_position() replies with XdndStatus (accept)
6. User releases mouse, file manager sends XdndDrop
7. XWindowsScreen::handle_xdnd_drop() requests file data
8. File data arrives via SelectionNotify with file:// URIs
9. Server detects isDraggingStarted() == true
10. Existing drag-drop protocol sends files across network to client

**Platform Support:**
- ✅ X11 Linux (GNOME, KDE, XFCE, LXDE, others)
- ❌ Wayland (future work, needs EiScreen implementation)
- ⚠️ File managers: Tested with Nautilus, Dolphin, PCManFM

### Testing Checklist
- [ ] Drag files from Linux file manager to Input Leap window
- [ ] Files transfer to secondary Linux client
- [ ] Files transfer to macOS secondary
- [ ] Files transfer to Windows secondary
- [ ] Multi-file operations
- [ ] Filenames with spaces/special chars
- [ ] Different file managers
- [ ] Different desktops (GNOME, KDE, XFCE)

### Known Limitations
- Wayland not supported (requires separate implementation)
- Synchronous XConvertSelection (could be async)
- No error feedback to user
- No duplicate suppression (may send files twice in some cases)

### Code Location
- Linux XDND implementation: `src/lib/platform/XWindowsScreen.h/cpp`
- Drag-drop core logic: `src/lib/inputleap/DragInformation.h/cpp`
- Server drag handling: `src/lib/server/Server.cpp` (lines 1760-1802)
- Client drag handling: `src/lib/client/Client.cpp` (lines 758-768)
