/****************************************************************************
** Meta object code from reading C++ file 'ScareletSetter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ScareletSetter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ScareletSetter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ScareletSetter_t {
    QByteArrayData data[12];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScareletSetter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScareletSetter_t qt_meta_stringdata_ScareletSetter = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ScareletSetter"
QT_MOC_LITERAL(1, 15, 9), // "SetPlayer"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 7), // "SetBomb"
QT_MOC_LITERAL(4, 34, 8), // "SetPower"
QT_MOC_LITERAL(5, 43, 8), // "SetPoint"
QT_MOC_LITERAL(6, 52, 8), // "SetGraze"
QT_MOC_LITERAL(7, 61, 8), // "SetScore"
QT_MOC_LITERAL(8, 70, 12), // "SetHighScore"
QT_MOC_LITERAL(9, 83, 7), // "SetRank"
QT_MOC_LITERAL(10, 91, 9), // "checkprog"
QT_MOC_LITERAL(11, 101, 8) // "checkbox"

    },
    "ScareletSetter\0SetPlayer\0\0SetBomb\0"
    "SetPower\0SetPoint\0SetGraze\0SetScore\0"
    "SetHighScore\0SetRank\0checkprog\0checkbox"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScareletSetter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Void,

       0        // eod
};

void ScareletSetter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ScareletSetter *_t = static_cast<ScareletSetter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SetPlayer(); break;
        case 1: _t->SetBomb(); break;
        case 2: _t->SetPower(); break;
        case 3: _t->SetPoint(); break;
        case 4: _t->SetGraze(); break;
        case 5: _t->SetScore(); break;
        case 6: _t->SetHighScore(); break;
        case 7: _t->SetRank(); break;
        case 8: { int _r = _t->checkprog();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: _t->checkbox(); break;
        default: ;
        }
    }
}

const QMetaObject ScareletSetter::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ScareletSetter.data,
      qt_meta_data_ScareletSetter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ScareletSetter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScareletSetter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ScareletSetter.stringdata0))
        return static_cast<void*>(const_cast< ScareletSetter*>(this));
    return QWidget::qt_metacast(_clname);
}

int ScareletSetter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
