/****************************************************************************
** Meta object code from reading C++ file 'QCaFloating.h'
**
** Created: Wed Apr 6 09:21:01 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../data/include/QCaFloating.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QCaFloating.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QCaFloating[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      53,   13,   12,   12, 0x05,
     150,  109,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     225,  220,   12,   12, 0x0a,
     273,  247,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QCaFloating[] = {
    "QCaFloating\0\0value,alarmInfo,timeStamp,variableIndex\0"
    "floatingChanged(double,QCaAlarmInfo&,QCaDateTime&,uint)\0"
    "values,alarmInfo,timeStamp,variableIndex\0"
    "floatingArrayChanged(QVector<double>,QCaAlarmInfo&,QCaDateTime&,uint)\0"
    "data\0writeFloating(double)\0"
    "value,alarmInfo,timeStamp\0"
    "convertVariant(QVariant,QCaAlarmInfo&,QCaDateTime&)\0"
};

const QMetaObject QCaFloating::staticMetaObject = {
    { &qcaobject::QCaObject::staticMetaObject, qt_meta_stringdata_QCaFloating,
      qt_meta_data_QCaFloating, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCaFloating::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCaFloating::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCaFloating::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCaFloating))
        return static_cast<void*>(const_cast< QCaFloating*>(this));
    typedef qcaobject::QCaObject QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int QCaFloating::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef qcaobject::QCaObject QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: floatingChanged((*reinterpret_cast< const double(*)>(_a[1])),(*reinterpret_cast< QCaAlarmInfo(*)>(_a[2])),(*reinterpret_cast< QCaDateTime(*)>(_a[3])),(*reinterpret_cast< const uint(*)>(_a[4]))); break;
        case 1: floatingArrayChanged((*reinterpret_cast< const QVector<double>(*)>(_a[1])),(*reinterpret_cast< QCaAlarmInfo(*)>(_a[2])),(*reinterpret_cast< QCaDateTime(*)>(_a[3])),(*reinterpret_cast< const uint(*)>(_a[4]))); break;
        case 2: writeFloating((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 3: convertVariant((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< QCaAlarmInfo(*)>(_a[2])),(*reinterpret_cast< QCaDateTime(*)>(_a[3]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QCaFloating::floatingChanged(const double & _t1, QCaAlarmInfo & _t2, QCaDateTime & _t3, const unsigned int & _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QCaFloating::floatingArrayChanged(const QVector<double> & _t1, QCaAlarmInfo & _t2, QCaDateTime & _t3, const unsigned int & _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
