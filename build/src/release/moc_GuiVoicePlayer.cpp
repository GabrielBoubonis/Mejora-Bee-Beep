/****************************************************************************
** Meta object code from reading C++ file 'GuiVoicePlayer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../beebeep-code-r1612/src/voicechat/GuiVoicePlayer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GuiVoicePlayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GuiVoicePlayer_t {
    QByteArrayData data[16];
    char stringdata0[220];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GuiVoicePlayer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GuiVoicePlayer_t qt_meta_stringdata_GuiVoicePlayer = {
    {
QT_MOC_LITERAL(0, 0, 14), // "GuiVoicePlayer"
QT_MOC_LITERAL(1, 15, 11), // "setFilePath"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 7), // "VNumber"
QT_MOC_LITERAL(4, 36, 13), // "onPlayClicked"
QT_MOC_LITERAL(5, 50, 23), // "onSliderPositionPressed"
QT_MOC_LITERAL(6, 74, 21), // "onSliderPositionMoved"
QT_MOC_LITERAL(7, 96, 24), // "onSliderPositionReleased"
QT_MOC_LITERAL(8, 121, 9), // "onPlaying"
QT_MOC_LITERAL(9, 131, 8), // "onPaused"
QT_MOC_LITERAL(10, 140, 10), // "onFinished"
QT_MOC_LITERAL(11, 151, 15), // "setFileDuration"
QT_MOC_LITERAL(12, 167, 15), // "setFilePosition"
QT_MOC_LITERAL(13, 183, 14), // "onCloseClicked"
QT_MOC_LITERAL(14, 198, 10), // "showPlayer"
QT_MOC_LITERAL(15, 209, 10) // "hidePlayer"

    },
    "GuiVoicePlayer\0setFilePath\0\0VNumber\0"
    "onPlayClicked\0onSliderPositionPressed\0"
    "onSliderPositionMoved\0onSliderPositionReleased\0"
    "onPlaying\0onPaused\0onFinished\0"
    "setFileDuration\0setFilePosition\0"
    "onCloseClicked\0showPlayer\0hidePlayer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GuiVoicePlayer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   79,    2, 0x0a /* Public */,
       4,    0,   84,    2, 0x09 /* Protected */,
       5,    0,   85,    2, 0x09 /* Protected */,
       6,    1,   86,    2, 0x09 /* Protected */,
       7,    0,   89,    2, 0x09 /* Protected */,
       8,    2,   90,    2, 0x09 /* Protected */,
       9,    2,   95,    2, 0x09 /* Protected */,
      10,    2,  100,    2, 0x09 /* Protected */,
      11,    3,  105,    2, 0x09 /* Protected */,
      12,    3,  112,    2, 0x09 /* Protected */,
      13,    0,  119,    2, 0x09 /* Protected */,
      14,    0,  120,    2, 0x09 /* Protected */,
      15,    0,  121,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 3,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 3,    2,    2,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 3,    2,    2,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 3,    2,    2,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 3, QMetaType::LongLong,    2,    2,    2,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 3, QMetaType::LongLong,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GuiVoicePlayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GuiVoicePlayer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setFilePath((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< VNumber(*)>(_a[2]))); break;
        case 1: _t->onPlayClicked(); break;
        case 2: _t->onSliderPositionPressed(); break;
        case 3: _t->onSliderPositionMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->onSliderPositionReleased(); break;
        case 5: _t->onPlaying((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< VNumber(*)>(_a[2]))); break;
        case 6: _t->onPaused((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< VNumber(*)>(_a[2]))); break;
        case 7: _t->onFinished((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< VNumber(*)>(_a[2]))); break;
        case 8: _t->setFileDuration((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< VNumber(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3]))); break;
        case 9: _t->setFilePosition((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< VNumber(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3]))); break;
        case 10: _t->onCloseClicked(); break;
        case 11: _t->showPlayer(); break;
        case 12: _t->hidePlayer(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GuiVoicePlayer::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_GuiVoicePlayer.data,
    qt_meta_data_GuiVoicePlayer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GuiVoicePlayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GuiVoicePlayer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GuiVoicePlayer.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GuiVoicePlayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
