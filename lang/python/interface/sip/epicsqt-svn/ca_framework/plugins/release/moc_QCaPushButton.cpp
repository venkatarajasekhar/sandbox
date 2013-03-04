/****************************************************************************
** Meta object code from reading C++ file 'QCaPushButton.h'
**
** Created: Wed Apr 6 09:21:05 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/include/QCaPushButton.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QCaPushButton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QCaPushButton[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   15,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      58,   43,   14,   14, 0x08,
     113,   96,   14,   14, 0x08,
     168,   14,   14,   14, 0x08,
     182,   14,   14,   14, 0x08,
     197,   14,   14,   14, 0x08,
     217,  211,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QCaPushButton[] = {
    "QCaPushButton\0\0out\0dbValueChanged(QString)\0"
    "connectionInfo\0connectionChanged(QCaConnectionInfo&)\0"
    "text,alarmInfo,,\0"
    "setButtonText(QString,QCaAlarmInfo&,QCaDateTime&,uint)\0"
    "userPressed()\0userReleased()\0userClicked()\0"
    "state\0requestEnabled(bool)\0"
};

const QMetaObject QCaPushButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_QCaPushButton,
      qt_meta_data_QCaPushButton, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCaPushButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCaPushButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCaPushButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCaPushButton))
        return static_cast<void*>(const_cast< QCaPushButton*>(this));
    if (!strcmp(_clname, "QCaWidget"))
        return static_cast< QCaWidget*>(const_cast< QCaPushButton*>(this));
    return QPushButton::qt_metacast(_clname);
}

int QCaPushButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: dbValueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: connectionChanged((*reinterpret_cast< QCaConnectionInfo(*)>(_a[1]))); break;
        case 2: setButtonText((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QCaAlarmInfo(*)>(_a[2])),(*reinterpret_cast< QCaDateTime(*)>(_a[3])),(*reinterpret_cast< const uint(*)>(_a[4]))); break;
        case 3: userPressed(); break;
        case 4: userReleased(); break;
        case 5: userClicked(); break;
        case 6: requestEnabled((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QCaPushButton::dbValueChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
