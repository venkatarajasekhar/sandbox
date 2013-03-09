/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.10.2 on Mon Mar 28 16:23:15 2011
 *
 * Copyright (c) 2007
 * 	Riverbank Computing Limited <info@riverbankcomputing.co.uk>
 * 
 * This file is part of PyQt.
 * 
 * This copy of PyQt is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 2, or (at your option) any later
 * version.
 * 
 * PyQt is supplied in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 * 
 * You should have received a copy of the GNU General Public License along with
 * PyQt; see the file LICENSE.  If not, write to the Free Software Foundation,
 * Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#include "sipAPIqt.h"

#line 35 "/usr/share/sip/qt/qtimer.sip"
#include <qtimer.h>
#line 31 "sipqtQTimer.cc"

#line 66 "/usr/share/sip/qt/qobject.sip"
#include <qobject.h>
#include <qapplication.h>
#line 36 "sipqtQTimer.cc"
#line 53 "/usr/share/sip/qt/qmetaobject.sip"
#include <qmetaobject.h>
#line 39 "sipqtQTimer.cc"
#line 324 "/usr/share/sip/qt/qevent.sip"
#include <qevent.h>
#line 42 "sipqtQTimer.cc"
#line 1163 "/usr/share/sip/qt/qevent.sip"
#include <qevent.h>
#line 45 "sipqtQTimer.cc"
#line 1138 "/usr/share/sip/qt/qevent.sip"
#include <qevent.h>
#line 48 "sipqtQTimer.cc"
#line 582 "/usr/share/sip/qt/qevent.sip"
#include <qevent.h>
#line 51 "sipqtQTimer.cc"
#line 201 "/usr/share/sip/qt/qvariant.sip"
#include <qvariant.h>
#line 54 "sipqtQTimer.cc"
#line 37 "/usr/share/sip/qt/qobjectlist.sip"
#include <qobjectlist.h>
#line 57 "sipqtQTimer.cc"
#line 449 "/usr/share/sip/qt/qstring.sip"
#include <qstring.h>
#line 60 "sipqtQTimer.cc"


class sipQTimer : public QTimer
{
public:
    sipQTimer(QObject *,char *);
    virtual ~sipQTimer();

    /*
     * There is a public method for every protected method visible from
     * this class.
     */
    void sipProtectVirt_timerEvent(bool,QTimerEvent *);
    void sipProtectVirt_childEvent(bool,QChildEvent *);
    void sipProtectVirt_customEvent(bool,QCustomEvent *);
    bool sipProtectVirt_event(bool,QEvent *);

    /*
     * There is a public method for every Qt signal that can be emitted
     * by this object.  This function is called by Python to emit the
     * signal.
     */
    int sipEmit_destroyed(PyObject *);
    int sipEmit_timeout(PyObject *);

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    QMetaObject * metaObject() const;
    bool event(QEvent *);
    bool eventFilter(QObject *,QEvent *);
    void setName(const char *);
    void insertChild(QObject *);
    void removeChild(QObject *);
    bool setProperty(const char *,const QVariant&);
    QVariant property(const char *) const;
    void timerEvent(QTimerEvent *);
    void childEvent(QChildEvent *);
    void customEvent(QCustomEvent *);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQTimer(const sipQTimer &);
    sipQTimer &operator = (const sipQTimer &);

    char sipPyMethods[11];
};

sipQTimer::sipQTimer(QObject *a0,char *a1): QTimer(a0,a1), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQTimer::~sipQTimer()
{
    sipCommonDtor(sipPySelf);
}

QMetaObject * sipQTimer::metaObject() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_metaObject);

    if (!meth)
        return QTimer::metaObject();

    extern QMetaObject * sipVH_qt_179(sip_gilstate_t,PyObject *);

    return sipVH_qt_179(sipGILState,meth);
}

bool sipQTimer::event(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_event);

    if (!meth)
        return QTimer::event(a0);

    extern bool sipVH_qt_178(sip_gilstate_t,PyObject *,QEvent *);

    return sipVH_qt_178(sipGILState,meth,a0);
}

bool sipQTimer::eventFilter(QObject *a0,QEvent *a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_eventFilter);

    if (!meth)
        return QObject::eventFilter(a0,a1);

    extern bool sipVH_qt_177(sip_gilstate_t,PyObject *,QObject *,QEvent *);

    return sipVH_qt_177(sipGILState,meth,a0,a1);
}

void sipQTimer::setName(const char *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_setName);

    if (!meth)
    {
        QObject::setName(a0);
        return;
    }

    extern void sipVH_qt_176(sip_gilstate_t,PyObject *,const char *);

    sipVH_qt_176(sipGILState,meth,a0);
}

void sipQTimer::insertChild(QObject *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_insertChild);

    if (!meth)
    {
        QObject::insertChild(a0);
        return;
    }

    extern void sipVH_qt_175(sip_gilstate_t,PyObject *,QObject *);

    sipVH_qt_175(sipGILState,meth,a0);
}

void sipQTimer::removeChild(QObject *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_removeChild);

    if (!meth)
    {
        QObject::removeChild(a0);
        return;
    }

    extern void sipVH_qt_175(sip_gilstate_t,PyObject *,QObject *);

    sipVH_qt_175(sipGILState,meth,a0);
}

bool sipQTimer::setProperty(const char *a0,const QVariant& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_setProperty);

    if (!meth)
        return QObject::setProperty(a0,a1);

    extern bool sipVH_qt_174(sip_gilstate_t,PyObject *,const char *,const QVariant&);

    return sipVH_qt_174(sipGILState,meth,a0,a1);
}

QVariant sipQTimer::property(const char *a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[7]),sipPySelf,NULL,sipName_property);

    if (!meth)
        return QObject::property(a0);

    extern QVariant sipVH_qt_173(sip_gilstate_t,PyObject *,const char *);

    return sipVH_qt_173(sipGILState,meth,a0);
}

void sipQTimer::timerEvent(QTimerEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,NULL,sipName_timerEvent);

    if (!meth)
    {
        QObject::timerEvent(a0);
        return;
    }

    extern void sipVH_qt_172(sip_gilstate_t,PyObject *,QTimerEvent *);

    sipVH_qt_172(sipGILState,meth,a0);
}

void sipQTimer::childEvent(QChildEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[9],sipPySelf,NULL,sipName_childEvent);

    if (!meth)
    {
        QObject::childEvent(a0);
        return;
    }

    extern void sipVH_qt_171(sip_gilstate_t,PyObject *,QChildEvent *);

    sipVH_qt_171(sipGILState,meth,a0);
}

void sipQTimer::customEvent(QCustomEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[10],sipPySelf,NULL,sipName_customEvent);

    if (!meth)
    {
        QObject::customEvent(a0);
        return;
    }

    extern void sipVH_qt_170(sip_gilstate_t,PyObject *,QCustomEvent *);

    sipVH_qt_170(sipGILState,meth,a0);
}

void sipQTimer::sipProtectVirt_timerEvent(bool sipSelfWasArg,QTimerEvent *a0)
{
    (sipSelfWasArg ? QObject::timerEvent(a0) : timerEvent(a0));
}

void sipQTimer::sipProtectVirt_childEvent(bool sipSelfWasArg,QChildEvent *a0)
{
    (sipSelfWasArg ? QObject::childEvent(a0) : childEvent(a0));
}

void sipQTimer::sipProtectVirt_customEvent(bool sipSelfWasArg,QCustomEvent *a0)
{
    (sipSelfWasArg ? QObject::customEvent(a0) : customEvent(a0));
}

bool sipQTimer::sipProtectVirt_event(bool sipSelfWasArg,QEvent *a0)
{
    return (sipSelfWasArg ? QTimer::event(a0) : event(a0));
}

int sipQTimer::sipEmit_destroyed(PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            emit destroyed();

            return 0;
        }
    }

    {
        QObject * a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8", sipType_QObject, &a0))
        {
            emit destroyed(a0);

            return 0;
        }
    }

    sipNoMethod(sipParseErr, sipName_QTimer, sipName_destroyed, NULL);

    return -1;
}

extern "C" {static int QTimer_emit_destroyed(sipSimpleWrapper *, PyObject *);}
static int QTimer_emit_destroyed(sipSimpleWrapper *sw,PyObject *sipArgs)
{
    sipQTimer *ptr = reinterpret_cast<sipQTimer *>(sipGetComplexCppPtr(sw));

    return (ptr ? ptr->sipEmit_destroyed(sipArgs) : -1);
}

int sipQTimer::sipEmit_timeout(PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            emit timeout();

            return 0;
        }
    }

    sipNoMethod(sipParseErr, sipName_QTimer, sipName_timeout, NULL);

    return -1;
}

extern "C" {static int QTimer_emit_timeout(sipSimpleWrapper *, PyObject *);}
static int QTimer_emit_timeout(sipSimpleWrapper *sw,PyObject *sipArgs)
{
    sipQTimer *ptr = reinterpret_cast<sipQTimer *>(sipGetComplexCppPtr(sw));

    return (ptr ? ptr->sipEmit_timeout(sipArgs) : -1);
}

static pyqt3QtSignal signals_QTimer[] = {
    {sipName_destroyed, QTimer_emit_destroyed},
    {sipName_timeout, QTimer_emit_timeout},
    {NULL, NULL}
};


extern "C" {static PyObject *meth_QTimer_timerEvent(PyObject *, PyObject *);}
static PyObject *meth_QTimer_timerEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QTimerEvent * a0;
        sipQTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QTimer, &sipCpp, sipType_QTimerEvent, &a0))
        {
            sipCpp->sipProtectVirt_timerEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimer, sipName_timerEvent, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTimer_childEvent(PyObject *, PyObject *);}
static PyObject *meth_QTimer_childEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QChildEvent * a0;
        sipQTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QTimer, &sipCpp, sipType_QChildEvent, &a0))
        {
            sipCpp->sipProtectVirt_childEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimer, sipName_childEvent, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTimer_customEvent(PyObject *, PyObject *);}
static PyObject *meth_QTimer_customEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QCustomEvent * a0;
        sipQTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QTimer, &sipCpp, sipType_QCustomEvent, &a0))
        {
            sipCpp->sipProtectVirt_customEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimer, sipName_customEvent, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTimer_isActive(PyObject *, PyObject *);}
static PyObject *meth_QTimer_isActive(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTimer, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isActive();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimer, sipName_isActive, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTimer_start(PyObject *, PyObject *);}
static PyObject *meth_QTimer_start(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        bool a1 = 0;
        QTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi|b", &sipSelf, sipType_QTimer, &sipCpp, &a0, &a1))
        {
            int sipRes;

            sipRes = sipCpp->start(a0,a1);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimer, sipName_start, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTimer_changeInterval(PyObject *, PyObject *);}
static PyObject *meth_QTimer_changeInterval(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QTimer, &sipCpp, &a0))
        {
            sipCpp->changeInterval(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimer, sipName_changeInterval, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTimer_stop(PyObject *, PyObject *);}
static PyObject *meth_QTimer_stop(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTimer, &sipCpp))
        {
            sipCpp->stop();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimer, sipName_stop, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTimer_singleShot(PyObject *, PyObject *);}
static PyObject *meth_QTimer_singleShot(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QObject * a1;
        char * a2;

        if (sipParseArgs(&sipParseErr, sipArgs, "iqS", &a0, "()", &a1, &a2, &a2))
        {
            QTimer::singleShot(a0,a1,a2);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        int a0;
        QObject * a1;
        char * a2;

        if (sipParseArgs(&sipParseErr, sipArgs, "iy", &a0, "()", &a1, &a2))
        {
            QTimer::singleShot(a0,a1,a2);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimer, sipName_singleShot, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTimer_timerId(PyObject *, PyObject *);}
static PyObject *meth_QTimer_timerId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTimer, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->timerId();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimer, sipName_timerId, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTimer_event(PyObject *, PyObject *);}
static PyObject *meth_QTimer_event(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QEvent * a0;
        sipQTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QTimer, &sipCpp, sipType_QEvent, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->sipProtectVirt_event(sipSelfWasArg,a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimer, sipName_event, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTimer_metaObject(PyObject *, PyObject *);}
static PyObject *meth_QTimer_metaObject(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTimer, &sipCpp))
        {
            QMetaObject *sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QTimer::metaObject() : sipCpp->metaObject());

            return sipConvertFromType(sipRes,sipType_QMetaObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimer, sipName_metaObject, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QTimer(void *, const sipTypeDef *);}
static void *cast_QTimer(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QTimer)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QTimer *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTimer(void *, int);}
static void release_QTimer(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQTimer *>(sipCppV);
    else
        delete reinterpret_cast<QTimer *>(sipCppV);
}


extern "C" {static void dealloc_QTimer(sipSimpleWrapper *);}
static void dealloc_QTimer(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQTimer *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QTimer(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QTimer(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QTimer(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQTimer *sipCpp = 0;

    {
        QObject * a0 = 0;
        char * a1 = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "|JHs", sipType_QObject, &a0, sipOwner, &a1))
        {
            sipCpp = new sipQTimer(a0,a1);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QTimer[] = {{202, 255, 1}};


static PyMethodDef methods_QTimer[] = {
    {SIP_MLNAME_CAST(sipName_changeInterval), meth_QTimer_changeInterval, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_childEvent), meth_QTimer_childEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_customEvent), meth_QTimer_customEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_event), meth_QTimer_event, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isActive), meth_QTimer_isActive, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_metaObject), meth_QTimer_metaObject, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_singleShot), meth_QTimer_singleShot, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_start), meth_QTimer_start, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_stop), meth_QTimer_stop, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_timerEvent), meth_QTimer_timerEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_timerId), meth_QTimer_timerId, METH_VARARGS, NULL}
};


pyqt3ClassTypeDef sipTypeDef_qt_QTimer = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QTimer,
        {0}
    },
    {
        sipNameNr_QTimer,
        {0, 0, 1},
        11, methods_QTimer,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QTimer,
    0,
    init_QTimer,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QTimer,
    0,
    0,
    0,
    release_QTimer,
    cast_QTimer,
    0,
    0,
    0
},
    signals_QTimer
};