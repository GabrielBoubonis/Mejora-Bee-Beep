/****************************************************************************
** Meta object code from reading C++ file 'GuiChatList.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../beebeep-code-r1612/src/desktop/GuiChatList.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GuiChatList.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GuiChatList_t {
    QByteArrayData data[27];
    char stringdata0[394];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GuiChatList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GuiChatList_t qt_meta_stringdata_GuiChatList = {
    {
QT_MOC_LITERAL(0, 0, 11), // "GuiChatList"
QT_MOC_LITERAL(1, 12, 12), // "chatSelected"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 7), // "VNumber"
QT_MOC_LITERAL(4, 34, 7), // "chat_id"
QT_MOC_LITERAL(5, 42, 11), // "chatToClear"
QT_MOC_LITERAL(6, 54, 10), // "chatToEdit"
QT_MOC_LITERAL(7, 65, 26), // "removeUnsentMessagesInChat"
QT_MOC_LITERAL(8, 92, 20), // "createNewChatRequest"
QT_MOC_LITERAL(9, 113, 23), // "createNewMessageRequest"
QT_MOC_LITERAL(10, 137, 21), // "hideEmptyChatsRequest"
QT_MOC_LITERAL(11, 159, 10), // "updateChat"
QT_MOC_LITERAL(12, 170, 4), // "Chat"
QT_MOC_LITERAL(13, 175, 10), // "updateUser"
QT_MOC_LITERAL(14, 186, 4), // "User"
QT_MOC_LITERAL(15, 191, 11), // "onTickEvent"
QT_MOC_LITERAL(16, 203, 11), // "chatClicked"
QT_MOC_LITERAL(17, 215, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(18, 232, 12), // "showChatMenu"
QT_MOC_LITERAL(19, 245, 16), // "openChatSelected"
QT_MOC_LITERAL(20, 262, 17), // "clearChatSelected"
QT_MOC_LITERAL(21, 280, 16), // "editChatSelected"
QT_MOC_LITERAL(22, 297, 10), // "filterText"
QT_MOC_LITERAL(23, 308, 11), // "clearFilter"
QT_MOC_LITERAL(24, 320, 21), // "selectBackgroundColor"
QT_MOC_LITERAL(25, 342, 16), // "showMenuSettings"
QT_MOC_LITERAL(26, 359, 34) // "removeUnsentMessagesInChatSel..."

    },
    "GuiChatList\0chatSelected\0\0VNumber\0"
    "chat_id\0chatToClear\0chatToEdit\0"
    "removeUnsentMessagesInChat\0"
    "createNewChatRequest\0createNewMessageRequest\0"
    "hideEmptyChatsRequest\0updateChat\0Chat\0"
    "updateUser\0User\0onTickEvent\0chatClicked\0"
    "QTreeWidgetItem*\0showChatMenu\0"
    "openChatSelected\0clearChatSelected\0"
    "editChatSelected\0filterText\0clearFilter\0"
    "selectBackgroundColor\0showMenuSettings\0"
    "removeUnsentMessagesInChatSelected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GuiChatList[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  114,    2, 0x06 /* Public */,
       5,    1,  117,    2, 0x06 /* Public */,
       6,    1,  120,    2, 0x06 /* Public */,
       7,    1,  123,    2, 0x06 /* Public */,
       8,    0,  126,    2, 0x06 /* Public */,
       9,    0,  127,    2, 0x06 /* Public */,
      10,    0,  128,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,  129,    2, 0x0a /* Public */,
      13,    1,  132,    2, 0x0a /* Public */,
      15,    1,  135,    2, 0x0a /* Public */,
      16,    2,  138,    2, 0x09 /* Protected */,
      18,    1,  143,    2, 0x09 /* Protected */,
      19,    0,  146,    2, 0x09 /* Protected */,
      20,    0,  147,    2, 0x09 /* Protected */,
      21,    0,  148,    2, 0x09 /* Protected */,
      22,    1,  149,    2, 0x09 /* Protected */,
      23,    0,  152,    2, 0x09 /* Protected */,
      24,    0,  153,    2, 0x09 /* Protected */,
      25,    0,  154,    2, 0x09 /* Protected */,
      26,    0,  155,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 17, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GuiChatList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GuiChatList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->chatSelected((*reinterpret_cast< VNumber(*)>(_a[1]))); break;
        case 1: _t->chatToClear((*reinterpret_cast< VNumber(*)>(_a[1]))); break;
        case 2: _t->chatToEdit((*reinterpret_cast< VNumber(*)>(_a[1]))); break;
        case 3: _t->removeUnsentMessagesInChat((*reinterpret_cast< VNumber(*)>(_a[1]))); break;
        case 4: _t->createNewChatRequest(); break;
        case 5: _t->createNewMessageRequest(); break;
        case 6: _t->hideEmptyChatsRequest(); break;
        case 7: _t->updateChat((*reinterpret_cast< const Chat(*)>(_a[1]))); break;
        case 8: _t->updateUser((*reinterpret_cast< const User(*)>(_a[1]))); break;
        case 9: _t->onTickEvent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->chatClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->showChatMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 12: _t->openChatSelected(); break;
        case 13: _t->clearChatSelected(); break;
        case 14: _t->editChatSelected(); break;
        case 15: _t->filterText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->clearFilter(); break;
        case 17: _t->selectBackgroundColor(); break;
        case 18: _t->showMenuSettings(); break;
        case 19: _t->removeUnsentMessagesInChatSelected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GuiChatList::*)(VNumber );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiChatList::chatSelected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GuiChatList::*)(VNumber );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiChatList::chatToClear)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GuiChatList::*)(VNumber );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiChatList::chatToEdit)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GuiChatList::*)(VNumber );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiChatList::removeUnsentMessagesInChat)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (GuiChatList::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiChatList::createNewChatRequest)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (GuiChatList::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiChatList::createNewMessageRequest)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (GuiChatList::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiChatList::hideEmptyChatsRequest)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GuiChatList::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_GuiChatList.data,
    qt_meta_data_GuiChatList,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GuiChatList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GuiChatList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GuiChatList.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GuiChatList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void GuiChatList::chatSelected(VNumber _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GuiChatList::chatToClear(VNumber _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GuiChatList::chatToEdit(VNumber _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GuiChatList::removeUnsentMessagesInChat(VNumber _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GuiChatList::createNewChatRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void GuiChatList::createNewMessageRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void GuiChatList::hideEmptyChatsRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
