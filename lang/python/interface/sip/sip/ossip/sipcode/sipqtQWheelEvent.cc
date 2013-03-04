/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.10.2 on Mon Mar 28 16:23:16 2011
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

#line 636 "/usr/share/sip/qt/qevent.sip"
#include <qevent.h>
#line 31 "sipqtQWheelEvent.cc"

#line 57 "/usr/share/sip/qt/qpoint.sip"
#include <qpoint.h>
#line 35 "sipqtQWheelEvent.cc"
#line 37 "/usr/share/sip/qt/qnamespace.sip"
#include <qnamespace.h>
#line 38 "sipqtQWheelEvent.cc"
#line 324 "/usr/share/sip/qt/qevent.sip"
#include <qevent.h>
#line 41 "sipqtQWheelEvent.cc"


class sipQWheelEvent : public QWheelEvent
{
public:
    sipQWheelEvent(const QPoint&,int,int,Qt::Orientation);
    sipQWheelEvent(const QPoint&,const QPoint&,int,int,Qt::Orientation);
    sipQWheelEvent(const QWheelEvent&);
    ~sipQWheelEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQWheelEvent(const sipQWheelEvent &);
    sipQWheelEvent &operator = (const sipQWheelEvent &);
};

sipQWheelEvent::sipQWheelEvent(const QPoint& a0,int a1,int a2,Qt::Orientation a3): QWheelEvent(a0,a1,a2,a3), sipPySelf(0)
{
}

sipQWheelEvent::sipQWheelEvent(const QPoint& a0,const QPoint& a1,int a2,int a3,Qt::Orientation a4): QWheelEvent(a0,a1,a2,a3,a4), sipPySelf(0)
{
}

sipQWheelEvent::sipQWheelEvent(const QWheelEvent& a0): QWheelEvent(a0), sipPySelf(0)
{
}

sipQWheelEvent::~sipQWheelEvent()
{
    sipCommonDtor(sipPySelf);
}


extern "C" {static PyObject *meth_QWheelEvent_delta(PyObject *, PyObject *);}
static PyObject *meth_QWheelEvent_delta(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWheelEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWheelEvent, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->delta();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWheelEvent, sipName_delta, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QWheelEvent_pos(PyObject *, PyObject *);}
static PyObject *meth_QWheelEvent_pos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWheelEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWheelEvent, &sipCpp))
        {
            QPoint *sipRes;

            sipRes = new QPoint(sipCpp->pos());

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWheelEvent, sipName_pos, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QWheelEvent_globalPos(PyObject *, PyObject *);}
static PyObject *meth_QWheelEvent_globalPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWheelEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWheelEvent, &sipCpp))
        {
            QPoint *sipRes;

            sipRes = new QPoint(sipCpp->globalPos());

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWheelEvent, sipName_globalPos, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QWheelEvent_x(PyObject *, PyObject *);}
static PyObject *meth_QWheelEvent_x(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWheelEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWheelEvent, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->x();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWheelEvent, sipName_x, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QWheelEvent_y(PyObject *, PyObject *);}
static PyObject *meth_QWheelEvent_y(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWheelEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWheelEvent, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->y();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWheelEvent, sipName_y, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QWheelEvent_globalX(PyObject *, PyObject *);}
static PyObject *meth_QWheelEvent_globalX(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWheelEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWheelEvent, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->globalX();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWheelEvent, sipName_globalX, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QWheelEvent_globalY(PyObject *, PyObject *);}
static PyObject *meth_QWheelEvent_globalY(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWheelEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWheelEvent, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->globalY();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWheelEvent, sipName_globalY, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QWheelEvent_state(PyObject *, PyObject *);}
static PyObject *meth_QWheelEvent_state(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWheelEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWheelEvent, &sipCpp))
        {
            Qt::ButtonState sipRes;

            sipRes = sipCpp->state();

            return sipConvertFromEnum(sipRes,sipType_Qt_ButtonState);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWheelEvent, sipName_state, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QWheelEvent_orientation(PyObject *, PyObject *);}
static PyObject *meth_QWheelEvent_orientation(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWheelEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWheelEvent, &sipCpp))
        {
            Qt::Orientation sipRes;

            sipRes = sipCpp->orientation();

            return sipConvertFromEnum(sipRes,sipType_Qt_Orientation);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWheelEvent, sipName_orientation, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QWheelEvent_isAccepted(PyObject *, PyObject *);}
static PyObject *meth_QWheelEvent_isAccepted(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWheelEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWheelEvent, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isAccepted();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWheelEvent, sipName_isAccepted, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QWheelEvent_accept(PyObject *, PyObject *);}
static PyObject *meth_QWheelEvent_accept(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWheelEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWheelEvent, &sipCpp))
        {
            sipCpp->accept();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWheelEvent, sipName_accept, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QWheelEvent_ignore(PyObject *, PyObject *);}
static PyObject *meth_QWheelEvent_ignore(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWheelEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWheelEvent, &sipCpp))
        {
            sipCpp->ignore();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWheelEvent, sipName_ignore, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QWheelEvent(void *, const sipTypeDef *);}
static void *cast_QWheelEvent(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QWheelEvent)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QEvent)->ctd_cast((QEvent *)(QWheelEvent *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QWheelEvent(void *, int);}
static void release_QWheelEvent(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQWheelEvent *>(sipCppV);
    else
        delete reinterpret_cast<QWheelEvent *>(sipCppV);
}


extern "C" {static void dealloc_QWheelEvent(sipSimpleWrapper *);}
static void dealloc_QWheelEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQWheelEvent *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QWheelEvent(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QWheelEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QWheelEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQWheelEvent *sipCpp = 0;

    {
        const QPoint * a0;
        int a1;
        int a2;
        Qt::Orientation a3 = Qt::Vertical;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9ii|E", sipType_QPoint, &a0, &a1, &a2, sipType_Qt_Orientation, &a3))
        {
            sipCpp = new sipQWheelEvent(*a0,a1,a2,a3);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QPoint * a0;
        const QPoint * a1;
        int a2;
        int a3;
        Qt::Orientation a4 = Qt::Vertical;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9J9ii|E", sipType_QPoint, &a0, sipType_QPoint, &a1, &a2, &a3, sipType_Qt_Orientation, &a4))
        {
            sipCpp = new sipQWheelEvent(*a0,*a1,a2,a3,a4);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QWheelEvent * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QWheelEvent, &a0))
        {
            sipCpp = new sipQWheelEvent(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QWheelEvent[] = {{76, 255, 1}};


static PyMethodDef methods_QWheelEvent[] = {
    {SIP_MLNAME_CAST(sipName_accept), meth_QWheelEvent_accept, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_delta), meth_QWheelEvent_delta, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_globalPos), meth_QWheelEvent_globalPos, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_globalX), meth_QWheelEvent_globalX, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_globalY), meth_QWheelEvent_globalY, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_ignore), meth_QWheelEvent_ignore, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isAccepted), meth_QWheelEvent_isAccepted, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_orientation), meth_QWheelEvent_orientation, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_pos), meth_QWheelEvent_pos, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_state), meth_QWheelEvent_state, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_x), meth_QWheelEvent_x, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_y), meth_QWheelEvent_y, METH_VARARGS, NULL}
};


pyqt3ClassTypeDef sipTypeDef_qt_QWheelEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QWheelEvent,
        {0}
    },
    {
        sipNameNr_QWheelEvent,
        {0, 0, 1},
        12, methods_QWheelEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QWheelEvent,
    0,
    init_QWheelEvent,
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
    dealloc_QWheelEvent,
    0,
    0,
    0,
    release_QWheelEvent,
    cast_QWheelEvent,
    0,
    0,
    0
},
    0
};
