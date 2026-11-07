/****************************************************************************
** Meta object code from reading C++ file 'GuiGroupList.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../beebeep-code-r1612/src/desktop/GuiGroupList.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GuiGroupList.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GuiGroupList_t {
    QByteArrayData data[18];
    char stringdata0[290];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GuiGroupList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GuiGroupList_t qt_meta_stringdata_GuiGroupList = {
    {
QT_MOC_LITERAL(0, 0, 12), // "GuiGroupList"
QT_MOC_LITERAL(1, 13, 23), // "openChatForGroupRequest"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 7), // "VNumber"
QT_MOC_LITERAL(4, 46, 8), // "group_id"
QT_MOC_LITERAL(5, 55, 18), // "createGroupRequest"
QT_MOC_LITERAL(6, 74, 16), // "editGroupRequest"
QT_MOC_LITERAL(7, 91, 16), // "showVCardRequest"
QT_MOC_LITERAL(8, 108, 13), // "showGroupMenu"
QT_MOC_LITERAL(9, 122, 16), // "checkItemClicked"
QT_MOC_LITERAL(10, 139, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(11, 156, 21), // "openGroupChatSelected"
QT_MOC_LITERAL(12, 178, 17), // "editGroupSelected"
QT_MOC_LITERAL(13, 196, 23), // "enableGroupNotification"
QT_MOC_LITERAL(14, 220, 24), // "disableGroupNotification"
QT_MOC_LITERAL(15, 245, 10), // "filterText"
QT_MOC_LITERAL(16, 256, 11), // "clearFilter"
QT_MOC_LITERAL(17, 268, 21) // "selectBackgroundColor"

    },
    "GuiGroupList\0openChatForGroupRequest\0"
    "\0VNumber\0group_id\0createGroupRequest\0"
    "editGroupRequest\0showVCardRequest\0"
    "showGroupMenu\0checkItemClicked\0"
    "QTreeWidgetItem*\0openGroupChatSelected\0"
    "editGroupSelected\0enableGroupNotification\0"
    "disableGroupNotification\0filterText\0"
    "clearFilter\0selectBackgroundColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GuiGroupList[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       5,    0,   82,    2, 0x06 /* Public */,
       6,    1,   83,    2, 0x06 /* Public */,
       7,    1,   86,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   89,    2, 0x09 /* Protected */,
       9,    2,   92,    2, 0x09 /* Protected */,
      11,    0,   97,    2, 0x09 /* Protected */,
      12,    0,   98,    2, 0x09 /* Protected */,
      13,    0,   99,    2, 0x09 /* Protected */,
      14,    0,  100,    2, 0x09 /* Protected */,
      15,    1,  101,    2, 0x09 /* Protected */,
      16,    0,  104,    2, 0x09 /* Protected */,
      17,    0,  105,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, 0x80000000 | 10, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GuiGroupList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GuiGroupList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openChatForGroupRequest((*reinterpret_cast< VNumber(*)>(_a[1]))); break;
        case 1: _t->createGroupRequest(); break;
        case 2: _t->editGroupRequest((*reinterpret_cast< VNumber(*)>(_a[1]))); break;
        case 3: _t->showVCardRequest((*reinterpret_cast< VNumber(*)>(_a[1]))); break;
        case 4: _t->showGroupMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 5: _t->checkItemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->openGroupChatSelected(); break;
        case 7: _t->editGroupSelected(); break;
        case 8: _t->enableGroupNotification(); break;
        case 9: _t->disableGroupNotification(); break;
        case 10: _t->filterText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->clearFilter(); break;
        case 12: _t->selectBackgroundColor(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GuiGroupList::*)(VNumber );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiGroupList::openChatForGroupRequest)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GuiGroupList::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiGroupList::createGroupRequest)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GuiGroupList::*)(VNumber );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiGroupList::editGroupRequest)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GuiGroupList::*)(VNumber );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiGroupList::showVCardRequest)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GuiGroupList::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_GuiGroupList.data,
    qt_meta_data_GuiGroupList,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GuiGroupList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GuiGroupList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GuiGroupList.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GuiGroupList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void GuiGroupList::openChatForGroupRequest(VNumber _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GuiGroupList::createGroupRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void GuiGroupList::editGroupRequest(VNumber _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GuiGroupList::showVCardRequest(VNumber _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
