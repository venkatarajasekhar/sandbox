/****************************************************************************
** Meta object code from reading C++ file 'QCaShape.h'
**
** Created: Wed Apr 6 09:21:04 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/include/QCaShape.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QCaShape.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QCaShape[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   10,    9,    9, 0x05,
      41,   10,    9,    9, 0x05,
      68,   10,    9,    9, 0x05,
      95,   10,    9,    9, 0x05,
     122,   10,    9,    9, 0x05,
     149,   10,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
     191,  176,    9,    9, 0x08,
     260,  229,    9,    9, 0x08,
     313,  307,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QCaShape[] = {
    "QCaShape\0\0out\0dbValueChanged1(qlonglong)\0"
    "dbValueChanged2(qlonglong)\0"
    "dbValueChanged3(qlonglong)\0"
    "dbValueChanged4(qlonglong)\0"
    "dbValueChanged5(qlonglong)\0"
    "dbValueChanged6(qlonglong)\0connectionInfo\0"
    "connectionChanged(QCaConnectionInfo&)\0"
    "value,alarmInfo,,variableIndex\0"
    "setValue(long,QCaAlarmInfo&,QCaDateTime&,uint)\0"
    "state\0requestEnabled(bool)\0"
};

const QMetaObject QCaShape::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QCaShape,
      qt_meta_data_QCaShape, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCaShape::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCaShape::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCaShape::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCaShape))
        return static_cast<void*>(const_cast< QCaShape*>(this));
    if (!strcmp(_clname, "QCaWidget"))
        return static_cast< QCaWidget*>(const_cast< QCaShape*>(this));
    return QWidget::qt_metacast(_clname);
}

int QCaShape::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: dbValueChanged1((*reinterpret_cast< const qlonglong(*)>(_a[1]))); break;
        case 1: dbValueChanged2((*reinterpret_cast< const qlonglong(*)>(_a[1]))); break;
        case 2: dbValueChanged3((*reinterpret_cast< const qlonglong(*)>(_a[1]))); break;
        case 3: dbValueChanged4((*reinterpret_cast< const qlonglong(*)>(_a[1]))); break;
        case 4: dbValueChanged5((*reinterpret_cast< const qlonglong(*)>(_a[1]))); break;
        case 5: dbValueChanged6((*reinterpret_cast< const qlonglong(*)>(_a[1]))); break;
        case 6: connectionChanged((*reinterpret_cast< QCaConnectionInfo(*)>(_a[1]))); break;
        case 7: setValue((*reinterpret_cast< const long(*)>(_a[1])),(*reinterpret_cast< QCaAlarmInfo(*)>(_a[2])),(*reinterpret_cast< QCaDateTime(*)>(_a[3])),(*reinterpret_cast< const uint(*)>(_a[4]))); break;
        case 8: requestEnabled((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void QCaShape::dbValueChanged1(const qlonglong & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QCaShape::dbValueChanged2(const qlonglong & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QCaShape::dbValueChanged3(const qlonglong & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QCaShape::dbValueChanged4(const qlonglong & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QCaShape::dbValueChanged5(const qlonglong & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QCaShape::dbValueChanged6(const qlonglong & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
