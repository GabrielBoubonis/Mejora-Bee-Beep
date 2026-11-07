/****************************************************************************
** Meta object code from reading C++ file 'GuiFileSharing.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../beebeep-code-r1612/src/desktop/GuiFileSharing.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GuiFileSharing.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GuiFileSharing_t {
    QByteArrayData data[29];
    char stringdata0[504];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GuiFileSharing_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GuiFileSharing_t qt_meta_stringdata_GuiFileSharing = {
    {
QT_MOC_LITERAL(0, 0, 14), // "GuiFileSharing"
QT_MOC_LITERAL(1, 15, 14), // "openUrlRequest"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 15), // "sendFileRequest"
QT_MOC_LITERAL(4, 47, 25), // "downloadSharedFileRequest"
QT_MOC_LITERAL(5, 73, 7), // "VNumber"
QT_MOC_LITERAL(6, 81, 26), // "downloadSharedFilesRequest"
QT_MOC_LITERAL(7, 108, 21), // "QList<SharedFileInfo>"
QT_MOC_LITERAL(8, 130, 6), // "showUp"
QT_MOC_LITERAL(9, 137, 11), // "onTickEvent"
QT_MOC_LITERAL(10, 149, 13), // "onUserChanged"
QT_MOC_LITERAL(11, 163, 4), // "User"
QT_MOC_LITERAL(12, 168, 19), // "raiseLocalShareView"
QT_MOC_LITERAL(13, 188, 21), // "raiseNetworkShareView"
QT_MOC_LITERAL(14, 210, 17), // "raiseShareBoxView"
QT_MOC_LITERAL(15, 228, 10), // "addToShare"
QT_MOC_LITERAL(16, 239, 15), // "removeFromShare"
QT_MOC_LITERAL(17, 255, 17), // "onShareBoxRequest"
QT_MOC_LITERAL(18, 273, 25), // "onShareBoxDownloadRequest"
QT_MOC_LITERAL(19, 299, 8), // "FileInfo"
QT_MOC_LITERAL(20, 308, 23), // "onShareBoxUploadRequest"
QT_MOC_LITERAL(21, 332, 14), // "updateShareBox"
QT_MOC_LITERAL(22, 347, 15), // "QList<FileInfo>"
QT_MOC_LITERAL(23, 363, 24), // "onShareFolderUnavailable"
QT_MOC_LITERAL(24, 388, 22), // "onFileTransferProgress"
QT_MOC_LITERAL(25, 411, 12), // "FileSizeType"
QT_MOC_LITERAL(26, 424, 21), // "onFileTransferMessage"
QT_MOC_LITERAL(27, 446, 31), // "FileTransferPeer::TransferState"
QT_MOC_LITERAL(28, 478, 25) // "showAllowedFileExtensions"

    },
    "GuiFileSharing\0openUrlRequest\0\0"
    "sendFileRequest\0downloadSharedFileRequest\0"
    "VNumber\0downloadSharedFilesRequest\0"
    "QList<SharedFileInfo>\0showUp\0onTickEvent\0"
    "onUserChanged\0User\0raiseLocalShareView\0"
    "raiseNetworkShareView\0raiseShareBoxView\0"
    "addToShare\0removeFromShare\0onShareBoxRequest\0"
    "onShareBoxDownloadRequest\0FileInfo\0"
    "onShareBoxUploadRequest\0updateShareBox\0"
    "QList<FileInfo>\0onShareFolderUnavailable\0"
    "onFileTransferProgress\0FileSizeType\0"
    "onFileTransferMessage\0"
    "FileTransferPeer::TransferState\0"
    "showAllowedFileExtensions"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GuiFileSharing[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  114,    2, 0x06 /* Public */,
       3,    1,  117,    2, 0x06 /* Public */,
       4,    2,  120,    2, 0x06 /* Public */,
       6,    1,  125,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,  128,    2, 0x0a /* Public */,
       9,    1,  129,    2, 0x0a /* Public */,
      10,    1,  132,    2, 0x0a /* Public */,
      12,    0,  135,    2, 0x08 /* Private */,
      13,    0,  136,    2, 0x08 /* Private */,
      14,    0,  137,    2, 0x08 /* Private */,
      15,    1,  138,    2, 0x08 /* Private */,
      16,    1,  141,    2, 0x08 /* Private */,
      17,    3,  144,    2, 0x08 /* Private */,
      18,    3,  151,    2, 0x08 /* Private */,
      20,    3,  158,    2, 0x08 /* Private */,
      21,    3,  165,    2, 0x08 /* Private */,
      23,    2,  172,    2, 0x08 /* Private */,
      24,    5,  177,    2, 0x08 /* Private */,
      26,    5,  188,    2, 0x08 /* Private */,
      28,    0,  199,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5,    2,    2,
    QMetaType::Void, 0x80000000 | 7,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString, QMetaType::Bool,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 19, QMetaType::QString,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 19, QMetaType::QString,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 11, QMetaType::QString, 0x80000000 | 22,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 11, QMetaType::QString,    2,    2,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 11, 0x80000000 | 19, 0x80000000 | 25, QMetaType::LongLong,    2,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 11, 0x80000000 | 19, QMetaType::QString, 0x80000000 | 27,    2,    2,    2,    2,    2,
    QMetaType::Void,

       0        // eod
};

void GuiFileSharing::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GuiFileSharing *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openUrlRequest((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->sendFileRequest((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->downloadSharedFileRequest((*reinterpret_cast< VNumber(*)>(_a[1])),(*reinterpret_cast< VNumber(*)>(_a[2]))); break;
        case 3: _t->downloadSharedFilesRequest((*reinterpret_cast< const QList<SharedFileInfo>(*)>(_a[1]))); break;
        case 4: _t->showUp(); break;
        case 5: _t->onTickEvent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->onUserChanged((*reinterpret_cast< const User(*)>(_a[1]))); break;
        case 7: _t->raiseLocalShareView(); break;
        case 8: _t->raiseNetworkShareView(); break;
        case 9: _t->raiseShareBoxView(); break;
        case 10: _t->addToShare((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->removeFromShare((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->onShareBoxRequest((*reinterpret_cast< VNumber(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 13: _t->onShareBoxDownloadRequest((*reinterpret_cast< VNumber(*)>(_a[1])),(*reinterpret_cast< const FileInfo(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 14: _t->onShareBoxUploadRequest((*reinterpret_cast< VNumber(*)>(_a[1])),(*reinterpret_cast< const FileInfo(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 15: _t->updateShareBox((*reinterpret_cast< const User(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QList<FileInfo>(*)>(_a[3]))); break;
        case 16: _t->onShareFolderUnavailable((*reinterpret_cast< const User(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 17: _t->onFileTransferProgress((*reinterpret_cast< VNumber(*)>(_a[1])),(*reinterpret_cast< const User(*)>(_a[2])),(*reinterpret_cast< const FileInfo(*)>(_a[3])),(*reinterpret_cast< FileSizeType(*)>(_a[4])),(*reinterpret_cast< qint64(*)>(_a[5]))); break;
        case 18: _t->onFileTransferMessage((*reinterpret_cast< VNumber(*)>(_a[1])),(*reinterpret_cast< const User(*)>(_a[2])),(*reinterpret_cast< const FileInfo(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< FileTransferPeer::TransferState(*)>(_a[5]))); break;
        case 19: _t->showAllowedFileExtensions(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GuiFileSharing::*)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiFileSharing::openUrlRequest)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GuiFileSharing::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiFileSharing::sendFileRequest)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GuiFileSharing::*)(VNumber , VNumber );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiFileSharing::downloadSharedFileRequest)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GuiFileSharing::*)(const QList<SharedFileInfo> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiFileSharing::downloadSharedFilesRequest)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GuiFileSharing::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_GuiFileSharing.data,
    qt_meta_data_GuiFileSharing,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GuiFileSharing::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GuiFileSharing::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GuiFileSharing.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int GuiFileSharing::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
void GuiFileSharing::openUrlRequest(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GuiFileSharing::sendFileRequest(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GuiFileSharing::downloadSharedFileRequest(VNumber _t1, VNumber _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GuiFileSharing::downloadSharedFilesRequest(const QList<SharedFileInfo> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
