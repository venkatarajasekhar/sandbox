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

#line 37 "/usr/share/sip/qt/qobjectcleanuphandler.sip"
#include <qobjectcleanuphandler.h>
#line 31 "sipqtQObjectCleanupHandler.cc"

#line 53 "/usr/share/sip/qt/qmetaobject.sip"
#include <qmetaobject.h>
#line 35 "sipqtQObjectCleanupHandler.cc"
#line 66 "/usr/share/sip/qt/qobject.sip"
#include <qobject.h>
#include <qapplication.h>
#line 39 "sipqtQObjectCleanupHandler.cc"
#line 1163 "/usr/share/sip/qt/qevent.sip"
#include <qevent.h>
#line 42 "sipqtQObjectCleanupHandler.cc"
#line 1138 "/usr/share/sip/qt/qevent.sip"
#include <qevent.h>
#line 45 "sipqtQObjectCleanupHandler.cc"
#line 582 "/usr/share/sip/qt/qevent.sip"
#include <qevent.h>
#line 48 "sipqtQObjectCleanupHandler.cc"
#line 201 "/usr/share/sip/qt/qvariant.sip"
#include <qvariant.h>
#line 51 "sipqtQObjectCleanupHandler.cc"
#line 37 "/usr/share/sip/qt/qobjectlist.sip"
#include <qobjectlist.h>
#line 54 "sipqtQObjectCleanupHandler.cc"
#line 324 "/usr/share/sip/qt/qevent.sip"
#include <qevent.h>
#line 57 "sipqtQObjectCleanupHandler.cc"
#line 449 "/usr/share/sip/qt/qstring.sip"
#include <qstring.h>
#line 60 "sipqtQObjectCleanupHandler.cc"


class sipQObjectCleanupHandler : public QObjectCleanupHandler
{
public:
    sipQObjectCleanupHandler();
    virtual ~sipQObjectCleanupHandler();

    /*
     * There is a public method for every protected method visible from
     * this class.
     */
    void sipProtectVirt_timerEvent(bool,QTimerEvent *);
    void sipProtectVirt_childEvent(bool,QChildEvent *);
    void sipProtectVirt_customEvent(bool,QCustomEvent *);

    /*
     * There is a public method for every Qt signal that can be emitted
     * by this object.  This function is called by Python to emit the
     * signal.
     */
    int sipEmit_destroyed(PyObject *);

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
    sipQObjectCleanupHandler(const sipQObjectCleanupHandler &);
    sipQObjectCleanupHandler &operator = (const sipQObjectCleanupHandler &);

    char sipPyMethods[11];
};

sipQObjectCleanupHandler::sipQObjectCleanupHandler(): QObjectCleanupHandler(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQObjectCleanupHandler::~sipQObjectCleanupHandler()
{
    sipCommonDtor(sipPySelf);
}

QMetaObject * sipQObjectCleanupHandler::metaObject() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_metaObject);

    if (!meth)
        return QObjectCleanupHandler::metaObject();

    extern QMetaObject * sipVH_qt_179(sip_gilstate_t,PyObject *);

    return sipVH_qt_179(sipGILState,meth);
}

bool sipQObjectCleanupHandler::event(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_event);

    if (!meth)
        return QObject::event(a0);

    extern bool sipVH_qt_178(sip_gilstate_t,PyObject *,QEvent *);

    return sipVH_qt_178(sipGILState,meth,a0);
}

bool sipQObjectCleanupHandler::eventFilter(QObject *a0,QEvent *a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_eventFilter);

    if (!meth)
        return QObject::eventFilter(a0,a1);

    extern bool sipVH_qt_177(sip_gilstate_t,PyObject *,QObject *,QEvent *);

    return sipVH_qt_177(sipGILState,meth,a0,a1);
}

void sipQObjectCleanupHandler::setName(const char *a0)
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

void sipQObjectCleanupHandler::insertChild(QObject *a0)
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

void sipQObjectCleanupHandler::removeChild(QObject *a0)
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

bool sipQObjectCleanupHandler::setProperty(const char *a0,const QVariant& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_setProperty);

    if (!meth)
        return QObject::setProperty(a0,a1);

    extern bool sipVH_qt_174(sip_gilstate_t,PyObject *,const char *,const QVariant&);

    return sipVH_qt_174(sipGILState,meth,a0,a1);
}

QVariant sipQObjectCleanupHandler::property(const char *a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[7]),sipPySelf,NULL,sipName_property);

    if (!meth)
        return QObject::property(a0);

    extern QVariant sipVH_qt_173(sip_gilstate_t,PyObject *,const char *);

    return sipVH_qt_173(sipGILState,meth,a0);
}

void sipQObjectCleanupHandler::timerEvent(QTimerEvent *a0)
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

void sipQObjectCleanupHandler::childEvent(QChildEvent *a0)
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

void sipQObjectCleanupHandler::customEvent(QCustomEvent *a0)
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

void sipQObjectCleanupHandler::sipProtectVirt_timerEvent(bool sipSelfWasArg,QTimerEvent *a0)
{
    (sipSelfWasArg ? QObject::timerEvent(a0) : timerEvent(a0));
}

void sipQObjectCleanupHandler::sipProtectVirt_childEvent(bool sipSelfWasArg,QChildEvent *a0)
{
    (sipSelfWasArg ? QObject::childEvent(a0) : childEvent(a0));
}

void sipQObjectCleanupHandler::sipProtectVirt_customEvent(bool sipSelfWasArg,QCustomEvent *a0)
{
    (sipSelfWasArg ? QObject::customEvent(a0) : customEvent(a0));
}

int sipQObjectCleanupHandler::sipEmit_destroyed(PyObject *sipArgs)
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

    sipNoMethod(sipParseErr, sipName_QObjectCleanupHandler, sipName_destroyed, NULL);

    return -1;
}

extern "C" {static int QObjectCleanupHandler_emit_destroyed(sipSimpleWrapper *, PyObject *);}
static int QObjectCleanupHandler_emit_destroyed(sipSimpleWrapper *sw,PyObject *sipArgs)
{
    sipQObjectCleanupHandler *ptr = reinterpret_cast<sipQObjectCleanupHandler *>(sipGetComplexCppPtr(sw));

    return (ptr ? ptr->sipEmit_destroyed(sipArgs) : -1);
}

static pyqt3QtSignal signals_QObjectCleanupHandler[] = {
    {sipName_destroyed, QObjectCleanupHandler_emit_destroyed},
    {NULL, NULL}
};


extern "C" {static PyObject *meth_QObjectCleanupHandler_timerEvent(PyObject *, PyObject *);}
static PyObject *meth_QObjectCleanupHandler_timerEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QTimerEvent * a0;
        sipQObjectCleanupHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QObjectCleanupHandler, &sipCpp, sipType_QTimerEvent, &a0))
        {
            sipCpp->sipProtectVirt_timerEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QObjectCleanupHandler, sipName_timerEvent, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QObjectCleanupHandler_childEvent(PyObject *, PyObject *);}
static PyObject *meth_QObjectCleanupHandler_childEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QChildEvent * a0;
        sipQObjectCleanupHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QObjectCleanupHandler, &sipCpp, sipType_QChildEvent, &a0))
        {
            sipCpp->sipProtectVirt_childEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QObjectCleanupHandler, sipName_childEvent, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QObjectCleanupHandler_customEvent(PyObject *, PyObject *);}
static PyObject *meth_QObjectCleanupHandler_customEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QCustomEvent * a0;
        sipQObjectCleanupHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QObjectCleanupHandler, &sipCpp, sipType_QCustomEvent, &a0))
        {
            sipCpp->sipProtectVirt_customEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QObjectCleanupHandler, sipName_customEvent, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QObjectCleanupHandler_add(PyObject *, PyObject *);}
static PyObject *meth_QObjectCleanupHandler_add(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QObject * a0;
        QObjectCleanupHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QObjectCleanupHandler, &sipCpp, sipType_QObject, &a0))
        {
            QObject *sipRes;

            sipRes = sipCpp->add(a0);

            return sipConvertFromType(sipRes,sipType_QObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QObjectCleanupHandler, sipName_add, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QObjectCleanupHandler_remove(PyObject *, PyObject *);}
static PyObject *meth_QObjectCleanupHandler_remove(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QObject * a0;
        QObjectCleanupHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QObjectCleanupHandler, &sipCpp, sipType_QObject, &a0))
        {
            sipCpp->remove(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QObjectCleanupHandler, sipName_remove, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QObjectCleanupHandler_isEmpty(PyObject *, PyObject *);}
static PyObject *meth_QObjectCleanupHandler_isEmpty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QObjectCleanupHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QObjectCleanupHandler, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isEmpty();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QObjectCleanupHandler, sipName_isEmpty, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QObjectCleanupHandler_clear(PyObject *, PyObject *);}
static PyObject *meth_QObjectCleanupHandler_clear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QObjectCleanupHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QObjectCleanupHandler, &sipCpp))
        {
            sipCpp->clear();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QObjectCleanupHandler, sipName_clear, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QObjectCleanupHandler_metaObject(PyObject *, PyObject *);}
static PyObject *meth_QObjectCleanupHandler_metaObject(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QObjectCleanupHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QObjectCleanupHandler, &sipCpp))
        {
            QMetaObject *sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QObjectCleanupHandler::metaObject() : sipCpp->metaObject());

            return sipConvertFromType(sipRes,sipType_QMetaObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QObjectCleanupHandler, sipName_metaObject, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QObjectCleanupHandler(void *, const sipTypeDef *);}
static void *cast_QObjectCleanupHandler(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QObjectCleanupHandler)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QObjectCleanupHandler *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QObjectCleanupHandler(void *, int);}
static void release_QObjectCleanupHandler(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQObjectCleanupHandler *>(sipCppV);
    else
        delete reinterpret_cast<QObjectCleanupHandler *>(sipCppV);
}


extern "C" {static void dealloc_QObjectCleanupHandler(sipSimpleWrapper *);}
static void dealloc_QObjectCleanupHandler(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQObjectCleanupHandler *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QObjectCleanupHandler(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QObjectCleanupHandler(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QObjectCleanupHandler(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQObjectCleanupHandler *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQObjectCleanupHandler();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QObjectCleanupHandler[] = {{202, 255, 1}};


static PyMethodDef methods_QObjectCleanupHandler[] = {
    {SIP_MLNAME_CAST(sipName_add), meth_QObjectCleanupHandler_add, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_childEvent), meth_QObjectCleanupHandler_childEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_clear), meth_QObjectCleanupHandler_clear, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_customEvent), meth_QObjectCleanupHandler_customEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isEmpty), meth_QObjectCleanupHandler_isEmpty, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_metaObject), meth_QObjectCleanupHandler_metaObject, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_remove), meth_QObjectCleanupHandler_remove, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_timerEvent), meth_QObjectCleanupHandler_timerEvent, METH_VARARGS, NULL}
};


pyqt3ClassTypeDef sipTypeDef_qt_QObjectCleanupHandler = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QObjectCleanupHandler,
        {0}
    },
    {
        sipNameNr_QObjectCleanupHandler,
        {0, 0, 1},
        8, methods_QObjectCleanupHandler,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QObjectCleanupHandler,
    0,
    init_QObjectCleanupHandler,
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
    dealloc_QObjectCleanupHandler,
    0,
    0,
    0,
    release_QObjectCleanupHandler,
    cast_QObjectCleanupHandler,
    0,
    0,
    0
},
    signals_QObjectCleanupHandler
};