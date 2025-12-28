/****************************************************************************
** Meta object code from reading C++ file 'ServerConfigDialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ServerConfigDialog.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ServerConfigDialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN18ServerConfigDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto ServerConfigDialog::qt_create_metaobjectdata<qt_meta_tag_ZN18ServerConfigDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ServerConfigDialog",
        "accept",
        "",
        "message",
        "on_m_pButtonNewHotkey_clicked",
        "on_m_pListHotkeys_itemSelectionChanged",
        "on_m_pButtonEditHotkey_clicked",
        "on_m_pButtonRemoveHotkey_clicked",
        "on_m_pButtonNewAction_clicked",
        "on_m_pListActions_itemSelectionChanged",
        "on_m_pButtonEditAction_clicked",
        "on_m_pButtonRemoveAction_clicked",
        "on_m_pCheckBoxEnableClipboard_stateChanged",
        "state"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'accept'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'message'
        QtMocHelpers::SlotData<void(const QString &)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Slot 'on_m_pButtonNewHotkey_clicked'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'on_m_pListHotkeys_itemSelectionChanged'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'on_m_pButtonEditHotkey_clicked'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'on_m_pButtonRemoveHotkey_clicked'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'on_m_pButtonNewAction_clicked'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'on_m_pListActions_itemSelectionChanged'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'on_m_pButtonEditAction_clicked'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'on_m_pButtonRemoveAction_clicked'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'on_m_pCheckBoxEnableClipboard_stateChanged'
        QtMocHelpers::SlotData<void(int)>(12, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 13 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ServerConfigDialog, qt_meta_tag_ZN18ServerConfigDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ServerConfigDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18ServerConfigDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18ServerConfigDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN18ServerConfigDialogE_t>.metaTypes,
    nullptr
} };

void ServerConfigDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ServerConfigDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->message((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->on_m_pButtonNewHotkey_clicked(); break;
        case 3: _t->on_m_pListHotkeys_itemSelectionChanged(); break;
        case 4: _t->on_m_pButtonEditHotkey_clicked(); break;
        case 5: _t->on_m_pButtonRemoveHotkey_clicked(); break;
        case 6: _t->on_m_pButtonNewAction_clicked(); break;
        case 7: _t->on_m_pListActions_itemSelectionChanged(); break;
        case 8: _t->on_m_pButtonEditAction_clicked(); break;
        case 9: _t->on_m_pButtonRemoveAction_clicked(); break;
        case 10: _t->on_m_pCheckBoxEnableClipboard_stateChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *ServerConfigDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ServerConfigDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18ServerConfigDialogE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ServerConfigDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
