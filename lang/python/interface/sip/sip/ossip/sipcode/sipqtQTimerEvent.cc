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

#line 582 "/usr/share/sip/qt/qevent.sip"
#include <qevent.h>
#line 31 "sipqtQTimerEvent.cc"

#line 324 "/usr/share/sip/qt/qevent.sip"
#include <qevent.h>
#line 35 "sipqtQTimerEvent.cc"


class sipQTimerEvent : public QTimerEvent
{
public:
    sipQTimerEvent(int);
    sipQTimerEvent(const QTimerEvent&);
    ~sipQTimerEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQTimerEvent(const sipQTimerEvent &);
    sipQTimerEvent &operator = (const sipQTimerEvent &);
};

sipQTimerEvent::sipQTimerEvent(int a0): QTimerEvent(a0), sipPySelf(0)
{
}

sipQTimerEvent::sipQTimerEvent(const QTimerEvent& a0): QTimerEvent(a0), sipPySelf(0)
{
}

sipQTimerEvent::~sipQTimerEvent()
{
    sipCommonDtor(sipPySelf);
}


extern "C" {static PyObject *meth_QTimerEvent_timerId(PyObject *, PyObject *);}
static PyObject *meth_QTimerEvent_timerId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTimerEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTimerEvent, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->timerId();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimerEvent, sipName_timerId, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QTimerEvent(void *, const sipTypeDef *);}
static void *cast_QTimerEvent(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QTimerEvent)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QEvent)->ctd_cast((QEvent *)(QTimerEvent *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTimerEvent(void *, int);}
static void release_QTimerEvent(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQTimerEvent *>(sipCppV);
    else
        delete reinterpret_cast<QTimerEvent *>(sipCppV);
}


extern "C" {static void dealloc_QTimerEvent(sipSimpleWrapper *);}
static void dealloc_QTimerEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQTimerEvent *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QTimerEvent(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QTimerEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QTimerEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQTimerEvent *sipCpp = 0;

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new sipQTimerEvent(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QTimerEvent * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QTimerEvent, &a0))
        {
            sipCpp = new sipQTimerEvent(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QTimerEvent[] = {{76, 255, 1}};


static PyMethodDef methods_QTimerEvent[] = {
    {SIP_MLNAME_CAST(sipName_timerId), meth_QTimerEvent_timerId, METH_VARARGS, NULL}
};


pyqt3ClassTypeDef sipTypeDef_qt_QTimerEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QTimerEvent,
        {0}
    },
    {
        sipNameNr_QTimerEvent,
        {0, 0, 1},
        1, methods_QTimerEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QTimerEvent,
    0,
    init_QTimerEvent,
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
    dealloc_QTimerEvent,
    0,
    0,
    0,
    release_QTimerEvent,
    cast_QTimerEvent,
    0,
    0,
    0
},
    0
};