/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.10.2 on Mon Mar 28 16:23:14 2011
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

#line 96 "/usr/share/sip/qt/qmemarray.sip"
#include <qmemarray.h>
#line 31 "sipqtQMemArray0100QRect.cc"

#line 93 "/usr/share/sip/qt/qrect.sip"
#include <qrect.h>
#line 35 "sipqtQMemArray0100QRect.cc"


extern "C" {static void assign_QMemArray_0100QRect(void *, SIP_SSIZE_T, const void *);}
static void assign_QMemArray_0100QRect(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QMemArray<QRect> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QMemArray<QRect> *>(sipSrc);
}


extern "C" {static void *array_QMemArray_0100QRect(SIP_SSIZE_T);}
static void *array_QMemArray_0100QRect(SIP_SSIZE_T sipNrElem)
{
    return new QMemArray<QRect>[sipNrElem];
}


extern "C" {static void *copy_QMemArray_0100QRect(const void *, SIP_SSIZE_T);}
static void *copy_QMemArray_0100QRect(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QMemArray<QRect>(reinterpret_cast<const QMemArray<QRect> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QMemArray_0100QRect(void *, int);}
static void release_QMemArray_0100QRect(void *ptr, int)
{
    delete reinterpret_cast<QMemArray<QRect> *>(ptr);
}



extern "C" {static int convertTo_QMemArray_0100QRect(PyObject *, void **, int *, PyObject *);}
static int convertTo_QMemArray_0100QRect(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QMemArray<QRect> **sipCppPtr = reinterpret_cast<QMemArray<QRect> **>(sipCppPtrV);

#line 127 "/usr/share/sip/qt/qmemarray.sip"
    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
    {
        if (!PyList_Check(sipPy))
            return 0;

        for (int i = 0; i < PyList_GET_SIZE(sipPy); ++i)
            if (!sipCanConvertToInstance(PyList_GET_ITEM(sipPy, i), sipClass_QRect, SIP_NOT_NONE))
                return 0;

        return 1;
    }

    QMemArray<QRect> *ql = new QMemArray<QRect>;

    for (int i = 0; i < PyList_GET_SIZE(sipPy); ++i)
    {
        int state;
        QRect *t = reinterpret_cast<QRect *>(sipConvertToInstance(PyList_GET_ITEM(sipPy, i), sipClass_QRect, sipTransferObj, SIP_NOT_NONE, &state, sipIsErr));

        if (*sipIsErr)
        {
            sipReleaseInstance(t, sipClass_QRect, state);

            delete ql;
            return 0;
        }

        uint idx = ql->size();
        ql->resize(idx + 1);
        ql->at(idx) = *t;

        sipReleaseInstance(t, sipClass_QRect, state);
    }

    *sipCppPtr = ql;

    return sipGetState(sipTransferObj);
#line 112 "sipqtQMemArray0100QRect.cc"
}


extern "C" {static PyObject *convertFrom_QMemArray_0100QRect(void *, PyObject *);}
static PyObject *convertFrom_QMemArray_0100QRect(void *sipCppV,PyObject *sipTransferObj)
{
   QMemArray<QRect> *sipCpp = reinterpret_cast<QMemArray<QRect> *>(sipCppV);

#line 100 "/usr/share/sip/qt/qmemarray.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (uint i = 0; i < sipCpp->size(); ++i)
    {
        QRect *t = new QRect(sipCpp->at(i));
        PyObject *tobj;

        if ((tobj = sipConvertFromNewInstance(t, sipClass_QRect, sipTransferObj)) == NULL)
        {
            Py_DECREF(l);
            delete t;

            return NULL;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 146 "sipqtQMemArray0100QRect.cc"
}


sipMappedTypeDef sipTypeDef_qt_QMemArray_0100QRect = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_17067,
        {0}
    },
    {
        -1,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_QMemArray_0100QRect,
    array_QMemArray_0100QRect,
    copy_QMemArray_0100QRect,
    release_QMemArray_0100QRect,
    convertTo_QMemArray_0100QRect,
    convertFrom_QMemArray_0100QRect
};
