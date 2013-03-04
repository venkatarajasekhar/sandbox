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

#line 110 "/usr/share/sip/qt/qdragobject.sip"
#include <qdragobject.h>
#line 31 "sipqtQDragObject.cc"

#line 63 "/usr/share/sip/qt/qwidget.sip"
#include <qwidget.h>
#line 35 "sipqtQDragObject.cc"
#line 53 "/usr/share/sip/qt/qmetaobject.sip"
#include <qmetaobject.h>
#line 38 "sipqtQDragObject.cc"
#line 57 "/usr/share/sip/qt/qpoint.sip"
#include <qpoint.h>
#line 41 "sipqtQDragObject.cc"
#line 159 "/usr/share/sip/qt/qpixmap.sip"
#include <qpixmap.h>
#line 44 "sipqtQDragObject.cc"
#line 1163 "/usr/share/sip/qt/qevent.sip"
#include <qevent.h>
#line 47 "sipqtQDragObject.cc"
#line 1138 "/usr/share/sip/qt/qevent.sip"
#include <qevent.h>
#line 50 "sipqtQDragObject.cc"
#line 582 "/usr/share/sip/qt/qevent.sip"
#include <qevent.h>
#line 53 "sipqtQDragObject.cc"
#line 66 "/usr/share/sip/qt/qobject.sip"
#include <qobject.h>
#include <qapplication.h>
#line 57 "sipqtQDragObject.cc"
#line 201 "/usr/share/sip/qt/qvariant.sip"
#include <qvariant.h>
#line 60 "sipqtQDragObject.cc"
#line 37 "/usr/share/sip/qt/qobjectlist.sip"
#include <qobjectlist.h>
#line 63 "sipqtQDragObject.cc"
#line 324 "/usr/share/sip/qt/qevent.sip"
#include <qevent.h>
#line 66 "sipqtQDragObject.cc"
#line 449 "/usr/share/sip/qt/qstring.sip"
#include <qstring.h>
#line 69 "sipqtQDragObject.cc"
#line 98 "/usr/share/sip/qt/qbytearray.sip"
#include <qstring.h>
#line 72 "sipqtQDragObject.cc"


class sipQDragObject : public QDragObject
{
public:
    sipQDragObject(QWidget *,const char *);
    virtual ~sipQDragObject();

    /*
     * There is a public method for every protected method visible from
     * this class.
     */
    void sipProtectVirt_timerEvent(bool,QTimerEvent *);
    void sipProtectVirt_childEvent(bool,QChildEvent *);
    void sipProtectVirt_customEvent(bool,QCustomEvent *);
    bool sipProtectVirt_drag(bool,QDragObject::DragMode);

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
    void setPixmap(QPixmap);
    void setPixmap(QPixmap,const QPoint&);
    bool drag(QDragObject::DragMode);
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
    const char * format(int) const;
    bool provides(const char *) const;
    QByteArray encodedData(const char *) const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQDragObject(const sipQDragObject &);
    sipQDragObject &operator = (const sipQDragObject &);

    char sipPyMethods[17];
};

sipQDragObject::sipQDragObject(QWidget *a0,const char *a1): QDragObject(a0,a1), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQDragObject::~sipQDragObject()
{
    sipCommonDtor(sipPySelf);
}

QMetaObject * sipQDragObject::metaObject() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_metaObject);

    if (!meth)
        return QDragObject::metaObject();

    extern QMetaObject * sipVH_qt_179(sip_gilstate_t,PyObject *);

    return sipVH_qt_179(sipGILState,meth);
}

void sipQDragObject::setPixmap(QPixmap a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_setPixmap);

    if (!meth)
    {
        QDragObject::setPixmap(a0);
        return;
    }

    extern void sipVH_qt_286(sip_gilstate_t,PyObject *,QPixmap);

    sipVH_qt_286(sipGILState,meth,a0);
}

void sipQDragObject::setPixmap(QPixmap a0,const QPoint& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_setPixmap);

    if (!meth)
    {
        QDragObject::setPixmap(a0,a1);
        return;
    }

    extern void sipVH_qt_285(sip_gilstate_t,PyObject *,QPixmap,const QPoint&);

    sipVH_qt_285(sipGILState,meth,a0,a1);
}

bool sipQDragObject::drag(QDragObject::DragMode a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_drag);

    if (!meth)
        return QDragObject::drag(a0);

    extern bool sipVH_qt_284(sip_gilstate_t,PyObject *,QDragObject::DragMode);

    return sipVH_qt_284(sipGILState,meth,a0);
}

bool sipQDragObject::event(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_event);

    if (!meth)
        return QObject::event(a0);

    extern bool sipVH_qt_178(sip_gilstate_t,PyObject *,QEvent *);

    return sipVH_qt_178(sipGILState,meth,a0);
}

bool sipQDragObject::eventFilter(QObject *a0,QEvent *a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!meth)
        return QObject::eventFilter(a0,a1);

    extern bool sipVH_qt_177(sip_gilstate_t,PyObject *,QObject *,QEvent *);

    return sipVH_qt_177(sipGILState,meth,a0,a1);
}

void sipQDragObject::setName(const char *a0)
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

void sipQDragObject::insertChild(QObject *a0)
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

void sipQDragObject::removeChild(QObject *a0)
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

bool sipQDragObject::setProperty(const char *a0,const QVariant& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[9],sipPySelf,NULL,sipName_setProperty);

    if (!meth)
        return QObject::setProperty(a0,a1);

    extern bool sipVH_qt_174(sip_gilstate_t,PyObject *,const char *,const QVariant&);

    return sipVH_qt_174(sipGILState,meth,a0,a1);
}

QVariant sipQDragObject::property(const char *a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[10]),sipPySelf,NULL,sipName_property);

    if (!meth)
        return QObject::property(a0);

    extern QVariant sipVH_qt_173(sip_gilstate_t,PyObject *,const char *);

    return sipVH_qt_173(sipGILState,meth,a0);
}

void sipQDragObject::timerEvent(QTimerEvent *a0)
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

void sipQDragObject::childEvent(QChildEvent *a0)
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

void sipQDragObject::customEvent(QCustomEvent *a0)
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

const char * sipQDragObject::format(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[14]),sipPySelf,sipName_QDragObject,sipName_format);

    if (!meth)
        return 0;

    extern const char * sipVH_qt_196(sip_gilstate_t,PyObject *,int,int,sipSimpleWrapper *);

    return sipVH_qt_196(sipGILState,meth,a0,12,sipPySelf);
}

bool sipQDragObject::provides(const char *a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[15]),sipPySelf,NULL,sipName_provides);

    if (!meth)
        return QMimeSource::provides(a0);

    extern bool sipVH_qt_195(sip_gilstate_t,PyObject *,const char *);

    return sipVH_qt_195(sipGILState,meth,a0);
}

QByteArray sipQDragObject::encodedData(const char *a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[16]),sipPySelf,sipName_QDragObject,sipName_encodedData);

    if (!meth)
        return QByteArray();

    extern QByteArray sipVH_qt_194(sip_gilstate_t,PyObject *,const char *);

    return sipVH_qt_194(sipGILState,meth,a0);
}

void sipQDragObject::sipProtectVirt_timerEvent(bool sipSelfWasArg,QTimerEvent *a0)
{
    (sipSelfWasArg ? QObject::timerEvent(a0) : timerEvent(a0));
}

void sipQDragObject::sipProtectVirt_childEvent(bool sipSelfWasArg,QChildEvent *a0)
{
    (sipSelfWasArg ? QObject::childEvent(a0) : childEvent(a0));
}

void sipQDragObject::sipProtectVirt_customEvent(bool sipSelfWasArg,QCustomEvent *a0)
{
    (sipSelfWasArg ? QObject::customEvent(a0) : customEvent(a0));
}

bool sipQDragObject::sipProtectVirt_drag(bool sipSelfWasArg,QDragObject::DragMode a0)
{
    return (sipSelfWasArg ? QDragObject::drag(a0) : drag(a0));
}

int sipQDragObject::sipEmit_destroyed(PyObject *sipArgs)
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

    sipNoMethod(sipParseErr, sipName_QDragObject, sipName_destroyed, NULL);

    return -1;
}

extern "C" {static int QDragObject_emit_destroyed(sipSimpleWrapper *, PyObject *);}
static int QDragObject_emit_destroyed(sipSimpleWrapper *sw,PyObject *sipArgs)
{
    sipQDragObject *ptr = reinterpret_cast<sipQDragObject *>(sipGetComplexCppPtr(sw));

    return (ptr ? ptr->sipEmit_destroyed(sipArgs) : -1);
}

static pyqt3QtSignal signals_QDragObject[] = {
    {sipName_destroyed, QDragObject_emit_destroyed},
    {NULL, NULL}
};


extern "C" {static PyObject *meth_QDragObject_timerEvent(PyObject *, PyObject *);}
static PyObject *meth_QDragObject_timerEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QTimerEvent * a0;
        sipQDragObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QDragObject, &sipCpp, sipType_QTimerEvent, &a0))
        {
            sipCpp->sipProtectVirt_timerEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDragObject, sipName_timerEvent, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDragObject_childEvent(PyObject *, PyObject *);}
static PyObject *meth_QDragObject_childEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QChildEvent * a0;
        sipQDragObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QDragObject, &sipCpp, sipType_QChildEvent, &a0))
        {
            sipCpp->sipProtectVirt_childEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDragObject, sipName_childEvent, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDragObject_customEvent(PyObject *, PyObject *);}
static PyObject *meth_QDragObject_customEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QCustomEvent * a0;
        sipQDragObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QDragObject, &sipCpp, sipType_QCustomEvent, &a0))
        {
            sipCpp->sipProtectVirt_customEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDragObject, sipName_customEvent, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDragObject_drag(PyObject *, PyObject *);}
static PyObject *meth_QDragObject_drag(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QDragObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDragObject, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->drag();

            return PyBool_FromLong(sipRes);
        }
    }

    {
        QDragObject::DragMode a0;
        sipQDragObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QDragObject, &sipCpp, sipType_QDragObject_DragMode, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->sipProtectVirt_drag(sipSelfWasArg,a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDragObject, sipName_drag, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDragObject_dragMove(PyObject *, PyObject *);}
static PyObject *meth_QDragObject_dragMove(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QDragObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDragObject, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->dragMove();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDragObject, sipName_dragMove, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDragObject_dragCopy(PyObject *, PyObject *);}
static PyObject *meth_QDragObject_dragCopy(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QDragObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDragObject, &sipCpp))
        {
            sipCpp->dragCopy();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDragObject, sipName_dragCopy, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDragObject_dragLink(PyObject *, PyObject *);}
static PyObject *meth_QDragObject_dragLink(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QDragObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDragObject, &sipCpp))
        {
            sipCpp->dragLink();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDragObject, sipName_dragLink, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDragObject_setPixmap(PyObject *, PyObject *);}
static PyObject *meth_QDragObject_setPixmap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QPixmap * a0;
        QDragObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QDragObject, &sipCpp, sipType_QPixmap, &a0))
        {
            (sipSelfWasArg ? sipCpp->QDragObject::setPixmap(*a0) : sipCpp->setPixmap(*a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        QPixmap * a0;
        const QPoint * a1;
        QDragObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9J9", &sipSelf, sipType_QDragObject, &sipCpp, sipType_QPixmap, &a0, sipType_QPoint, &a1))
        {
            (sipSelfWasArg ? sipCpp->QDragObject::setPixmap(*a0,*a1) : sipCpp->setPixmap(*a0,*a1));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDragObject, sipName_setPixmap, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDragObject_pixmap(PyObject *, PyObject *);}
static PyObject *meth_QDragObject_pixmap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QDragObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDragObject, &sipCpp))
        {
            QPixmap *sipRes;

            sipRes = new QPixmap(sipCpp->pixmap());

            return sipConvertFromNewType(sipRes,sipType_QPixmap,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDragObject, sipName_pixmap, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDragObject_pixmapHotSpot(PyObject *, PyObject *);}
static PyObject *meth_QDragObject_pixmapHotSpot(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QDragObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDragObject, &sipCpp))
        {
            QPoint *sipRes;

            sipRes = new QPoint(sipCpp->pixmapHotSpot());

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDragObject, sipName_pixmapHotSpot, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDragObject_source(PyObject *, PyObject *);}
static PyObject *meth_QDragObject_source(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QDragObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDragObject, &sipCpp))
        {
            QWidget *sipRes;

            sipRes = sipCpp->source();

            return sipConvertFromType(sipRes,sipType_QWidget,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDragObject, sipName_source, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDragObject_target(PyObject *, PyObject *);}
static PyObject *meth_QDragObject_target(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QWidget *sipRes;

            sipRes = QDragObject::target();

            return sipConvertFromType(sipRes,sipType_QWidget,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDragObject, sipName_target, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDragObject_setTarget(PyObject *, PyObject *);}
static PyObject *meth_QDragObject_setTarget(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWidget * a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8", sipType_QWidget, &a0))
        {
            QDragObject::setTarget(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDragObject, sipName_setTarget, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDragObject_metaObject(PyObject *, PyObject *);}
static PyObject *meth_QDragObject_metaObject(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QDragObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDragObject, &sipCpp))
        {
            QMetaObject *sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QDragObject::metaObject() : sipCpp->metaObject());

            return sipConvertFromType(sipRes,sipType_QMetaObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDragObject, sipName_metaObject, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QDragObject(void *, const sipTypeDef *);}
static void *cast_QDragObject(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QDragObject)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QDragObject *)ptr,targetType)) != NULL)
        return res;

    if ((res = ((const sipClassTypeDef *)sipType_QMimeSource)->ctd_cast((QMimeSource *)(QDragObject *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDragObject(void *, int);}
static void release_QDragObject(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQDragObject *>(sipCppV);
    else
        delete reinterpret_cast<QDragObject *>(sipCppV);
}


extern "C" {static void dealloc_QDragObject(sipSimpleWrapper *);}
static void dealloc_QDragObject(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQDragObject *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QDragObject(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QDragObject(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QDragObject(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQDragObject *sipCpp = 0;

    {
        QWidget * a0 = 0;
        const char * a1 = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "|JHs", sipType_QWidget, &a0, sipOwner, &a1))
        {
            sipCpp = new sipQDragObject(a0,a1);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QDragObject[] = {{202, 255, 0}, {184, 255, 1}};


static PyMethodDef methods_QDragObject[] = {
    {SIP_MLNAME_CAST(sipName_childEvent), meth_QDragObject_childEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_customEvent), meth_QDragObject_customEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_drag), meth_QDragObject_drag, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_dragCopy), meth_QDragObject_dragCopy, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_dragLink), meth_QDragObject_dragLink, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_dragMove), meth_QDragObject_dragMove, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_metaObject), meth_QDragObject_metaObject, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_pixmap), meth_QDragObject_pixmap, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_pixmapHotSpot), meth_QDragObject_pixmapHotSpot, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setPixmap), meth_QDragObject_setPixmap, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setTarget), meth_QDragObject_setTarget, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_source), meth_QDragObject_source, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_target), meth_QDragObject_target, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_timerEvent), meth_QDragObject_timerEvent, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_QDragObject[] = {
    {sipName_DragCopy, QDragObject::DragCopy, 71},
    {sipName_DragCopyOrMove, QDragObject::DragCopyOrMove, 71},
    {sipName_DragDefault, QDragObject::DragDefault, 71},
    {sipName_DragLink, QDragObject::DragLink, 71},
    {sipName_DragMove, QDragObject::DragMove, 71},
};


pyqt3ClassTypeDef sipTypeDef_qt_QDragObject = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QDragObject,
        {0}
    },
    {
        sipNameNr_QDragObject,
        {0, 0, 1},
        14, methods_QDragObject,
        5, enummembers_QDragObject,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QDragObject,
    0,
    init_QDragObject,
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
    dealloc_QDragObject,
    0,
    0,
    0,
    release_QDragObject,
    cast_QDragObject,
    0,
    0,
    0
},
    signals_QDragObject
};
