/****************************************************************************
** Meta object code from reading C++ file 'CmdPushButton.h'
**
** Created: Wed Apr 6 09:21:09 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/include/CmdPushButton.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CmdPushButton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CmdPushButton[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x0a,
      35,   29,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CmdPushButton[] = {
    "CmdPushButton\0\0userClicked()\0state\0"
    "requestEnabled(bool)\0"
};

const QMetaObject CmdPushButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_CmdPushButton,
      qt_meta_data_CmdPushButton, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CmdPushButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CmdPushButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CmdPushButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CmdPushButton))
        return static_cast<void*>(const_cast< CmdPushButton*>(this));
    return QPushButton::qt_metacast(_clname);
}

int CmdPushButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: userClicked(); break;
        case 1: requestEnabled((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
