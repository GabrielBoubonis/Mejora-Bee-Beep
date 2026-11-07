/****************************************************************************
** Meta object code from reading C++ file 'BeeApplication.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../beebeep-code-r1612/src/desktop/BeeApplication.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BeeApplication.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BeeApplication_t {
    QByteArrayData data[22];
    char stringdata0[335];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BeeApplication_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BeeApplication_t qt_meta_stringdata_BeeApplication = {
    {
QT_MOC_LITERAL(0, 0, 14), // "BeeApplication"
QT_MOC_LITERAL(1, 15, 14), // "enteringInIdle"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 15), // "exitingFromIdle"
QT_MOC_LITERAL(4, 47, 6), // "showUp"
QT_MOC_LITERAL(5, 54, 9), // "tickEvent"
QT_MOC_LITERAL(6, 64, 15), // "shutdownRequest"
QT_MOC_LITERAL(7, 80, 12), // "sleepRequest"
QT_MOC_LITERAL(8, 93, 13), // "wakeUpRequest"
QT_MOC_LITERAL(9, 107, 27), // "networkConfigurationChanged"
QT_MOC_LITERAL(10, 135, 9), // "checkIdle"
QT_MOC_LITERAL(11, 145, 13), // "forceShutdown"
QT_MOC_LITERAL(12, 159, 10), // "resetStyle"
QT_MOC_LITERAL(13, 170, 12), // "resetPalette"
QT_MOC_LITERAL(14, 183, 10), // "checkTicks"
QT_MOC_LITERAL(15, 194, 7), // "setIdle"
QT_MOC_LITERAL(16, 202, 10), // "removeIdle"
QT_MOC_LITERAL(17, 213, 25), // "slotConnectionEstablished"
QT_MOC_LITERAL(18, 239, 13), // "onFileChanged"
QT_MOC_LITERAL(19, 253, 25), // "onApplicationStateChanged"
QT_MOC_LITERAL(20, 279, 20), // "Qt::ApplicationState"
QT_MOC_LITERAL(21, 300, 34) // "onNetworkManagerOnlineStateCh..."

    },
    "BeeApplication\0enteringInIdle\0\0"
    "exitingFromIdle\0showUp\0tickEvent\0"
    "shutdownRequest\0sleepRequest\0wakeUpRequest\0"
    "networkConfigurationChanged\0checkIdle\0"
    "forceShutdown\0resetStyle\0resetPalette\0"
    "checkTicks\0setIdle\0removeIdle\0"
    "slotConnectionEstablished\0onFileChanged\0"
    "onApplicationStateChanged\0"
    "Qt::ApplicationState\0"
    "onNetworkManagerOnlineStateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BeeApplication[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x06 /* Public */,
       3,    0,  110,    2, 0x06 /* Public */,
       4,    0,  111,    2, 0x06 /* Public */,
       5,    1,  112,    2, 0x06 /* Public */,
       6,    0,  115,    2, 0x06 /* Public */,
       7,    0,  116,    2, 0x06 /* Public */,
       8,    0,  117,    2, 0x06 /* Public */,
       9,    0,  118,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,  119,    2, 0x0a /* Public */,
      11,    0,  120,    2, 0x0a /* Public */,
      12,    0,  121,    2, 0x0a /* Public */,
      13,    0,  122,    2, 0x0a /* Public */,
      14,    1,  123,    2, 0x09 /* Protected */,
      15,    0,  126,    2, 0x09 /* Protected */,
      16,    0,  127,    2, 0x09 /* Protected */,
      17,    0,  128,    2, 0x09 /* Protected */,
      18,    1,  129,    2, 0x09 /* Protected */,
      19,    1,  132,    2, 0x09 /* Protected */,
      21,    1,  135,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 20,    2,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void BeeApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BeeApplication *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->enteringInIdle(); break;
        case 1: _t->exitingFromIdle(); break;
        case 2: _t->showUp(); break;
        case 3: _t->tickEvent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->shutdownRequest(); break;
        case 5: _t->sleepRequest(); break;
        case 6: _t->wakeUpRequest(); break;
        case 7: _t->networkConfigurationChanged(); break;
        case 8: _t->checkIdle(); break;
        case 9: _t->forceShutdown(); break;
        case 10: _t->resetStyle(); break;
        case 11: _t->resetPalette(); break;
        case 12: _t->checkTicks((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->setIdle(); break;
        case 14: _t->removeIdle(); break;
        case 15: _t->slotConnectionEstablished(); break;
        case 16: _t->onFileChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->onApplicationStateChanged((*reinterpret_cast< Qt::ApplicationState(*)>(_a[1]))); break;
        case 18: _t->onNetworkManagerOnlineStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BeeApplication::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BeeApplication::enteringInIdle)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BeeApplication::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BeeApplication::exitingFromIdle)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (BeeApplication::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BeeApplication::showUp)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (BeeApplication::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BeeApplication::tickEvent)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (BeeApplication::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BeeApplication::shutdownRequest)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (BeeApplication::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BeeApplication::sleepRequest)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (BeeApplication::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BeeApplication::wakeUpRequest)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (BeeApplication::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BeeApplication::networkConfigurationChanged)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BeeApplication::staticMetaObject = { {
    QMetaObject::SuperData::link<QApplication::staticMetaObject>(),
    qt_meta_stringdata_BeeApplication.data,
    qt_meta_data_BeeApplication,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BeeApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BeeApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BeeApplication.stringdata0))
        return static_cast<void*>(this);
    return QApplication::qt_metacast(_clname);
}

int BeeApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void BeeApplication::enteringInIdle()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void BeeApplication::exitingFromIdle()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void BeeApplication::showUp()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void BeeApplication::tickEvent(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void BeeApplication::shutdownRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void BeeApplication::sleepRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void BeeApplication::wakeUpRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void BeeApplication::networkConfigurationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
