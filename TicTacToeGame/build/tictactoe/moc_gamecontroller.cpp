/****************************************************************************
** Meta object code from reading C++ file 'gamecontroller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../tictactoe/gamecontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gamecontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GameController_t {
    QByteArrayData data[18];
    char stringdata0[236];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GameController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GameController_t qt_meta_stringdata_GameController = {
    {
QT_MOC_LITERAL(0, 0, 14), // "GameController"
QT_MOC_LITERAL(1, 15, 13), // "playerChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 19), // "scorePlayer1Changed"
QT_MOC_LITERAL(4, 50, 19), // "scorePlayer2Changed"
QT_MOC_LITERAL(5, 70, 13), // "winnerChanged"
QT_MOC_LITERAL(6, 84, 21), // "isGameFinishedChanged"
QT_MOC_LITERAL(7, 106, 11), // "requestMove"
QT_MOC_LITERAL(8, 118, 8), // "position"
QT_MOC_LITERAL(9, 127, 9), // "resetGame"
QT_MOC_LITERAL(10, 137, 10), // "resetScore"
QT_MOC_LITERAL(11, 148, 7), // "squares"
QT_MOC_LITERAL(12, 156, 24), // "QQmlObjectListModelBase*"
QT_MOC_LITERAL(13, 181, 6), // "player"
QT_MOC_LITERAL(14, 188, 12), // "scorePlayer1"
QT_MOC_LITERAL(15, 201, 12), // "scorePlayer2"
QT_MOC_LITERAL(16, 214, 6), // "winner"
QT_MOC_LITERAL(17, 221, 14) // "isGameFinished"

    },
    "GameController\0playerChanged\0\0"
    "scorePlayer1Changed\0scorePlayer2Changed\0"
    "winnerChanged\0isGameFinishedChanged\0"
    "requestMove\0position\0resetGame\0"
    "resetScore\0squares\0QQmlObjectListModelBase*\0"
    "player\0scorePlayer1\0scorePlayer2\0"
    "winner\0isGameFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GameController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       6,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,
       5,    0,   57,    2, 0x06 /* Public */,
       6,    0,   58,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       7,    1,   59,    2, 0x02 /* Public */,
       9,    0,   62,    2, 0x02 /* Public */,
      10,    0,   63,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      11, 0x80000000 | 12, 0x00095409,
      13, QMetaType::Int, 0x00495001,
      14, QMetaType::Int, 0x00495001,
      15, QMetaType::Int, 0x00495001,
      16, QMetaType::Int, 0x00495001,
      17, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

void GameController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GameController *_t = static_cast<GameController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->playerChanged(); break;
        case 1: _t->scorePlayer1Changed(); break;
        case 2: _t->scorePlayer2Changed(); break;
        case 3: _t->winnerChanged(); break;
        case 4: _t->isGameFinishedChanged(); break;
        case 5: _t->requestMove((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 6: _t->resetGame(); break;
        case 7: _t->resetScore(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GameController::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GameController::playerChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (GameController::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GameController::scorePlayer1Changed)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (GameController::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GameController::scorePlayer2Changed)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (GameController::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GameController::winnerChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (GameController::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GameController::isGameFinishedChanged)) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlObjectListModelBase* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        GameController *_t = static_cast<GameController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQmlObjectListModelBase**>(_v) = _t->get_squares(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->getPlayer(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->getScorePlayer1(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->getScorePlayer2(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->getWinner(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->getGameFinished(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject GameController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GameController.data,
      qt_meta_data_GameController,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GameController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameController::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GameController.stringdata0))
        return static_cast<void*>(const_cast< GameController*>(this));
    return QObject::qt_metacast(_clname);
}

int GameController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void GameController::playerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void GameController::scorePlayer1Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void GameController::scorePlayer2Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void GameController::winnerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void GameController::isGameFinishedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
