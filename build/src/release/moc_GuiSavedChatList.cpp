/****************************************************************************
** Meta object code from reading C++ file 'GuiSavedChatList.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../beebeep-code-r1612/src/desktop/GuiSavedChatList.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GuiSavedChatList.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GuiSavedChatList_t {
    QByteArrayData data[15];
    char stringdata0[256];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GuiSavedChatList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GuiSavedChatList_t qt_meta_stringdata_GuiSavedChatList = {
    {
QT_MOC_LITERAL(0, 0, 16), // "GuiSavedChatList"
QT_MOC_LITERAL(1, 17, 17), // "savedChatSelected"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 16), // "savedChatRemoved"
QT_MOC_LITERAL(4, 53, 20), // "savedChatLinkRequest"
QT_MOC_LITERAL(5, 74, 16), // "updateSavedChats"
QT_MOC_LITERAL(6, 91, 16), // "savedChatClicked"
QT_MOC_LITERAL(7, 108, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(8, 125, 17), // "showSavedChatMenu"
QT_MOC_LITERAL(9, 143, 21), // "showSavedChatSelected"
QT_MOC_LITERAL(10, 165, 23), // "removeSavedChatSelected"
QT_MOC_LITERAL(11, 189, 21), // "linkSavedChatSelected"
QT_MOC_LITERAL(12, 211, 10), // "filterText"
QT_MOC_LITERAL(13, 222, 11), // "clearFilter"
QT_MOC_LITERAL(14, 234, 21) // "selectBackgroundColor"

    },
    "GuiSavedChatList\0savedChatSelected\0\0"
    "savedChatRemoved\0savedChatLinkRequest\0"
    "updateSavedChats\0savedChatClicked\0"
    "QTreeWidgetItem*\0showSavedChatMenu\0"
    "showSavedChatSelected\0removeSavedChatSelected\0"
    "linkSavedChatSelected\0filterText\0"
    "clearFilter\0selectBackgroundColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GuiSavedChatList[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       3,    1,   77,    2, 0x06 /* Public */,
       4,    1,   80,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   83,    2, 0x0a /* Public */,
       6,    2,   84,    2, 0x09 /* Protected */,
       8,    1,   89,    2, 0x09 /* Protected */,
       9,    0,   92,    2, 0x09 /* Protected */,
      10,    0,   93,    2, 0x09 /* Protected */,
      11,    0,   94,    2, 0x09 /* Protected */,
      12,    1,   95,    2, 0x09 /* Protected */,
      13,    0,   98,    2, 0x09 /* Protected */,
      14,    0,   99,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GuiSavedChatList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GuiSavedChatList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->savedChatSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->savedChatRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->savedChatLinkRequest((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->updateSavedChats(); break;
        case 4: _t->savedChatClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->showSavedChatMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 6: _t->showSavedChatSelected(); break;
        case 7: _t->removeSavedChatSelected(); break;
        case 8: _t->linkSavedChatSelected(); break;
        case 9: _t->filterText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->clearFilter(); break;
        case 11: _t->selectBackgroundColor(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GuiSavedChatList::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiSavedChatList::savedChatSelected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GuiSavedChatList::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiSavedChatList::savedChatRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GuiSavedChatList::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiSavedChatList::savedChatLinkRequest)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GuiSavedChatList::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_GuiSavedChatList.data,
    qt_meta_data_GuiSavedChatList,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GuiSavedChatList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GuiSavedChatList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GuiSavedChatList.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GuiSavedChatList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void GuiSavedChatList::savedChatSelected(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GuiSavedChatList::savedChatRemoved(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GuiSavedChatList::savedChatLinkRequest(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
