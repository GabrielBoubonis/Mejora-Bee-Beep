/****************************************************************************
** Meta object code from reading C++ file 'GuiSavedChat.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../beebeep-code-r1612/src/desktop/GuiSavedChat.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GuiSavedChat.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GuiSavedChat_t {
    QByteArrayData data[12];
    char stringdata0[176];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GuiSavedChat_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GuiSavedChat_t qt_meta_stringdata_GuiSavedChat = {
    {
QT_MOC_LITERAL(0, 0, 12), // "GuiSavedChat"
QT_MOC_LITERAL(1, 13, 7), // "openUrl"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 22), // "deleteSavedChatRequest"
QT_MOC_LITERAL(4, 45, 13), // "showSavedChat"
QT_MOC_LITERAL(5, 59, 9), // "printChat"
QT_MOC_LITERAL(6, 69, 17), // "customContextMenu"
QT_MOC_LITERAL(7, 87, 21), // "openSelectedTextAsUrl"
QT_MOC_LITERAL(8, 109, 15), // "deleteSavedChat"
QT_MOC_LITERAL(9, 125, 13), // "saveHistoryAs"
QT_MOC_LITERAL(10, 139, 17), // "findTextInHistory"
QT_MOC_LITERAL(11, 157, 18) // "checkAnchorClicked"

    },
    "GuiSavedChat\0openUrl\0\0deleteSavedChatRequest\0"
    "showSavedChat\0printChat\0customContextMenu\0"
    "openSelectedTextAsUrl\0deleteSavedChat\0"
    "saveHistoryAs\0findTextInHistory\0"
    "checkAnchorClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GuiSavedChat[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       3,    1,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   70,    2, 0x0a /* Public */,
       5,    0,   73,    2, 0x09 /* Protected */,
       6,    1,   74,    2, 0x09 /* Protected */,
       7,    0,   77,    2, 0x09 /* Protected */,
       8,    0,   78,    2, 0x09 /* Protected */,
       9,    0,   79,    2, 0x09 /* Protected */,
      10,    0,   80,    2, 0x09 /* Protected */,
      11,    1,   81,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    2,

       0        // eod
};

void GuiSavedChat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GuiSavedChat *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openUrl((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->deleteSavedChatRequest((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->showSavedChat((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->printChat(); break;
        case 4: _t->customContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 5: _t->openSelectedTextAsUrl(); break;
        case 6: _t->deleteSavedChat(); break;
        case 7: _t->saveHistoryAs(); break;
        case 8: _t->findTextInHistory(); break;
        case 9: _t->checkAnchorClicked((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GuiSavedChat::*)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiSavedChat::openUrl)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GuiSavedChat::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiSavedChat::deleteSavedChatRequest)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GuiSavedChat::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_GuiSavedChat.data,
    qt_meta_data_GuiSavedChat,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GuiSavedChat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GuiSavedChat::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GuiSavedChat.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int GuiSavedChat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void GuiSavedChat::openUrl(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GuiSavedChat::deleteSavedChatRequest(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
