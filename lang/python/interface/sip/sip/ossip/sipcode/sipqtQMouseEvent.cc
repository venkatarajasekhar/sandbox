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

#line 595 "/usr/share/sip/qt/qevent.sip"
#include <qevent.h>
#line 31 "sipqtQMouseEvent.cc"

#line 324 "/usr/share/sip/qt/qevent.sip"
#include <qevent.h>
#line 35 "sipqtQMouseEvent.cc"
#line 57 "/usr/share/sip/qt/qpoint.sip"
#include <qpoint.h>
#line 38 "sipqtQMouseEvent.cc"
#line 37 "/usr/share/sip/qt/qnamespace.sip"
#include <qnamespace.h>
#line 41 "sipqtQMouseEvent.cc"


class sipQMouseEvent : public QMouseEvent
{
public:
    sipQMouseEvent(QEvent::Type,const QPoint&,int,int);
    sipQMouseEvent(QEvent::Type,const QPoint&,const QPoint&,int,int);
    sipQMouseEvent(const QMouseEvent&);
    ~sipQMouseEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQMouseEvent(const sipQMouseEvent &);
    sipQMouseEvent &operator = (const sipQMouseEvent &);
};

sipQMouseEvent::sipQMouseEvent(QEvent::Type a0,const QPoint& a1,int a2,int a3): QMouseEvent(a0,a1,a2,a3), sipPySelf(0)
{
}

sipQMouseEvent::sipQMouseEvent(QEvent::Type a0,const QPoint& a1,const QPoint& a2,int a3,int a4): QMouseEvent(a0,a1,a2,a3,a4), sipPySelf(0)
{
}

sipQMouseEvent::sipQMouseEvent(const QMouseEvent& a0): QMouseEvent(a0), sipPySelf(0)
{
}

sipQMouseEvent::~sipQMouseEvent()
{
    sipCommonDtor(sipPySelf);
}


extern "C" {static PyObject *meth_QMouseEvent_pos(PyObject *, PyObject *);}
static PyObject *meth_QMouseEvent_pos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMouseEvent, &sipCpp))
        {
            QPoint *sipRes;

            sipRes = new QPoint(sipCpp->pos());

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMouseEvent, sipName_pos, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QMouseEvent_globalPos(PyObject *, PyObject *);}
static PyObject *meth_QMouseEvent_globalPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMouseEvent, &sipCpp))
        {
            QPoint *sipRes;

            sipRes = new QPoint(sipCpp->globalPos());

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMouseEvent, sipName_globalPos, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QMouseEvent_x(PyObject *, PyObject *);}
static PyObject *meth_QMouseEvent_x(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMouseEvent, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->x();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMouseEvent, sipName_x, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QMouseEvent_y(PyObject *, PyObject *);}
static PyObject *meth_QMouseEvent_y(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMouseEvent, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->y();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMouseEvent, sipName_y, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QMouseEvent_globalX(PyObject *, PyObject *);}
static PyObject *meth_QMouseEvent_globalX(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMouseEvent, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->globalX();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMouseEvent, sipName_globalX, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QMouseEvent_globalY(PyObject *, PyObject *);}
static PyObject *meth_QMouseEvent_globalY(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMouseEvent, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->globalY();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMouseEvent, sipName_globalY, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QMouseEvent_button(PyObject *, PyObject *);}
static PyObject *meth_QMouseEvent_button(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMouseEvent, &sipCpp))
        {
            Qt::ButtonState sipRes;

            sipRes = sipCpp->button();

            return sipConvertFromEnum(sipRes,sipType_Qt_ButtonState);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMouseEvent, sipName_button, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QMouseEvent_state(PyObject *, PyObject *);}
static PyObject *meth_QMouseEvent_state(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMouseEvent, &sipCpp))
        {
            Qt::ButtonState sipRes;

            sipRes = sipCpp->state();

            return sipConvertFromEnum(sipRes,sipType_Qt_ButtonState);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMouseEvent, sipName_state, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QMouseEvent_stateAfter(PyObject *, PyObject *);}
static PyObject *meth_QMouseEvent_stateAfter(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMouseEvent, &sipCpp))
        {
            Qt::ButtonState sipRes;

            sipRes = sipCpp->stateAfter();

            return sipConvertFromEnum(sipRes,sipType_Qt_ButtonState);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMouseEvent, sipName_stateAfter, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QMouseEvent_isAccepted(PyObject *, PyObject *);}
static PyObject *meth_QMouseEvent_isAccepted(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMouseEvent, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isAccepted();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMouseEvent, sipName_isAccepted, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QMouseEvent_accept(PyObject *, PyObject *);}
static PyObject *meth_QMouseEvent_accept(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMouseEvent, &sipCpp))
        {
            sipCpp->accept();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMouseEvent, sipName_accept, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QMouseEvent_ignore(PyObject *, PyObject *);}
static PyObject *meth_QMouseEvent_ignore(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMouseEvent, &sipCpp))
        {
            sipCpp->ignore();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMouseEvent, sipName_ignore, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QMouseEvent(void *, const sipTypeDef *);}
static void *cast_QMouseEvent(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QMouseEvent)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QEvent)->ctd_cast((QEvent *)(QMouseEvent *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QMouseEvent(void *, int);}
static void release_QMouseEvent(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQMouseEvent *>(sipCppV);
    else
        delete reinterpret_cast<QMouseEvent *>(sipCppV);
}


extern "C" {static void dealloc_QMouseEvent(sipSimpleWrapper *);}
static void dealloc_QMouseEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQMouseEvent *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QMouseEvent(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QMouseEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QMouseEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQMouseEvent *sipCpp = 0;

    {
        QEvent::Type a0;
        const QPoint * a1;
        int a2;
        int a3;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "EJ9ii", sipType_QEvent_Type, &a0, sipType_QPoint, &a1, &a2, &a3))
        {
            sipCpp = new sipQMouseEvent(a0,*a1,a2,a3);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        QEvent::Type a0;
        const QPoint * a1;
        const QPoint * a2;
        int a3;
        int a4;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "EJ9J9ii", sipType_QEvent_Type, &a0, sipType_QPoint, &a1, sipType_QPoint, &a2, &a3, &a4))
        {
            sipCpp = new sipQMouseEvent(a0,*a1,*a2,a3,a4);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QMouseEvent * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QMouseEvent, &a0))
        {
            sipCpp = new sipQMouseEvent(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QMouseEvent[] = {{76, 255, 1}};


static PyMethodDef methods_QMouseEvent[] = {
    {SIP_MLNAME_CAST(sipName_accept), meth_QMouseEvent_accept, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_button), meth_QMouseEvent_button, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_globalPos), meth_QMouseEvent_globalPos, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_globalX), meth_QMouseEvent_globalX, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_globalY), meth_QMouseEvent_globalY, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_ignore), meth_QMouseEvent_ignore, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isAccepted), meth_QMouseEvent_isAccepted, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_pos), meth_QMouseEvent_pos, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_state), meth_QMouseEvent_state, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_stateAfter), meth_QMouseEvent_stateAfter, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_x), meth_QMouseEvent_x, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_y), meth_QMouseEvent_y, METH_VARARGS, NULL}
};


pyqt3ClassTypeDef sipTypeDef_qt_QMouseEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QMouseEvent,
        {0}
    },
    {
        sipNameNr_QMouseEvent,
        {0, 0, 1},
        12, methods_QMouseEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QMouseEvent,
    0,
    init_QMouseEvent,
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
    dealloc_QMouseEvent,
    0,
    0,
    0,
    release_QMouseEvent,
    cast_QMouseEvent,
    0,
    0,
    0
},
    0
};