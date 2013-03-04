/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.10.2 on Mon Mar 28 16:23:17 2011
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

#line 35 "/usr/share/sip/qt/qaccel.sip"
#include <qaccel.h>
#line 31 "sipqtQAccel.cc"

#line 63 "/usr/share/sip/qt/qwidget.sip"
#include <qwidget.h>
#line 35 "sipqtQAccel.cc"
#line 66 "/usr/share/sip/qt/qobject.sip"
#include <qobject.h>
#include <qapplication.h>
#line 39 "sipqtQAccel.cc"
#line 53 "/usr/share/sip/qt/qmetaobject.sip"
#include <qmetaobject.h>
#line 42 "sipqtQAccel.cc"
#line 324 "/usr/share/sip/qt/qevent.sip"
#include <qevent.h>
#line 45 "sipqtQAccel.cc"
#line 40 "/usr/share/sip/qt/qkeysequence.sip"
#include <qkeysequence.h>
#line 48 "sipqtQAccel.cc"
#line 449 "/usr/share/sip/qt/qstring.sip"
#include <qstring.h>
#line 51 "sipqtQAccel.cc"
#line 1163 "/usr/share/sip/qt/qevent.sip"
#include <qevent.h>
#line 54 "sipqtQAccel.cc"
#line 1138 "/usr/share/sip/qt/qevent.sip"
#include <qevent.h>
#line 57 "sipqtQAccel.cc"
#line 582 "/usr/share/sip/qt/qevent.sip"
#include <qevent.h>
#line 60 "sipqtQAccel.cc"
#line 201 "/usr/share/sip/qt/qvariant.sip"
#include <qvariant.h>
#line 63 "sipqtQAccel.cc"
#line 37 "/usr/share/sip/qt/qobjectlist.sip"
#include <qobjectlist.h>
#line 66 "sipqtQAccel.cc"


class sipQAccel : public QAccel
{
public:
    sipQAccel(QWidget *,char *);
    sipQAccel(QWidget *,QObject *,char *);
    virtual ~sipQAccel();

    /*
     * There is a public method for every protected method visible from
     * this class.
     */
    void sipProtectVirt_timerEvent(bool,QTimerEvent *);
    void sipProtectVirt_childEvent(bool,QChildEvent *);
    void sipProtectVirt_customEvent(bool,QCustomEvent *);
    bool sipProtectVirt_eventFilter(bool,QObject *,QEvent *);

    /*
     * There is a public method for every Qt signal that can be emitted
     * by this object.  This function is called by Python to emit the
     * signal.
     */
    int sipEmit_destroyed(PyObject *);
    int sipEmit_activated(PyObject *);
    int sipEmit_activatedAmbiguously(PyObject *);

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
    sipQAccel(const sipQAccel &);
    sipQAccel &operator = (const sipQAccel &);

    char sipPyMethods[11];
};

sipQAccel::sipQAccel(QWidget *a0,char *a1): QAccel(a0,a1), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQAccel::sipQAccel(QWidget *a0,QObject *a1,char *a2): QAccel(a0,a1,a2), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQAccel::~sipQAccel()
{
    sipCommonDtor(sipPySelf);
}

QMetaObject * sipQAccel::metaObject() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_metaObject);

    if (!meth)
        return QAccel::metaObject();

    extern QMetaObject * sipVH_qt_179(sip_gilstate_t,PyObject *);

    return sipVH_qt_179(sipGILState,meth);
}

bool sipQAccel::event(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_event);

    if (!meth)
        return QObject::event(a0);

    extern bool sipVH_qt_178(sip_gilstate_t,PyObject *,QEvent *);

    return sipVH_qt_178(sipGILState,meth,a0);
}

bool sipQAccel::eventFilter(QObject *a0,QEvent *a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_eventFilter);

    if (!meth)
        return QAccel::eventFilter(a0,a1);

    extern bool sipVH_qt_177(sip_gilstate_t,PyObject *,QObject *,QEvent *);

    return sipVH_qt_177(sipGILState,meth,a0,a1);
}

void sipQAccel::setName(const char *a0)
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

void sipQAccel::insertChild(QObject *a0)
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

void sipQAccel::removeChild(QObject *a0)
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

bool sipQAccel::setProperty(const char *a0,const QVariant& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_setProperty);

    if (!meth)
        return QObject::setProperty(a0,a1);

    extern bool sipVH_qt_174(sip_gilstate_t,PyObject *,const char *,const QVariant&);

    return sipVH_qt_174(sipGILState,meth,a0,a1);
}

QVariant sipQAccel::property(const char *a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[7]),sipPySelf,NULL,sipName_property);

    if (!meth)
        return QObject::property(a0);

    extern QVariant sipVH_qt_173(sip_gilstate_t,PyObject *,const char *);

    return sipVH_qt_173(sipGILState,meth,a0);
}

void sipQAccel::timerEvent(QTimerEvent *a0)
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

void sipQAccel::childEvent(QChildEvent *a0)
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

void sipQAccel::customEvent(QCustomEvent *a0)
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

void sipQAccel::sipProtectVirt_timerEvent(bool sipSelfWasArg,QTimerEvent *a0)
{
    (sipSelfWasArg ? QObject::timerEvent(a0) : timerEvent(a0));
}

void sipQAccel::sipProtectVirt_childEvent(bool sipSelfWasArg,QChildEvent *a0)
{
    (sipSelfWasArg ? QObject::childEvent(a0) : childEvent(a0));
}

void sipQAccel::sipProtectVirt_customEvent(bool sipSelfWasArg,QCustomEvent *a0)
{
    (sipSelfWasArg ? QObject::customEvent(a0) : customEvent(a0));
}

bool sipQAccel::sipProtectVirt_eventFilter(bool sipSelfWasArg,QObject *a0,QEvent *a1)
{
    return (sipSelfWasArg ? QAccel::eventFilter(a0,a1) : eventFilter(a0,a1));
}

int sipQAccel::sipEmit_destroyed(PyObject *sipArgs)
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

    sipNoMethod(sipParseErr, sipName_QAccel, sipName_destroyed, NULL);

    return -1;
}

extern "C" {static int QAccel_emit_destroyed(sipSimpleWrapper *, PyObject *);}
static int QAccel_emit_destroyed(sipSimpleWrapper *sw,PyObject *sipArgs)
{
    sipQAccel *ptr = reinterpret_cast<sipQAccel *>(sipGetComplexCppPtr(sw));

    return (ptr ? ptr->sipEmit_destroyed(sipArgs) : -1);
}

int sipQAccel::sipEmit_activated(PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "i", &a0))
        {
            emit activated(a0);

            return 0;
        }
    }

    sipNoMethod(sipParseErr, sipName_QAccel, sipName_activated, NULL);

    return -1;
}

extern "C" {static int QAccel_emit_activated(sipSimpleWrapper *, PyObject *);}
static int QAccel_emit_activated(sipSimpleWrapper *sw,PyObject *sipArgs)
{
    sipQAccel *ptr = reinterpret_cast<sipQAccel *>(sipGetComplexCppPtr(sw));

    return (ptr ? ptr->sipEmit_activated(sipArgs) : -1);
}

int sipQAccel::sipEmit_activatedAmbiguously(PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "i", &a0))
        {
            emit activatedAmbiguously(a0);

            return 0;
        }
    }

    sipNoMethod(sipParseErr, sipName_QAccel, sipName_activatedAmbiguously, NULL);

    return -1;
}

extern "C" {static int QAccel_emit_activatedAmbiguously(sipSimpleWrapper *, PyObject *);}
static int QAccel_emit_activatedAmbiguously(sipSimpleWrapper *sw,PyObject *sipArgs)
{
    sipQAccel *ptr = reinterpret_cast<sipQAccel *>(sipGetComplexCppPtr(sw));

    return (ptr ? ptr->sipEmit_activatedAmbiguously(sipArgs) : -1);
}

static pyqt3QtSignal signals_QAccel[] = {
    {sipName_destroyed, QAccel_emit_destroyed},
    {sipName_activated, QAccel_emit_activated},
    {sipName_activatedAmbiguously, QAccel_emit_activatedAmbiguously},
    {NULL, NULL}
};


extern "C" {static PyObject *meth_QAccel_timerEvent(PyObject *, PyObject *);}
static PyObject *meth_QAccel_timerEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QTimerEvent * a0;
        sipQAccel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QAccel, &sipCpp, sipType_QTimerEvent, &a0))
        {
            sipCpp->sipProtectVirt_timerEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAccel, sipName_timerEvent, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QAccel_childEvent(PyObject *, PyObject *);}
static PyObject *meth_QAccel_childEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QChildEvent * a0;
        sipQAccel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QAccel, &sipCpp, sipType_QChildEvent, &a0))
        {
            sipCpp->sipProtectVirt_childEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAccel, sipName_childEvent, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QAccel_customEvent(PyObject *, PyObject *);}
static PyObject *meth_QAccel_customEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QCustomEvent * a0;
        sipQAccel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QAccel, &sipCpp, sipType_QCustomEvent, &a0))
        {
            sipCpp->sipProtectVirt_customEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAccel, sipName_customEvent, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QAccel_isEnabled(PyObject *, PyObject *);}
static PyObject *meth_QAccel_isEnabled(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QAccel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAccel, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isEnabled();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAccel, sipName_isEnabled, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QAccel_setEnabled(PyObject *, PyObject *);}
static PyObject *meth_QAccel_setEnabled(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        QAccel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QAccel, &sipCpp, &a0))
        {
            sipCpp->setEnabled(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAccel, sipName_setEnabled, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QAccel_count(PyObject *, PyObject *);}
static PyObject *meth_QAccel_count(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QAccel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAccel, &sipCpp))
        {
            uint sipRes;

            sipRes = sipCpp->count();

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAccel, sipName_count, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QAccel_insertItem(PyObject *, PyObject *);}
static PyObject *meth_QAccel_insertItem(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QKeySequence * a0;
        int a0State = 0;
        int a1 = -1;
        QAccel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1|i", &sipSelf, sipType_QAccel, &sipCpp, sipType_QKeySequence, &a0, &a0State, &a1))
        {
            int sipRes;

            sipRes = sipCpp->insertItem(*a0,a1);
            sipReleaseType(const_cast<QKeySequence *>(a0),sipType_QKeySequence,a0State);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAccel, sipName_insertItem, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QAccel_removeItem(PyObject *, PyObject *);}
static PyObject *meth_QAccel_removeItem(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QAccel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QAccel, &sipCpp, &a0))
        {
            sipCpp->removeItem(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAccel, sipName_removeItem, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QAccel_clear(PyObject *, PyObject *);}
static PyObject *meth_QAccel_clear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QAccel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAccel, &sipCpp))
        {
            sipCpp->clear();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAccel, sipName_clear, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QAccel_key(PyObject *, PyObject *);}
static PyObject *meth_QAccel_key(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QAccel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QAccel, &sipCpp, &a0))
        {
            QKeySequence *sipRes;

            sipRes = new QKeySequence(sipCpp->key(a0));

            return sipConvertFromNewType(sipRes,sipType_QKeySequence,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAccel, sipName_key, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QAccel_findKey(PyObject *, PyObject *);}
static PyObject *meth_QAccel_findKey(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QKeySequence * a0;
        int a0State = 0;
        QAccel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QAccel, &sipCpp, sipType_QKeySequence, &a0, &a0State))
        {
            int sipRes;

            sipRes = sipCpp->findKey(*a0);
            sipReleaseType(const_cast<QKeySequence *>(a0),sipType_QKeySequence,a0State);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAccel, sipName_findKey, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QAccel_isItemEnabled(PyObject *, PyObject *);}
static PyObject *meth_QAccel_isItemEnabled(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QAccel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QAccel, &sipCpp, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->isItemEnabled(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAccel, sipName_isItemEnabled, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QAccel_setItemEnabled(PyObject *, PyObject *);}
static PyObject *meth_QAccel_setItemEnabled(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        bool a1;
        QAccel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bib", &sipSelf, sipType_QAccel, &sipCpp, &a0, &a1))
        {
            sipCpp->setItemEnabled(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAccel, sipName_setItemEnabled, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QAccel_connectItem(PyObject *, PyObject *);}
static PyObject *meth_QAccel_connectItem(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QObject * a1;
        char * a2;
        QAccel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiqS", &sipSelf, sipType_QAccel, &sipCpp, &a0, "(int)", &a1, &a2, &a2))
        {
            bool sipRes;

            sipRes = sipCpp->connectItem(a0,a1,a2);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        int a0;
        QObject * a1;
        char * a2;
        QAccel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Biy", &sipSelf, sipType_QAccel, &sipCpp, &a0, "(int)", &a1, &a2))
        {
            bool sipRes;

            sipRes = sipCpp->connectItem(a0,a1,a2);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAccel, sipName_connectItem, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QAccel_disconnectItem(PyObject *, PyObject *);}
static PyObject *meth_QAccel_disconnectItem(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QObject * a1;
        char * a2;
        QAccel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiQS", &sipSelf, sipType_QAccel, &sipCpp, &a0, "(int)", &a1, &a2, &a2))
        {
            bool sipRes;

            sipRes = sipCpp->disconnectItem(a0,a1,a2);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        int a0;
        QObject * a1;
        char * a2;
        QAccel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiY", &sipSelf, sipType_QAccel, &sipCpp, &a0, "(int)", &a1, &a2))
        {
            bool sipRes;

            sipRes = sipCpp->disconnectItem(a0,a1,a2);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAccel, sipName_disconnectItem, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QAccel_repairEventFilter(PyObject *, PyObject *);}
static PyObject *meth_QAccel_repairEventFilter(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QAccel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAccel, &sipCpp))
        {
            sipCpp->repairEventFilter();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAccel, sipName_repairEventFilter, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QAccel_setWhatsThis(PyObject *, PyObject *);}
static PyObject *meth_QAccel_setWhatsThis(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const QString * a1;
        int a1State = 0;
        QAccel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiJ1", &sipSelf, sipType_QAccel, &sipCpp, &a0, sipType_QString, &a1, &a1State))
        {
            sipCpp->setWhatsThis(a0,*a1);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAccel, sipName_setWhatsThis, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QAccel_whatsThis(PyObject *, PyObject *);}
static PyObject *meth_QAccel_whatsThis(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QAccel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QAccel, &sipCpp, &a0))
        {
            QString *sipRes;

            sipRes = new QString(sipCpp->whatsThis(a0));

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAccel, sipName_whatsThis, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QAccel_setIgnoreWhatsThis(PyObject *, PyObject *);}
static PyObject *meth_QAccel_setIgnoreWhatsThis(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        QAccel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QAccel, &sipCpp, &a0))
        {
            sipCpp->setIgnoreWhatsThis(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAccel, sipName_setIgnoreWhatsThis, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QAccel_ignoreWhatsThis(PyObject *, PyObject *);}
static PyObject *meth_QAccel_ignoreWhatsThis(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QAccel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAccel, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->ignoreWhatsThis();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAccel, sipName_ignoreWhatsThis, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QAccel_shortcutKey(PyObject *, PyObject *);}
static PyObject *meth_QAccel_shortcutKey(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QString, &a0, &a0State))
        {
            QKeySequence *sipRes;

            sipRes = new QKeySequence(QAccel::shortcutKey(*a0));
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QKeySequence,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAccel, sipName_shortcutKey, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QAccel_keyToString(PyObject *, PyObject *);}
static PyObject *meth_QAccel_keyToString(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QKeySequence * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QKeySequence, &a0, &a0State))
        {
            QString *sipRes;

            sipRes = new QString(QAccel::keyToString(*a0));
            sipReleaseType(a0,sipType_QKeySequence,a0State);

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAccel, sipName_keyToString, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QAccel_stringToKey(PyObject *, PyObject *);}
static PyObject *meth_QAccel_stringToKey(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QString, &a0, &a0State))
        {
            QKeySequence *sipRes;

            sipRes = new QKeySequence(QAccel::stringToKey(*a0));
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QKeySequence,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAccel, sipName_stringToKey, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QAccel_eventFilter(PyObject *, PyObject *);}
static PyObject *meth_QAccel_eventFilter(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QObject * a0;
        QEvent * a1;
        sipQAccel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8J8", &sipSelf, sipType_QAccel, &sipCpp, sipType_QObject, &a0, sipType_QEvent, &a1))
        {
            bool sipRes;

            sipRes = sipCpp->sipProtectVirt_eventFilter(sipSelfWasArg,a0,a1);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAccel, sipName_eventFilter, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QAccel_metaObject(PyObject *, PyObject *);}
static PyObject *meth_QAccel_metaObject(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QAccel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAccel, &sipCpp))
        {
            QMetaObject *sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QAccel::metaObject() : sipCpp->metaObject());

            return sipConvertFromType(sipRes,sipType_QMetaObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAccel, sipName_metaObject, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QAccel(void *, const sipTypeDef *);}
static void *cast_QAccel(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QAccel)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QAccel *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QAccel(void *, int);}
static void release_QAccel(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQAccel *>(sipCppV);
    else
        delete reinterpret_cast<QAccel *>(sipCppV);
}


extern "C" {static void dealloc_QAccel(sipSimpleWrapper *);}
static void dealloc_QAccel(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQAccel *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QAccel(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QAccel(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QAccel(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQAccel *sipCpp = 0;

    {
        QWidget * a0;
        char * a1 = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "JH|s", sipType_QWidget, &a0, sipOwner, &a1))
        {
            sipCpp = new sipQAccel(a0,a1);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        QWidget * a0;
        QObject * a1;
        char * a2 = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J8JH|s", sipType_QWidget, &a0, sipType_QObject, &a1, sipOwner, &a2))
        {
            sipCpp = new sipQAccel(a0,a1,a2);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QAccel[] = {{202, 255, 1}};


static PyMethodDef methods_QAccel[] = {
    {SIP_MLNAME_CAST(sipName_childEvent), meth_QAccel_childEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_clear), meth_QAccel_clear, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_connectItem), meth_QAccel_connectItem, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_count), meth_QAccel_count, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_customEvent), meth_QAccel_customEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_disconnectItem), meth_QAccel_disconnectItem, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_eventFilter), meth_QAccel_eventFilter, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_findKey), meth_QAccel_findKey, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_ignoreWhatsThis), meth_QAccel_ignoreWhatsThis, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_insertItem), meth_QAccel_insertItem, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isEnabled), meth_QAccel_isEnabled, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isItemEnabled), meth_QAccel_isItemEnabled, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_key), meth_QAccel_key, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_keyToString), meth_QAccel_keyToString, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_metaObject), meth_QAccel_metaObject, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_removeItem), meth_QAccel_removeItem, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_repairEventFilter), meth_QAccel_repairEventFilter, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setEnabled), meth_QAccel_setEnabled, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setIgnoreWhatsThis), meth_QAccel_setIgnoreWhatsThis, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setItemEnabled), meth_QAccel_setItemEnabled, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setWhatsThis), meth_QAccel_setWhatsThis, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_shortcutKey), meth_QAccel_shortcutKey, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_stringToKey), meth_QAccel_stringToKey, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_timerEvent), meth_QAccel_timerEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_whatsThis), meth_QAccel_whatsThis, METH_VARARGS, NULL}
};


pyqt3ClassTypeDef sipTypeDef_qt_QAccel = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QAccel,
        {0}
    },
    {
        sipNameNr_QAccel,
        {0, 0, 1},
        25, methods_QAccel,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QAccel,
    0,
    init_QAccel,
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
    dealloc_QAccel,
    0,
    0,
    0,
    release_QAccel,
    cast_QAccel,
    0,
    0,
    0
},
    signals_QAccel
};
