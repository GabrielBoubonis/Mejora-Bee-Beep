/****************************************************************************
** Meta object code from reading C++ file 'GuiVCard.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../beebeep-code-r1612/src/desktop/GuiVCard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GuiVCard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GuiVCard_t {
    QByteArrayData data[16];
    char stringdata0[189];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GuiVCard_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GuiVCard_t qt_meta_stringdata_GuiVCard = {
    {
QT_MOC_LITERAL(0, 0, 8), // "GuiVCard"
QT_MOC_LITERAL(1, 9, 8), // "showChat"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 7), // "VNumber"
QT_MOC_LITERAL(4, 27, 8), // "sendFile"
QT_MOC_LITERAL(5, 36, 15), // "changeUserColor"
QT_MOC_LITERAL(6, 52, 14), // "toggleFavorite"
QT_MOC_LITERAL(7, 67, 10), // "removeUser"
QT_MOC_LITERAL(8, 78, 8), // "buzzUser"
QT_MOC_LITERAL(9, 87, 21), // "sendHelpRequestToUser"
QT_MOC_LITERAL(10, 109, 15), // "showPrivateChat"
QT_MOC_LITERAL(11, 125, 11), // "changeColor"
QT_MOC_LITERAL(12, 137, 15), // "favoriteClicked"
QT_MOC_LITERAL(13, 153, 17), // "removeUserClicked"
QT_MOC_LITERAL(14, 171, 8), // "sendBuzz"
QT_MOC_LITERAL(15, 180, 8) // "sendHelp"

    },
    "GuiVCard\0showChat\0\0VNumber\0sendFile\0"
    "changeUserColor\0toggleFavorite\0"
    "removeUser\0buzzUser\0sendHelpRequestToUser\0"
    "showPrivateChat\0changeColor\0favoriteClicked\0"
    "removeUserClicked\0sendBuzz\0sendHelp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GuiVCard[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       4,    1,   87,    2, 0x06 /* Public */,
       5,    2,   90,    2, 0x06 /* Public */,
       6,    1,   95,    2, 0x06 /* Public */,
       7,    1,   98,    2, 0x06 /* Public */,
       8,    1,  101,    2, 0x06 /* Public */,
       9,    1,  104,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,  107,    2, 0x08 /* Private */,
       4,    0,  108,    2, 0x08 /* Private */,
      11,    0,  109,    2, 0x08 /* Private */,
      12,    0,  110,    2, 0x08 /* Private */,
      13,    0,  111,    2, 0x08 /* Private */,
      14,    0,  112,    2, 0x08 /* Private */,
      15,    0,  113,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    2,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GuiVCard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GuiVCard *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showChat((*reinterpret_cast< VNumber(*)>(_a[1]))); break;
        case 1: _t->sendFile((*reinterpret_cast< VNumber(*)>(_a[1]))); break;
        case 2: _t->changeUserColor((*reinterpret_cast< VNumber(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->toggleFavorite((*reinterpret_cast< VNumber(*)>(_a[1]))); break;
        case 4: _t->removeUser((*reinterpret_cast< VNumber(*)>(_a[1]))); break;
        case 5: _t->buzzUser((*reinterpret_cast< VNumber(*)>(_a[1]))); break;
        case 6: _t->sendHelpRequestToUser((*reinterpret_cast< VNumber(*)>(_a[1]))); break;
        case 7: _t->showPrivateChat(); break;
        case 8: _t->sendFile(); break;
        case 9: _t->changeColor(); break;
        case 10: _t->favoriteClicked(); break;
        case 11: _t->removeUserClicked(); break;
        case 12: _t->sendBuzz(); break;
        case 13: _t->sendHelp(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GuiVCard::*)(VNumber );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiVCard::showChat)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GuiVCard::*)(VNumber );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiVCard::sendFile)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GuiVCard::*)(VNumber , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiVCard::changeUserColor)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GuiVCard::*)(VNumber );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiVCard::toggleFavorite)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (GuiVCard::*)(VNumber );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiVCard::removeUser)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (GuiVCard::*)(VNumber );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiVCard::buzzUser)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (GuiVCard::*)(VNumber );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiVCard::sendHelpRequestToUser)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GuiVCard::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_GuiVCard.data,
    qt_meta_data_GuiVCard,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GuiVCard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GuiVCard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GuiVCard.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int GuiVCard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void GuiVCard::showChat(VNumber _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GuiVCard::sendFile(VNumber _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GuiVCard::changeUserColor(VNumber _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GuiVCard::toggleFavorite(VNumber _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GuiVCard::removeUser(VNumber _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void GuiVCard::buzzUser(VNumber _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void GuiVCard::sendHelpRequestToUser(VNumber _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
