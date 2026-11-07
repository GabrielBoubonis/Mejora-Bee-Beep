/****************************************************************************
** Meta object code from reading C++ file 'FileTransferPeer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../beebeep-code-r1612/src/core/FileTransferPeer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FileTransferPeer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FileTransferPeer_t {
    QByteArrayData data[21];
    char stringdata0[319];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileTransferPeer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileTransferPeer_t qt_meta_stringdata_FileTransferPeer = {
    {
QT_MOC_LITERAL(0, 0, 16), // "FileTransferPeer"
QT_MOC_LITERAL(1, 17, 7), // "message"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 7), // "VNumber"
QT_MOC_LITERAL(4, 34, 7), // "peer_id"
QT_MOC_LITERAL(5, 42, 7), // "user_id"
QT_MOC_LITERAL(6, 50, 8), // "FileInfo"
QT_MOC_LITERAL(7, 59, 31), // "FileTransferPeer::TransferState"
QT_MOC_LITERAL(8, 91, 8), // "progress"
QT_MOC_LITERAL(9, 100, 12), // "FileSizeType"
QT_MOC_LITERAL(10, 113, 17), // "fileUploadRequest"
QT_MOC_LITERAL(11, 131, 23), // "userValidationRequested"
QT_MOC_LITERAL(12, 155, 18), // "operationCompleted"
QT_MOC_LITERAL(13, 174, 15), // "startConnection"
QT_MOC_LITERAL(14, 190, 14), // "cancelTransfer"
QT_MOC_LITERAL(15, 205, 12), // "skipTransfer"
QT_MOC_LITERAL(16, 218, 11), // "socketError"
QT_MOC_LITERAL(17, 230, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(18, 259, 17), // "checkTransferData"
QT_MOC_LITERAL(19, 277, 17), // "connectionTimeout"
QT_MOC_LITERAL(20, 295, 23) // "checkUserAuthentication"

    },
    "FileTransferPeer\0message\0\0VNumber\0"
    "peer_id\0user_id\0FileInfo\0"
    "FileTransferPeer::TransferState\0"
    "progress\0FileSizeType\0fileUploadRequest\0"
    "userValidationRequested\0operationCompleted\0"
    "startConnection\0cancelTransfer\0"
    "skipTransfer\0socketError\0"
    "QAbstractSocket::SocketError\0"
    "checkTransferData\0connectionTimeout\0"
    "checkUserAuthentication"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileTransferPeer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    5,   74,    2, 0x06 /* Public */,
       8,    5,   85,    2, 0x06 /* Public */,
      10,    1,   96,    2, 0x06 /* Public */,
      11,    2,   99,    2, 0x06 /* Public */,
      12,    0,  104,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,  105,    2, 0x0a /* Public */,
      14,    0,  106,    2, 0x0a /* Public */,
      15,    0,  107,    2, 0x0a /* Public */,
      16,    1,  108,    2, 0x09 /* Protected */,
      18,    1,  111,    2, 0x09 /* Protected */,
      19,    0,  114,    2, 0x09 /* Protected */,
      20,    1,  115,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 6, QMetaType::QString, 0x80000000 | 7,    4,    5,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 6, 0x80000000 | 9, QMetaType::LongLong,    4,    5,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,    2,
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    2,

       0        // eod
};

void FileTransferPeer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileTransferPeer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->message((*reinterpret_cast< VNumber(*)>(_a[1])),(*reinterpret_cast< VNumber(*)>(_a[2])),(*reinterpret_cast< const FileInfo(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< FileTransferPeer::TransferState(*)>(_a[5]))); break;
        case 1: _t->progress((*reinterpret_cast< VNumber(*)>(_a[1])),(*reinterpret_cast< VNumber(*)>(_a[2])),(*reinterpret_cast< const FileInfo(*)>(_a[3])),(*reinterpret_cast< FileSizeType(*)>(_a[4])),(*reinterpret_cast< qint64(*)>(_a[5]))); break;
        case 2: _t->fileUploadRequest((*reinterpret_cast< const FileInfo(*)>(_a[1]))); break;
        case 3: _t->userValidationRequested((*reinterpret_cast< VNumber(*)>(_a[1])),(*reinterpret_cast< VNumber(*)>(_a[2]))); break;
        case 4: _t->operationCompleted(); break;
        case 5: _t->startConnection(); break;
        case 6: _t->cancelTransfer(); break;
        case 7: _t->skipTransfer(); break;
        case 8: _t->socketError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 9: _t->checkTransferData((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 10: _t->connectionTimeout(); break;
        case 11: _t->checkUserAuthentication((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FileTransferPeer::*)(VNumber , VNumber , const FileInfo & , const QString & , FileTransferPeer::TransferState );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileTransferPeer::message)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FileTransferPeer::*)(VNumber , VNumber , const FileInfo & , FileSizeType , qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileTransferPeer::progress)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FileTransferPeer::*)(const FileInfo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileTransferPeer::fileUploadRequest)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FileTransferPeer::*)(VNumber , VNumber );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileTransferPeer::userValidationRequested)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FileTransferPeer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileTransferPeer::operationCompleted)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FileTransferPeer::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_FileTransferPeer.data,
    qt_meta_data_FileTransferPeer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FileTransferPeer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileTransferPeer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FileTransferPeer.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FileTransferPeer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void FileTransferPeer::message(VNumber _t1, VNumber _t2, const FileInfo & _t3, const QString & _t4, FileTransferPeer::TransferState _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FileTransferPeer::progress(VNumber _t1, VNumber _t2, const FileInfo & _t3, FileSizeType _t4, qint64 _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FileTransferPeer::fileUploadRequest(const FileInfo & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FileTransferPeer::userValidationRequested(VNumber _t1, VNumber _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void FileTransferPeer::operationCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
