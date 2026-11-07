/****************************************************************************
** Meta object code from reading C++ file 'GuiRefusedChat.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../beebeep-code-r1612/src/desktop/GuiRefusedChat.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GuiRefusedChat.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GuiRefusedChat_t {
    QByteArrayData data[6];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GuiRefusedChat_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GuiRefusedChat_t qt_meta_stringdata_GuiRefusedChat = {
    {
QT_MOC_LITERAL(0, 0, 14), // "GuiRefusedChat"
QT_MOC_LITERAL(1, 15, 12), // "saveAndClose"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 14), // "openCustomMenu"
QT_MOC_LITERAL(4, 44, 17), // "removeRefusedChat"
QT_MOC_LITERAL(5, 62, 21) // "removeAllRefusedChats"

    },
    "GuiRefusedChat\0saveAndClose\0\0"
    "openCustomMenu\0removeRefusedChat\0"
    "removeAllRefusedChats"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GuiRefusedChat[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x09 /* Protected */,
       3,    1,   35,    2, 0x09 /* Protected */,
       4,    0,   38,    2, 0x09 /* Protected */,
       5,    0,   39,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GuiRefusedChat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GuiRefusedChat *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->saveAndClose(); break;
        case 1: _t->openCustomMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 2: _t->removeRefusedChat(); break;
        case 3: _t->removeAllRefusedChats(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GuiRefusedChat::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_GuiRefusedChat.data,
    qt_meta_data_GuiRefusedChat,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GuiRefusedChat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GuiRefusedChat::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GuiRefusedChat.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int GuiRefusedChat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
