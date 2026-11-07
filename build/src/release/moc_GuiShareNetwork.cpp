/****************************************************************************
** Meta object code from reading C++ file 'GuiShareNetwork.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../beebeep-code-r1612/src/desktop/GuiShareNetwork.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GuiShareNetwork.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GuiShareNetwork_t {
    QByteArrayData data[26];
    char stringdata0[399];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GuiShareNetwork_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GuiShareNetwork_t qt_meta_stringdata_GuiShareNetwork = {
    {
QT_MOC_LITERAL(0, 0, 15), // "GuiShareNetwork"
QT_MOC_LITERAL(1, 16, 22), // "fileShareListRequested"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 18), // "downloadSharedFile"
QT_MOC_LITERAL(4, 59, 7), // "VNumber"
QT_MOC_LITERAL(5, 67, 19), // "downloadSharedFiles"
QT_MOC_LITERAL(6, 87, 21), // "QList<SharedFileInfo>"
QT_MOC_LITERAL(7, 109, 17), // "openFileCompleted"
QT_MOC_LITERAL(8, 127, 12), // "updateStatus"
QT_MOC_LITERAL(9, 140, 11), // "showMessage"
QT_MOC_LITERAL(10, 152, 22), // "onFileTransferProgress"
QT_MOC_LITERAL(11, 175, 4), // "User"
QT_MOC_LITERAL(12, 180, 8), // "FileInfo"
QT_MOC_LITERAL(13, 189, 12), // "FileSizeType"
QT_MOC_LITERAL(14, 202, 23), // "onFileTransferCompleted"
QT_MOC_LITERAL(15, 226, 10), // "reloadList"
QT_MOC_LITERAL(16, 237, 22), // "checkItemDoubleClicked"
QT_MOC_LITERAL(17, 260, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(18, 277, 12), // "filterByText"
QT_MOC_LITERAL(19, 290, 16), // "enableScanButton"
QT_MOC_LITERAL(20, 307, 11), // "scanNetwork"
QT_MOC_LITERAL(21, 319, 11), // "applyFilter"
QT_MOC_LITERAL(22, 331, 10), // "updateList"
QT_MOC_LITERAL(23, 342, 16), // "openDownloadMenu"
QT_MOC_LITERAL(24, 359, 16), // "downloadSelected"
QT_MOC_LITERAL(25, 376, 22) // "processNextItemInQueue"

    },
    "GuiShareNetwork\0fileShareListRequested\0"
    "\0downloadSharedFile\0VNumber\0"
    "downloadSharedFiles\0QList<SharedFileInfo>\0"
    "openFileCompleted\0updateStatus\0"
    "showMessage\0onFileTransferProgress\0"
    "User\0FileInfo\0FileSizeType\0"
    "onFileTransferCompleted\0reloadList\0"
    "checkItemDoubleClicked\0QTreeWidgetItem*\0"
    "filterByText\0enableScanButton\0scanNetwork\0"
    "applyFilter\0updateList\0openDownloadMenu\0"
    "downloadSelected\0processNextItemInQueue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GuiShareNetwork[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x06 /* Public */,
       3,    2,  105,    2, 0x06 /* Public */,
       5,    1,  110,    2, 0x06 /* Public */,
       7,    1,  113,    2, 0x06 /* Public */,
       8,    2,  116,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    3,  121,    2, 0x0a /* Public */,
      10,    5,  128,    2, 0x0a /* Public */,
      14,    3,  139,    2, 0x0a /* Public */,
      15,    0,  146,    2, 0x0a /* Public */,
      16,    2,  147,    2, 0x09 /* Protected */,
      18,    1,  152,    2, 0x09 /* Protected */,
      19,    0,  155,    2, 0x09 /* Protected */,
      20,    0,  156,    2, 0x09 /* Protected */,
      21,    0,  157,    2, 0x09 /* Protected */,
      22,    0,  158,    2, 0x09 /* Protected */,
      23,    1,  159,    2, 0x09 /* Protected */,
      24,    0,  162,    2, 0x09 /* Protected */,
      25,    0,  163,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4,    2,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, QMetaType::QUrl,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    2,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4, QMetaType::QString,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 11, 0x80000000 | 12, 0x80000000 | 13, QMetaType::LongLong,    2,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 11, 0x80000000 | 12,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GuiShareNetwork::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GuiShareNetwork *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fileShareListRequested(); break;
        case 1: _t->downloadSharedFile((*reinterpret_cast< VNumber(*)>(_a[1])),(*reinterpret_cast< VNumber(*)>(_a[2]))); break;
        case 2: _t->downloadSharedFiles((*reinterpret_cast< const QList<SharedFileInfo>(*)>(_a[1]))); break;
        case 3: _t->openFileCompleted((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 4: _t->updateStatus((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->showMessage((*reinterpret_cast< VNumber(*)>(_a[1])),(*reinterpret_cast< VNumber(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 6: _t->onFileTransferProgress((*reinterpret_cast< VNumber(*)>(_a[1])),(*reinterpret_cast< const User(*)>(_a[2])),(*reinterpret_cast< const FileInfo(*)>(_a[3])),(*reinterpret_cast< FileSizeType(*)>(_a[4])),(*reinterpret_cast< qint64(*)>(_a[5]))); break;
        case 7: _t->onFileTransferCompleted((*reinterpret_cast< VNumber(*)>(_a[1])),(*reinterpret_cast< const User(*)>(_a[2])),(*reinterpret_cast< const FileInfo(*)>(_a[3]))); break;
        case 8: _t->reloadList(); break;
        case 9: _t->checkItemDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->filterByText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->enableScanButton(); break;
        case 12: _t->scanNetwork(); break;
        case 13: _t->applyFilter(); break;
        case 14: _t->updateList(); break;
        case 15: _t->openDownloadMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 16: _t->downloadSelected(); break;
        case 17: _t->processNextItemInQueue(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GuiShareNetwork::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiShareNetwork::fileShareListRequested)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GuiShareNetwork::*)(VNumber , VNumber );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiShareNetwork::downloadSharedFile)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GuiShareNetwork::*)(const QList<SharedFileInfo> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiShareNetwork::downloadSharedFiles)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GuiShareNetwork::*)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiShareNetwork::openFileCompleted)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (GuiShareNetwork::*)(const QString & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiShareNetwork::updateStatus)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GuiShareNetwork::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_GuiShareNetwork.data,
    qt_meta_data_GuiShareNetwork,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GuiShareNetwork::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GuiShareNetwork::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GuiShareNetwork.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GuiShareNetwork::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void GuiShareNetwork::fileShareListRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void GuiShareNetwork::downloadSharedFile(VNumber _t1, VNumber _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GuiShareNetwork::downloadSharedFiles(const QList<SharedFileInfo> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GuiShareNetwork::openFileCompleted(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GuiShareNetwork::updateStatus(const QString & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
