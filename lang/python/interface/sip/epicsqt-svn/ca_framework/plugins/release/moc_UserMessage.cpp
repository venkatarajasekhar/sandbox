/****************************************************************************
** Meta object code from reading C++ file 'UserMessage.h'
**
** Created: Wed Apr 6 09:20:58 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../data/include/UserMessage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UserMessage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UserMessage[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   13,   12,   12, 0x05,
      44,   13,   12,   12, 0x05,
      68,   13,   12,   12, 0x05,
      90,   13,   12,   12, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_UserMessage[] = {
    "UserMessage\0\0message\0statusMessage(QString)\0"
    "warningMessage(QString)\0errorMessage(QString)\0"
    "generalMessage(QString)\0"
};

const QMetaObject UserMessage::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UserMessage,
      qt_meta_data_UserMessage, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UserMessage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UserMessage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UserMessage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UserMessage))
        return static_cast<void*>(const_cast< UserMessage*>(this));
    return QObject::qt_metacast(_clname);
}

int UserMessage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: statusMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: warningMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: errorMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: generalMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void UserMessage::statusMessage(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UserMessage::warningMessage(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UserMessage::errorMessage(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void UserMessage::generalMessage(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
