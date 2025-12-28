/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/MainWindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN10MainWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto MainWindow::qt_create_metaobjectdata<qt_meta_tag_ZN10MainWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MainWindow",
        "requestLanguageChange",
        "",
        "newLanguage",
        "appendLogRaw",
        "text",
        "appendLogInfo",
        "appendLogDebug",
        "appendLogError",
        "start_cmd_app",
        "setServerMode",
        "isServerMode",
        "on_m_pGroupClient_toggled",
        "on",
        "on_m_pGroupServer_toggled",
        "on_m_pButtonBrowseConfigFile_clicked",
        "on_m_pButtonConfigureServer_clicked",
        "on_m_pActionSave_triggered",
        "on_m_pActionAbout_triggered",
        "on_m_pActionSettings_triggered",
        "on_m_pActionSendFile_triggered",
        "cmd_app_finished",
        "exitCode",
        "QProcess::ExitStatus",
        "trayActivated",
        "QSystemTrayIcon::ActivationReason",
        "reason",
        "stop_cmd_app",
        "logOutput",
        "logError",
        "bonjourInstallFinished",
        "showLogWindow",
        "on_m_pCheckBoxAutoConfig_toggled",
        "checked",
        "comboServerList_currentIndexChanged",
        "on_m_pButtonReload_clicked",
        "installBonjour"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'requestLanguageChange'
        QtMocHelpers::SignalData<void(QString)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Slot 'appendLogRaw'
        QtMocHelpers::SlotData<void(const QString &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 },
        }}),
        // Slot 'appendLogInfo'
        QtMocHelpers::SlotData<void(const QString &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 },
        }}),
        // Slot 'appendLogDebug'
        QtMocHelpers::SlotData<void(const QString &)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 },
        }}),
        // Slot 'appendLogError'
        QtMocHelpers::SlotData<void(const QString &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 },
        }}),
        // Slot 'start_cmd_app'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setServerMode'
        QtMocHelpers::SlotData<void(bool)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 11 },
        }}),
        // Slot 'on_m_pGroupClient_toggled'
        QtMocHelpers::SlotData<void(bool)>(12, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Bool, 13 },
        }}),
        // Slot 'on_m_pGroupServer_toggled'
        QtMocHelpers::SlotData<void(bool)>(14, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Bool, 13 },
        }}),
        // Slot 'on_m_pButtonBrowseConfigFile_clicked'
        QtMocHelpers::SlotData<bool()>(15, 2, QMC::AccessProtected, QMetaType::Bool),
        // Slot 'on_m_pButtonConfigureServer_clicked'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'on_m_pActionSave_triggered'
        QtMocHelpers::SlotData<bool()>(17, 2, QMC::AccessProtected, QMetaType::Bool),
        // Slot 'on_m_pActionAbout_triggered'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'on_m_pActionSettings_triggered'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'on_m_pActionSendFile_triggered'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'cmd_app_finished'
        QtMocHelpers::SlotData<void(int, QProcess::ExitStatus)>(21, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 22 }, { 0x80000000 | 23, 2 },
        }}),
        // Slot 'trayActivated'
        QtMocHelpers::SlotData<void(QSystemTrayIcon::ActivationReason)>(24, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 25, 26 },
        }}),
        // Slot 'stop_cmd_app'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'logOutput'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'logError'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'bonjourInstallFinished'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'showLogWindow'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'on_m_pCheckBoxAutoConfig_toggled'
        QtMocHelpers::SlotData<void(bool)>(32, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 33 },
        }}),
        // Slot 'comboServerList_currentIndexChanged'
        QtMocHelpers::SlotData<void(QString)>(34, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'on_m_pButtonReload_clicked'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'installBonjour'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MainWindow, qt_meta_tag_ZN10MainWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10MainWindowE_t>.metaTypes,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MainWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->requestLanguageChange((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->appendLogRaw((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->appendLogInfo((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->appendLogDebug((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->appendLogError((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->start_cmd_app(); break;
        case 6: _t->setServerMode((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->on_m_pGroupClient_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->on_m_pGroupServer_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: { bool _r = _t->on_m_pButtonBrowseConfigFile_clicked();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->on_m_pButtonConfigureServer_clicked(); break;
        case 11: { bool _r = _t->on_m_pActionSave_triggered();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 12: _t->on_m_pActionAbout_triggered(); break;
        case 13: _t->on_m_pActionSettings_triggered(); break;
        case 14: _t->on_m_pActionSendFile_triggered(); break;
        case 15: _t->cmd_app_finished((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QProcess::ExitStatus>>(_a[2]))); break;
        case 16: _t->trayActivated((*reinterpret_cast<std::add_pointer_t<QSystemTrayIcon::ActivationReason>>(_a[1]))); break;
        case 17: _t->stop_cmd_app(); break;
        case 18: _t->logOutput(); break;
        case 19: _t->logError(); break;
        case 20: _t->bonjourInstallFinished(); break;
        case 21: _t->showLogWindow(); break;
        case 22: _t->on_m_pCheckBoxAutoConfig_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 23: _t->comboServerList_currentIndexChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 24: _t->on_m_pButtonReload_clicked(); break;
        case 25: _t->installBonjour(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(QString )>(_a, &MainWindow::requestLanguageChange, 0))
            return;
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.strings))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 26;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::requestLanguageChange(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
QT_WARNING_POP
