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

#line 38 "/usr/share/sip/qt/qassistantclient.sip"
#include <qassistantclient.h>
#line 31 "sipqtQAssistantClient.cc"

#line 449 "/usr/share/sip/qt/qstring.sip"
#include <qstring.h>
#line 35 "sipqtQAssistantClient.cc"
#line 66 "/usr/share/sip/qt/qobject.sip"
#include <qobject.h>
#include <qapplication.h>
#line 39 "sipqtQAssistantClient.cc"
#line 53 "/usr/share/sip/qt/qmetaobject.sip"
#include <qmetaobject.h>
#line 42 "sipqtQAssistantClient.cc"
#line 57 "/usr/share/sip/qt/qstringlist.sip"
#include <qstringlist.h>
#line 45 "sipqtQAssistantClient.cc"
#line 1163 "/usr/share/sip/qt/qevent.sip"
#include <qevent.h>
#line 48 "sipqtQAssistantClient.cc"
#line 1138 "/usr/share/sip/qt/qevent.sip"
#include <qevent.h>
#line 51 "sipqtQAssistantClient.cc"
#line 582 "/usr/share/sip/qt/qevent.sip"
#include <qevent.h>
#line 54 "sipqtQAssistantClient.cc"
#line 201 "/usr/share/sip/qt/qvariant.sip"
#include <qvariant.h>
#line 57 "sipqtQAssistantClient.cc"
#line 37 "/usr/share/sip/qt/qobjectlist.sip"
#include <qobjectlist.h>
#line 60 "sipqtQAssistantClient.cc"
#line 324 "/usr/share/sip/qt/qevent.sip"
#include <qevent.h>
#line 63 "sipqtQAssistantClient.cc"


class sipQAssistantClient : public QAssistantClient
{
public:
    sipQAssistantClient(const QString&,QObject *,const char *);
    virtual ~sipQAssistantClient();

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
    int sipEmit_assistantOpened(PyObject *);
    int sipEmit_assistantClosed(PyObject *);
    int sipEmit_error(PyObject *);

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    QMetaObject * metaObject() const;
    void openAssistant();
    void closeAssistant();
    void showPage(const QString&);
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
    sipQAssistantClient(const sipQAssistantClient &);
    sipQAssistantClient &operator = (const sipQAssistantClient &);

    char sipPyMethods[14];
};

sipQAssistantClient::sipQAssistantClient(const QString& a0,QObject *a1,const char *a2): QAssistantClient(a0,a1,a2), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQAssistantClient::~sipQAssistantClient()
{
    sipCommonDtor(sipPySelf);
}

QMetaObject * sipQAssistantClient::metaObject() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_metaObject);

    if (!meth)
        return QAssistantClient::metaObject();

    extern QMetaObject * sipVH_qt_179(sip_gilstate_t,PyObject *);

    return sipVH_qt_179(sipGILState,meth);
}

void sipQAssistantClient::openAssistant()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_openAssistant);

    if (!meth)
    {
        QAssistantClient::openAssistant();
        return;
    }

    extern void sipVH_qt_2(sip_gilstate_t,PyObject *);

    sipVH_qt_2(sipGILState,meth);
}

void sipQAssistantClient::closeAssistant()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_closeAssistant);

    if (!meth)
    {
        QAssistantClient::closeAssistant();
        return;
    }

    extern void sipVH_qt_2(sip_gilstate_t,PyObject *);

    sipVH_qt_2(sipGILState,meth);
}

void sipQAssistantClient::showPage(const QString& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_showPage);

    if (!meth)
    {
        QAssistantClient::showPage(a0);
        return;
    }

    extern void sipVH_qt_37(sip_gilstate_t,PyObject *,const QString&);

    sipVH_qt_37(sipGILState,meth,a0);
}

bool sipQAssistantClient::event(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_event);

    if (!meth)
        return QObject::event(a0);

    extern bool sipVH_qt_178(sip_gilstate_t,PyObject *,QEvent *);

    return sipVH_qt_178(sipGILState,meth,a0);
}

bool sipQAssistantClient::eventFilter(QObject *a0,QEvent *a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!meth)
        return QObject::eventFilter(a0,a1);

    extern bool sipVH_qt_177(sip_gilstate_t,PyObject *,QObject *,QEvent *);

    return sipVH_qt_177(sipGILState,meth,a0,a1);
}

void sipQAssistantClient::setName(const char *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_setName);

    if (!meth)
    {
        QObject::setName(a0);
        return;
    }

    extern void sipVH_qt_176(sip_gilstate_t,PyObject *,const char *);

    sipVH_qt_176(sipGILState,meth,a0);
}

void sipQAssistantClient::insertChild(QObject *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipName_insertChild);

    if (!meth)
    {
        QObject::insertChild(a0);
        return;
    }

    extern void sipVH_qt_175(sip_gilstate_t,PyObject *,QObject *);

    sipVH_qt_175(sipGILState,meth,a0);
}

void sipQAssistantClient::removeChild(QObject *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,NULL,sipName_removeChild);

    if (!meth)
    {
        QObject::removeChild(a0);
        return;
    }

    extern void sipVH_qt_175(sip_gilstate_t,PyObject *,QObject *);

    sipVH_qt_175(sipGILState,meth,a0);
}

bool sipQAssistantClient::setProperty(const char *a0,const QVariant& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[9],sipPySelf,NULL,sipName_setProperty);

    if (!meth)
        return QObject::setProperty(a0,a1);

    extern bool sipVH_qt_174(sip_gilstate_t,PyObject *,const char *,const QVariant&);

    return sipVH_qt_174(sipGILState,meth,a0,a1);
}

QVariant sipQAssistantClient::property(const char *a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[10]),sipPySelf,NULL,sipName_property);

    if (!meth)
        return QObject::property(a0);

    extern QVariant sipVH_qt_173(sip_gilstate_t,PyObject *,const char *);

    return sipVH_qt_173(sipGILState,meth,a0);
}

void sipQAssistantClient::timerEvent(QTimerEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[11],sipPySelf,NULL,sipName_timerEvent);

    if (!meth)
    {
        QObject::timerEvent(a0);
        return;
    }

    extern void sipVH_qt_172(sip_gilstate_t,PyObject *,QTimerEvent *);

    sipVH_qt_172(sipGILState,meth,a0);
}

void sipQAssistantClient::childEvent(QChildEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[12],sipPySelf,NULL,sipName_childEvent);

    if (!meth)
    {
        QObject::childEvent(a0);
        return;
    }

    extern void sipVH_qt_171(sip_gilstate_t,PyObject *,QChildEvent *);

    sipVH_qt_171(sipGILState,meth,a0);
}

void sipQAssistantClient::customEvent(QCustomEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[13],sipPySelf,NULL,sipName_customEvent);

    if (!meth)
    {
        QObject::customEvent(a0);
        return;
    }

    extern void sipVH_qt_170(sip_gilstate_t,PyObject *,QCustomEvent *);

    sipVH_qt_170(sipGILState,meth,a0);
}

void sipQAssistantClient::sipProtectVirt_timerEvent(bool sipSelfWasArg,QTimerEvent *a0)
{
    (sipSelfWasArg ? QObject::timerEvent(a0) : timerEvent(a0));
}

void sipQAssistantClient::sipProtectVirt_childEvent(bool sipSelfWasArg,QChildEvent *a0)
{
    (sipSelfWasArg ? QObject::childEvent(a0) : childEvent(a0));
}

void sipQAssistantClient::sipProtectVirt_customEvent(bool sipSelfWasArg,QCustomEvent *a0)
{
    (sipSelfWasArg ? QObject::customEvent(a0) : customEvent(a0));
}

int sipQAssistantClient::sipEmit_destroyed(PyObject *sipArgs)
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

    sipNoMethod(sipParseErr, sipName_QAssistantClient, sipName_destroyed, NULL);

    return -1;
}

extern "C" {static int QAssistantClient_emit_destroyed(sipSimpleWrapper *, PyObject *);}
static int QAssistantClient_emit_destroyed(sipSimpleWrapper *sw,PyObject *sipArgs)
{
    sipQAssistantClient *ptr = reinterpret_cast<sipQAssistantClient *>(sipGetComplexCppPtr(sw));

    return (ptr ? ptr->sipEmit_destroyed(sipArgs) : -1);
}

int sipQAssistantClient::sipEmit_assistantOpened(PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            emit assistantOpened();

            return 0;
        }
    }

    sipNoMethod(sipParseErr, sipName_QAssistantClient, sipName_assistantOpened, NULL);

    return -1;
}

extern "C" {static int QAssistantClient_emit_assistantOpened(sipSimpleWrapper *, PyObject *);}
static int QAssistantClient_emit_assistantOpened(sipSimpleWrapper *sw,PyObject *sipArgs)
{
    sipQAssistantClient *ptr = reinterpret_cast<sipQAssistantClient *>(sipGetComplexCppPtr(sw));

    return (ptr ? ptr->sipEmit_assistantOpened(sipArgs) : -1);
}

int sipQAssistantClient::sipEmit_assistantClosed(PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            emit assistantClosed();

            return 0;
        }
    }

    sipNoMethod(sipParseErr, sipName_QAssistantClient, sipName_assistantClosed, NULL);

    return -1;
}

extern "C" {static int QAssistantClient_emit_assistantClosed(sipSimpleWrapper *, PyObject *);}
static int QAssistantClient_emit_assistantClosed(sipSimpleWrapper *sw,PyObject *sipArgs)
{
    sipQAssistantClient *ptr = reinterpret_cast<sipQAssistantClient *>(sipGetComplexCppPtr(sw));

    return (ptr ? ptr->sipEmit_assistantClosed(sipArgs) : -1);
}

int sipQAssistantClient::sipEmit_error(PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QString, &a0, &a0State))
        {
            emit error(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return 0;
        }
    }

    sipNoMethod(sipParseErr, sipName_QAssistantClient, sipName_error, NULL);

    return -1;
}

extern "C" {static int QAssistantClient_emit_error(sipSimpleWrapper *, PyObject *);}
static int QAssistantClient_emit_error(sipSimpleWrapper *sw,PyObject *sipArgs)
{
    sipQAssistantClient *ptr = reinterpret_cast<sipQAssistantClient *>(sipGetComplexCppPtr(sw));

    return (ptr ? ptr->sipEmit_error(sipArgs) : -1);
}

static pyqt3QtSignal signals_QAssistantClient[] = {
    {sipName_destroyed, QAssistantClient_emit_destroyed},
    {sipName_assistantOpened, QAssistantClient_emit_assistantOpened},
    {sipName_assistantClosed, QAssistantClient_emit_assistantClosed},
    {sipName_error, QAssistantClient_emit_error},
    {NULL, NULL}
};


extern "C" {static PyObject *meth_QAssistantClient_timerEvent(PyObject *, PyObject *);}
static PyObject *meth_QAssistantClient_timerEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QTimerEvent * a0;
        sipQAssistantClient *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QAssistantClient, &sipCpp, sipType_QTimerEvent, &a0))
        {
            sipCpp->sipProtectVirt_timerEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAssistantClient, sipName_timerEvent, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QAssistantClient_childEvent(PyObject *, PyObject *);}
static PyObject *meth_QAssistantClient_childEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QChildEvent * a0;
        sipQAssistantClient *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QAssistantClient, &sipCpp, sipType_QChildEvent, &a0))
        {
            sipCpp->sipProtectVirt_childEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAssistantClient, sipName_childEvent, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QAssistantClient_customEvent(PyObject *, PyObject *);}
static PyObject *meth_QAssistantClient_customEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QCustomEvent * a0;
        sipQAssistantClient *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QAssistantClient, &sipCpp, sipType_QCustomEvent, &a0))
        {
            sipCpp->sipProtectVirt_customEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAssistantClient, sipName_customEvent, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QAssistantClient_isOpen(PyObject *, PyObject *);}
static PyObject *meth_QAssistantClient_isOpen(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QAssistantClient *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAssistantClient, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isOpen();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAssistantClient, sipName_isOpen, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QAssistantClient_setArguments(PyObject *, PyObject *);}
static PyObject *meth_QAssistantClient_setArguments(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QStringList * a0;
        QAssistantClient *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QAssistantClient, &sipCpp, sipType_QStringList, &a0))
        {
            sipCpp->setArguments(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAssistantClient, sipName_setArguments, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QAssistantClient_openAssistant(PyObject *, PyObject *);}
static PyObject *meth_QAssistantClient_openAssistant(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QAssistantClient *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAssistantClient, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QAssistantClient::openAssistant() : sipCpp->openAssistant());
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAssistantClient, sipName_openAssistant, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QAssistantClient_closeAssistant(PyObject *, PyObject *);}
static PyObject *meth_QAssistantClient_closeAssistant(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QAssistantClient *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAssistantClient, &sipCpp))
        {
            (sipSelfWasArg ? sipCpp->QAssistantClient::closeAssistant() : sipCpp->closeAssistant());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAssistantClient, sipName_closeAssistant, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QAssistantClient_showPage(PyObject *, PyObject *);}
static PyObject *meth_QAssistantClient_showPage(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QString * a0;
        int a0State = 0;
        QAssistantClient *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QAssistantClient, &sipCpp, sipType_QString, &a0, &a0State))
        {
            (sipSelfWasArg ? sipCpp->QAssistantClient::showPage(*a0) : sipCpp->showPage(*a0));
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAssistantClient, sipName_showPage, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QAssistantClient_metaObject(PyObject *, PyObject *);}
static PyObject *meth_QAssistantClient_metaObject(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QAssistantClient *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAssistantClient, &sipCpp))
        {
            QMetaObject *sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QAssistantClient::metaObject() : sipCpp->metaObject());

            return sipConvertFromType(sipRes,sipType_QMetaObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAssistantClient, sipName_metaObject, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QAssistantClient(void *, const sipTypeDef *);}
static void *cast_QAssistantClient(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QAssistantClient)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QAssistantClient *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QAssistantClient(void *, int);}
static void release_QAssistantClient(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQAssistantClient *>(sipCppV);
    else
        delete reinterpret_cast<QAssistantClient *>(sipCppV);
}


extern "C" {static void dealloc_QAssistantClient(sipSimpleWrapper *);}
static void dealloc_QAssistantClient(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQAssistantClient *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QAssistantClient(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QAssistantClient(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QAssistantClient(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQAssistantClient *sipCpp = 0;

    {
        const QString * a0;
        int a0State = 0;
        QObject * a1 = 0;
        const char * a2 = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1|JHs", sipType_QString, &a0, &a0State, sipType_QObject, &a1, sipOwner, &a2))
        {
            sipCpp = new sipQAssistantClient(*a0,a1,a2);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QAssistantClient[] = {{202, 255, 1}};


static PyMethodDef methods_QAssistantClient[] = {
    {SIP_MLNAME_CAST(sipName_childEvent), meth_QAssistantClient_childEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_closeAssistant), meth_QAssistantClient_closeAssistant, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_customEvent), meth_QAssistantClient_customEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isOpen), meth_QAssistantClient_isOpen, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_metaObject), meth_QAssistantClient_metaObject, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_openAssistant), meth_QAssistantClient_openAssistant, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setArguments), meth_QAssistantClient_setArguments, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_showPage), meth_QAssistantClient_showPage, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_timerEvent), meth_QAssistantClient_timerEvent, METH_VARARGS, NULL}
};


pyqt3ClassTypeDef sipTypeDef_qt_QAssistantClient = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QAssistantClient,
        {0}
    },
    {
        sipNameNr_QAssistantClient,
        {0, 0, 1},
        9, methods_QAssistantClient,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QAssistantClient,
    0,
    init_QAssistantClient,
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
    dealloc_QAssistantClient,
    0,
    0,
    0,
    release_QAssistantClient,
    cast_QAssistantClient,
    0,
    0,
    0
},
    signals_QAssistantClient
};
