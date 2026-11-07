/****************************************************************************
** Meta object code from reading C++ file 'GuiUserList.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../beebeep-code-r1612/src/desktop/GuiUserList.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GuiUserList.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GuiUserList_t {
    QByteArrayData data[15];
    char stringdata0[209];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GuiUserList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GuiUserList_t qt_meta_stringdata_GuiUserList = {
    {
QT_MOC_LITERAL(0, 0, 11), // "GuiUserList"
QT_MOC_LITERAL(1, 12, 12), // "userSelected"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 7), // "VNumber"
QT_MOC_LITERAL(4, 34, 12), // "chatSelected"
QT_MOC_LITERAL(5, 47, 16), // "showVCardRequest"
QT_MOC_LITERAL(6, 64, 22), // "sendFilesToChatRequest"
QT_MOC_LITERAL(7, 87, 15), // "userItemClicked"
QT_MOC_LITERAL(8, 103, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(9, 120, 12), // "showUserMenu"
QT_MOC_LITERAL(10, 133, 10), // "filterText"
QT_MOC_LITERAL(11, 144, 11), // "clearFilter"
QT_MOC_LITERAL(12, 156, 16), // "showMenuSettings"
QT_MOC_LITERAL(13, 173, 13), // "onItemEntered"
QT_MOC_LITERAL(14, 187, 21) // "selectBackgroundColor"

    },
    "GuiUserList\0userSelected\0\0VNumber\0"
    "chatSelected\0showVCardRequest\0"
    "sendFilesToChatRequest\0userItemClicked\0"
    "QTreeWidgetItem*\0showUserMenu\0filterText\0"
    "clearFilter\0showMenuSettings\0onItemEntered\0"
    "selectBackgroundColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GuiUserList[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       4,    1,   72,    2, 0x06 /* Public */,
       5,    1,   75,    2, 0x06 /* Public */,
       6,    2,   78,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,   83,    2, 0x09 /* Protected */,
       9,    1,   88,    2, 0x09 /* Protected */,
      10,    1,   91,    2, 0x09 /* Protected */,
      11,    0,   94,    2, 0x09 /* Protected */,
      12,    0,   95,    2, 0x09 /* Protected */,
      13,    2,   96,    2, 0x09 /* Protected */,
      14,    0,  101,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QStringList,    2,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int,    2,    2,
    QMetaType::Void,

       0        // eod
};

void GuiUserList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GuiUserList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->userSelected((*reinterpret_cast< VNumber(*)>(_a[1]))); break;
        case 1: _t->chatSelected((*reinterpret_cast< VNumber(*)>(_a[1]))); break;
        case 2: _t->showVCardRequest((*reinterpret_cast< VNumber(*)>(_a[1]))); break;
        case 3: _t->sendFilesToChatRequest((*reinterpret_cast< VNumber(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 4: _t->userItemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->showUserMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 6: _t->filterText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->clearFilter(); break;
        case 8: _t->showMenuSettings(); break;
        case 9: _t->onItemEntered((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->selectBackgroundColor(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GuiUserList::*)(VNumber );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiUserList::userSelected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GuiUserList::*)(VNumber );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiUserList::chatSelected)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GuiUserList::*)(VNumber );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiUserList::showVCardRequest)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GuiUserList::*)(VNumber , const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiUserList::sendFilesToChatRequest)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GuiUserList::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_GuiUserList.data,
    qt_meta_data_GuiUserList,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GuiUserList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GuiUserList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GuiUserList.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GuiUserList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void GuiUserList::userSelected(VNumber _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GuiUserList::chatSelected(VNumber _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GuiUserList::showVCardRequest(VNumber _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GuiUserList::sendFilesToChatRequest(VNumber _t1, const QStringList & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
