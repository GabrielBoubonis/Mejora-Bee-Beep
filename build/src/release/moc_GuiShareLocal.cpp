/****************************************************************************
** Meta object code from reading C++ file 'GuiShareLocal.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../beebeep-code-r1612/src/desktop/GuiShareLocal.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GuiShareLocal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GuiShareLocal_t {
    QByteArrayData data[16];
    char stringdata0[241];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GuiShareLocal_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GuiShareLocal_t qt_meta_stringdata_GuiShareLocal = {
    {
QT_MOC_LITERAL(0, 0, 13), // "GuiShareLocal"
QT_MOC_LITERAL(1, 14, 14), // "sharePathAdded"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 16), // "sharePathRemoved"
QT_MOC_LITERAL(4, 47, 14), // "openUrlRequest"
QT_MOC_LITERAL(5, 62, 17), // "updateListRequest"
QT_MOC_LITERAL(6, 80, 21), // "removeAllPathsRequest"
QT_MOC_LITERAL(7, 102, 20), // "updateFileSharedList"
QT_MOC_LITERAL(8, 123, 11), // "addFilePath"
QT_MOC_LITERAL(9, 135, 13), // "addFolderPath"
QT_MOC_LITERAL(10, 149, 10), // "removePath"
QT_MOC_LITERAL(11, 160, 10), // "updateList"
QT_MOC_LITERAL(12, 171, 21), // "openItemDoubleClicked"
QT_MOC_LITERAL(13, 193, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(14, 210, 16), // "openMySharesMenu"
QT_MOC_LITERAL(15, 227, 13) // "clearAllPaths"

    },
    "GuiShareLocal\0sharePathAdded\0\0"
    "sharePathRemoved\0openUrlRequest\0"
    "updateListRequest\0removeAllPathsRequest\0"
    "updateFileSharedList\0addFilePath\0"
    "addFolderPath\0removePath\0updateList\0"
    "openItemDoubleClicked\0QTreeWidgetItem*\0"
    "openMySharesMenu\0clearAllPaths"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GuiShareLocal[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       3,    1,   82,    2, 0x06 /* Public */,
       4,    1,   85,    2, 0x06 /* Public */,
       5,    0,   88,    2, 0x06 /* Public */,
       6,    0,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   90,    2, 0x0a /* Public */,
       8,    0,   91,    2, 0x09 /* Protected */,
       9,    0,   92,    2, 0x09 /* Protected */,
      10,    0,   93,    2, 0x09 /* Protected */,
      11,    0,   94,    2, 0x09 /* Protected */,
      12,    2,   95,    2, 0x09 /* Protected */,
      14,    1,  100,    2, 0x09 /* Protected */,
      15,    0,  103,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QUrl,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,

       0        // eod
};

void GuiShareLocal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GuiShareLocal *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sharePathAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->sharePathRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->openUrlRequest((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 3: _t->updateListRequest(); break;
        case 4: _t->removeAllPathsRequest(); break;
        case 5: _t->updateFileSharedList(); break;
        case 6: _t->addFilePath(); break;
        case 7: _t->addFolderPath(); break;
        case 8: _t->removePath(); break;
        case 9: _t->updateList(); break;
        case 10: _t->openItemDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->openMySharesMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 12: _t->clearAllPaths(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GuiShareLocal::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiShareLocal::sharePathAdded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GuiShareLocal::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiShareLocal::sharePathRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GuiShareLocal::*)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiShareLocal::openUrlRequest)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GuiShareLocal::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiShareLocal::updateListRequest)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (GuiShareLocal::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiShareLocal::removeAllPathsRequest)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GuiShareLocal::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_GuiShareLocal.data,
    qt_meta_data_GuiShareLocal,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GuiShareLocal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GuiShareLocal::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GuiShareLocal.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GuiShareLocal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void GuiShareLocal::sharePathAdded(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GuiShareLocal::sharePathRemoved(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GuiShareLocal::openUrlRequest(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GuiShareLocal::updateListRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void GuiShareLocal::removeAllPathsRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
