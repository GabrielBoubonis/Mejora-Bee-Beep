/****************************************************************************
** Meta object code from reading C++ file 'FileTransfer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../beebeep-code-r1612/src/core/FileTransfer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FileTransfer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FileTransfer_t {
    QByteArrayData data[18];
    char stringdata0[214];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileTransfer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileTransfer_t qt_meta_stringdata_FileTransfer = {
    {
QT_MOC_LITERAL(0, 0, 12), // "FileTransfer"
QT_MOC_LITERAL(1, 13, 7), // "message"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 7), // "VNumber"
QT_MOC_LITERAL(4, 30, 7), // "peer_id"
QT_MOC_LITERAL(5, 38, 7), // "user_id"
QT_MOC_LITERAL(6, 46, 8), // "FileInfo"
QT_MOC_LITERAL(7, 55, 31), // "FileTransferPeer::TransferState"
QT_MOC_LITERAL(8, 87, 8), // "progress"
QT_MOC_LITERAL(9, 96, 12), // "FileSizeType"
QT_MOC_LITERAL(10, 109, 9), // "listening"
QT_MOC_LITERAL(11, 119, 16), // "startNewDownload"
QT_MOC_LITERAL(12, 136, 18), // "checkUploadRequest"
QT_MOC_LITERAL(13, 155, 10), // "deletePeer"
QT_MOC_LITERAL(14, 166, 9), // "setupPeer"
QT_MOC_LITERAL(15, 176, 17), // "FileTransferPeer*"
QT_MOC_LITERAL(16, 194, 7), // "qintptr"
QT_MOC_LITERAL(17, 202, 11) // "server_port"

    },
    "FileTransfer\0message\0\0VNumber\0peer_id\0"
    "user_id\0FileInfo\0FileTransferPeer::TransferState\0"
    "progress\0FileSizeType\0listening\0"
    "startNewDownload\0checkUploadRequest\0"
    "deletePeer\0setupPeer\0FileTransferPeer*\0"
    "qintptr\0server_port"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileTransfer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    5,   54,    2, 0x06 /* Public */,
       8,    5,   65,    2, 0x06 /* Public */,
      10,    0,   76,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   77,    2, 0x09 /* Protected */,
      12,    1,   78,    2, 0x09 /* Protected */,
      13,    0,   81,    2, 0x09 /* Protected */,
      14,    3,   82,    2, 0x09 /* Protected */,
      14,    2,   89,    2, 0x29 /* Protected | MethodCloned */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 6, QMetaType::QString, 0x80000000 | 7,    4,    5,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 6, 0x80000000 | 9, QMetaType::LongLong,    4,    5,    2,    2,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 16, QMetaType::UShort,    2,    2,   17,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 16,    2,    2,

       0        // eod
};

void FileTransfer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileTransfer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->message((*reinterpret_cast< VNumber(*)>(_a[1])),(*reinterpret_cast< VNumber(*)>(_a[2])),(*reinterpret_cast< const FileInfo(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< FileTransferPeer::TransferState(*)>(_a[5]))); break;
        case 1: _t->progress((*reinterpret_cast< VNumber(*)>(_a[1])),(*reinterpret_cast< VNumber(*)>(_a[2])),(*reinterpret_cast< const FileInfo(*)>(_a[3])),(*reinterpret_cast< FileSizeType(*)>(_a[4])),(*reinterpret_cast< qint64(*)>(_a[5]))); break;
        case 2: _t->listening(); break;
        case 3: _t->startNewDownload(); break;
        case 4: _t->checkUploadRequest((*reinterpret_cast< const FileInfo(*)>(_a[1]))); break;
        case 5: _t->deletePeer(); break;
        case 6: _t->setupPeer((*reinterpret_cast< FileTransferPeer*(*)>(_a[1])),(*reinterpret_cast< qintptr(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 7: _t->setupPeer((*reinterpret_cast< FileTransferPeer*(*)>(_a[1])),(*reinterpret_cast< qintptr(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< FileTransferPeer* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< FileTransferPeer* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FileTransfer::*)(VNumber , VNumber , const FileInfo & , const QString & , FileTransferPeer::TransferState );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileTransfer::message)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FileTransfer::*)(VNumber , VNumber , const FileInfo & , FileSizeType , qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileTransfer::progress)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FileTransfer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileTransfer::listening)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FileTransfer::staticMetaObject = { {
    QMetaObject::SuperData::link<QTcpServer::staticMetaObject>(),
    qt_meta_stringdata_FileTransfer.data,
    qt_meta_data_FileTransfer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FileTransfer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileTransfer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FileTransfer.stringdata0))
        return static_cast<void*>(this);
    return QTcpServer::qt_metacast(_clname);
}

int FileTransfer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void FileTransfer::message(VNumber _t1, VNumber _t2, const FileInfo & _t3, const QString & _t4, FileTransferPeer::TransferState _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FileTransfer::progress(VNumber _t1, VNumber _t2, const FileInfo & _t3, FileSizeType _t4, qint64 _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FileTransfer::listening()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
