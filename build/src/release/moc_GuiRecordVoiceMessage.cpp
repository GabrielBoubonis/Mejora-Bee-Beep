/****************************************************************************
** Meta object code from reading C++ file 'GuiRecordVoiceMessage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../beebeep-code-r1612/src/voicechat/GuiRecordVoiceMessage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GuiRecordVoiceMessage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GuiRecordVoiceMessage_t {
    QByteArrayData data[15];
    char stringdata0[275];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GuiRecordVoiceMessage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GuiRecordVoiceMessage_t qt_meta_stringdata_GuiRecordVoiceMessage = {
    {
QT_MOC_LITERAL(0, 0, 21), // "GuiRecordVoiceMessage"
QT_MOC_LITERAL(1, 22, 16), // "sendVoiceMessage"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 18), // "cancelVoiceMessage"
QT_MOC_LITERAL(4, 59, 12), // "toggleRecord"
QT_MOC_LITERAL(5, 72, 18), // "processAudioBuffer"
QT_MOC_LITERAL(6, 91, 12), // "QAudioBuffer"
QT_MOC_LITERAL(7, 104, 22), // "updateRecorderProgress"
QT_MOC_LITERAL(8, 127, 23), // "onRecorderStatusChanged"
QT_MOC_LITERAL(9, 151, 22), // "QMediaRecorder::Status"
QT_MOC_LITERAL(10, 174, 22), // "onRecorderStateChanged"
QT_MOC_LITERAL(11, 197, 21), // "QMediaRecorder::State"
QT_MOC_LITERAL(12, 219, 17), // "showRecorderError"
QT_MOC_LITERAL(13, 237, 21), // "QMediaRecorder::Error"
QT_MOC_LITERAL(14, 259, 15) // "onVolumeChanged"

    },
    "GuiRecordVoiceMessage\0sendVoiceMessage\0"
    "\0cancelVoiceMessage\0toggleRecord\0"
    "processAudioBuffer\0QAudioBuffer\0"
    "updateRecorderProgress\0onRecorderStatusChanged\0"
    "QMediaRecorder::Status\0onRecorderStateChanged\0"
    "QMediaRecorder::State\0showRecorderError\0"
    "QMediaRecorder::Error\0onVolumeChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GuiRecordVoiceMessage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x09 /* Protected */,
       3,    0,   60,    2, 0x09 /* Protected */,
       4,    0,   61,    2, 0x09 /* Protected */,
       5,    1,   62,    2, 0x09 /* Protected */,
       7,    1,   65,    2, 0x09 /* Protected */,
       8,    1,   68,    2, 0x09 /* Protected */,
      10,    1,   71,    2, 0x09 /* Protected */,
      12,    1,   74,    2, 0x09 /* Protected */,
      14,    1,   77,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, QMetaType::LongLong,    2,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void, 0x80000000 | 13,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void GuiRecordVoiceMessage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GuiRecordVoiceMessage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendVoiceMessage(); break;
        case 1: _t->cancelVoiceMessage(); break;
        case 2: _t->toggleRecord(); break;
        case 3: _t->processAudioBuffer((*reinterpret_cast< const QAudioBuffer(*)>(_a[1]))); break;
        case 4: _t->updateRecorderProgress((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 5: _t->onRecorderStatusChanged((*reinterpret_cast< QMediaRecorder::Status(*)>(_a[1]))); break;
        case 6: _t->onRecorderStateChanged((*reinterpret_cast< QMediaRecorder::State(*)>(_a[1]))); break;
        case 7: _t->showRecorderError((*reinterpret_cast< QMediaRecorder::Error(*)>(_a[1]))); break;
        case 8: _t->onVolumeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAudioBuffer >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaRecorder::Status >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaRecorder::State >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaRecorder::Error >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GuiRecordVoiceMessage::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_GuiRecordVoiceMessage.data,
    qt_meta_data_GuiRecordVoiceMessage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GuiRecordVoiceMessage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GuiRecordVoiceMessage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GuiRecordVoiceMessage.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int GuiRecordVoiceMessage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
