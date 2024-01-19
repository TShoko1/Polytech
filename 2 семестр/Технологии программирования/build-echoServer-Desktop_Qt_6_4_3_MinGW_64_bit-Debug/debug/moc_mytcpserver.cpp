/****************************************************************************
** Meta object code from reading C++ file 'mytcpserver.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../exam_02_07/echoServer/mytcpserver.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mytcpserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_MyTcpServer_t {
    uint offsetsAndSizes[26];
    char stringdata0[12];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[5];
    char stringdata5[5];
    char stringdata6[8];
    char stringdata7[2];
    char stringdata8[2];
    char stringdata9[18];
    char stringdata10[23];
    char stringdata11[15];
    char stringdata12[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_MyTcpServer_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_MyTcpServer_t qt_meta_stringdata_MyTcpServer = {
    {
        QT_MOC_LITERAL(0, 11),  // "MyTcpServer"
        QT_MOC_LITERAL(12, 8),  // "heapSort"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 11),  // "QList<int>&"
        QT_MOC_LITERAL(34, 4),  // "data"
        QT_MOC_LITERAL(39, 4),  // "step"
        QT_MOC_LITERAL(44, 7),  // "heapify"
        QT_MOC_LITERAL(52, 1),  // "n"
        QT_MOC_LITERAL(54, 1),  // "i"
        QT_MOC_LITERAL(56, 17),  // "slotNewConnection"
        QT_MOC_LITERAL(74, 22),  // "slotClientDisconnected"
        QT_MOC_LITERAL(97, 14),  // "slotServerRead"
        QT_MOC_LITERAL(112, 14)   // "slotServerSend"
    },
    "MyTcpServer",
    "heapSort",
    "",
    "QList<int>&",
    "data",
    "step",
    "heapify",
    "n",
    "i",
    "slotNewConnection",
    "slotClientDisconnected",
    "slotServerRead",
    "slotServerSend"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_MyTcpServer[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   50,    2, 0x0a,    1 /* Public */,
       6,    4,   55,    2, 0x0a,    4 /* Public */,
       9,    0,   64,    2, 0x0a,    9 /* Public */,
      10,    0,   65,    2, 0x0a,   10 /* Public */,
      11,    0,   66,    2, 0x0a,   11 /* Public */,
      12,    0,   67,    2, 0x0a,   12 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int, QMetaType::Int,    4,    7,    8,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MyTcpServer::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MyTcpServer.offsetsAndSizes,
    qt_meta_data_MyTcpServer,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_MyTcpServer_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MyTcpServer, std::true_type>,
        // method 'heapSort'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<int> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'heapify'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<int> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotNewConnection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotClientDisconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotServerRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotServerSend'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MyTcpServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MyTcpServer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->heapSort((*reinterpret_cast< std::add_pointer_t<QList<int>&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->heapify((*reinterpret_cast< std::add_pointer_t<QList<int>&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 2: _t->slotNewConnection(); break;
        case 3: _t->slotClientDisconnected(); break;
        case 4: _t->slotServerRead(); break;
        case 5: _t->slotServerSend(); break;
        default: ;
        }
    }
}

const QMetaObject *MyTcpServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyTcpServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyTcpServer.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MyTcpServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
