/****************************************************************************
** Meta object code from reading C++ file 'VoicePlayer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../beebeep-code-r1612/src/voicechat/VoicePlayer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VoicePlayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VoicePlayer_t {
    QByteArrayData data[17];
    char stringdata0[210];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VoicePlayer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VoicePlayer_t qt_meta_stringdata_VoicePlayer = {
    {
QT_MOC_LITERAL(0, 0, 11), // "VoicePlayer"
QT_MOC_LITERAL(1, 12, 7), // "playing"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 7), // "VNumber"
QT_MOC_LITERAL(4, 29, 6), // "paused"
QT_MOC_LITERAL(5, 36, 8), // "finished"
QT_MOC_LITERAL(6, 45, 15), // "durationChanged"
QT_MOC_LITERAL(7, 61, 15), // "positionChanged"
QT_MOC_LITERAL(8, 77, 22), // "openWithExternalPlayer"
QT_MOC_LITERAL(9, 100, 5), // "pause"
QT_MOC_LITERAL(10, 106, 4), // "stop"
QT_MOC_LITERAL(11, 111, 14), // "onStateChanged"
QT_MOC_LITERAL(12, 126, 19), // "QMediaPlayer::State"
QT_MOC_LITERAL(13, 146, 7), // "onError"
QT_MOC_LITERAL(14, 154, 19), // "QMediaPlayer::Error"
QT_MOC_LITERAL(15, 174, 17), // "onDurationChanged"
QT_MOC_LITERAL(16, 192, 17) // "onPositionChanged"

    },
    "VoicePlayer\0playing\0\0VNumber\0paused\0"
    "finished\0durationChanged\0positionChanged\0"
    "openWithExternalPlayer\0pause\0stop\0"
    "onStateChanged\0QMediaPlayer::State\0"
    "onError\0QMediaPlayer::Error\0"
    "onDurationChanged\0onPositionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VoicePlayer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   74,    2, 0x06 /* Public */,
       4,    2,   79,    2, 0x06 /* Public */,
       5,    2,   84,    2, 0x06 /* Public */,
       6,    3,   89,    2, 0x06 /* Public */,
       7,    3,   96,    2, 0x06 /* Public */,
       8,    2,  103,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,  108,    2, 0x0a /* Public */,
      10,    0,  109,    2, 0x0a /* Public */,
      11,    1,  110,    2, 0x09 /* Protected */,
      13,    1,  113,    2, 0x09 /* Protected */,
      15,    1,  116,    2, 0x09 /* Protected */,
      16,    1,  119,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 3,    2,    2,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 3,    2,    2,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 3,    2,    2,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 3, QMetaType::LongLong,    2,    2,    2,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 3, QMetaType::LongLong,    2,    2,    2,
    QMetaType::Void, QMetaType::QUrl, 0x80000000 | 3,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void, QMetaType::LongLong,    2,
    QMetaType::Void, QMetaType::LongLong,    2,

       0        // eod
};

void VoicePlayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VoicePlayer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->playing((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< VNumber(*)>(_a[2]))); break;
        case 1: _t->paused((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< VNumber(*)>(_a[2]))); break;
        case 2: _t->finished((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< VNumber(*)>(_a[2]))); break;
        case 3: _t->durationChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< VNumber(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3]))); break;
        case 4: _t->positionChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< VNumber(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3]))); break;
        case 5: _t->openWithExternalPlayer((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< VNumber(*)>(_a[2]))); break;
        case 6: _t->pause(); break;
        case 7: _t->stop(); break;
        case 8: _t->onStateChanged((*reinterpret_cast< QMediaPlayer::State(*)>(_a[1]))); break;
        case 9: _t->onError((*reinterpret_cast< QMediaPlayer::Error(*)>(_a[1]))); break;
        case 10: _t->onDurationChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 11: _t->onPositionChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlayer::State >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlayer::Error >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VoicePlayer::*)(const QString & , VNumber );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VoicePlayer::playing)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VoicePlayer::*)(const QString & , VNumber );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VoicePlayer::paused)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (VoicePlayer::*)(const QString & , VNumber );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VoicePlayer::finished)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (VoicePlayer::*)(const QString & , VNumber , qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VoicePlayer::durationChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (VoicePlayer::*)(const QString & , VNumber , qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VoicePlayer::positionChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (VoicePlayer::*)(const QUrl & , VNumber );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VoicePlayer::openWithExternalPlayer)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject VoicePlayer::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_VoicePlayer.data,
    qt_meta_data_VoicePlayer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VoicePlayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VoicePlayer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VoicePlayer.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int VoicePlayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void VoicePlayer::playing(const QString & _t1, VNumber _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void VoicePlayer::paused(const QString & _t1, VNumber _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void VoicePlayer::finished(const QString & _t1, VNumber _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void VoicePlayer::durationChanged(const QString & _t1, VNumber _t2, qint64 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void VoicePlayer::positionChanged(const QString & _t1, VNumber _t2, qint64 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void VoicePlayer::openWithExternalPlayer(const QUrl & _t1, VNumber _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
