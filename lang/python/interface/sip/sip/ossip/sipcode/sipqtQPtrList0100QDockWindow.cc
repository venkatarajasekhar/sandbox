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

#line 40 "/usr/share/sip/qt/qptrlist.sip"
#include <qptrlist.h>
#line 31 "sipqtQPtrList0100QDockWindow.cc"

#line 37 "/usr/share/sip/qt/qdockwindow.sip"
#include <qdockwindow.h>
#line 35 "sipqtQPtrList0100QDockWindow.cc"


extern "C" {static void assign_QPtrList_0100QDockWindow(void *, SIP_SSIZE_T, const void *);}
static void assign_QPtrList_0100QDockWindow(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QPtrList<QDockWindow> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QPtrList<QDockWindow> *>(sipSrc);
}


extern "C" {static void *array_QPtrList_0100QDockWindow(SIP_SSIZE_T);}
static void *array_QPtrList_0100QDockWindow(SIP_SSIZE_T sipNrElem)
{
    return new QPtrList<QDockWindow>[sipNrElem];
}


extern "C" {static void *copy_QPtrList_0100QDockWindow(const void *, SIP_SSIZE_T);}
static void *copy_QPtrList_0100QDockWindow(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QPtrList<QDockWindow>(reinterpret_cast<const QPtrList<QDockWindow> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QPtrList_0100QDockWindow(void *, int);}
static void release_QPtrList_0100QDockWindow(void *ptr, int)
{
    delete reinterpret_cast<QPtrList<QDockWindow> *>(ptr);
}



extern "C" {static int convertTo_QPtrList_0100QDockWindow(PyObject *, void **, int *, PyObject *);}
static int convertTo_QPtrList_0100QDockWindow(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QPtrList<QDockWindow> **sipCppPtr = reinterpret_cast<QPtrList<QDockWindow> **>(sipCppPtrV);

#line 76 "/usr/share/sip/qt/qptrlist.sip"
	if (sipIsErr == NULL)
	{
		if (!PyList_Check(sipPy))
			return 0;

		for (int i = 0; i < PyList_GET_SIZE(sipPy); ++i)
			if (!sipCanConvertToInstance(PyList_GET_ITEM(sipPy,i),sipClass_QDockWindow,0))
				return 0;

		return 1;
	}

	QPtrList<QDockWindow> *qpl = new QPtrList<QDockWindow>;
 
	for (int i = 0; i < PyList_GET_SIZE(sipPy); ++i)
	{
		// We apply the transfer to the list itself, not the elements.
		// Note that any temporary element will never be destroyed.
		// There is nothing that can be done about this.
		qpl -> append(reinterpret_cast<QDockWindow *>(sipConvertToInstance(PyList_GET_ITEM(sipPy,i),sipClass_QDockWindow,0,0,0,sipIsErr)));
 
		if (*sipIsErr)
		{
			delete qpl;
 
			return 0;
		}
	}
 
	*sipCppPtr = qpl;
 
	return sipGetState(sipTransferObj);
#line 106 "sipqtQPtrList0100QDockWindow.cc"
}


extern "C" {static PyObject *convertFrom_QPtrList_0100QDockWindow(void *, PyObject *);}
static PyObject *convertFrom_QPtrList_0100QDockWindow(void *sipCppV,PyObject *sipTransferObj)
{
   QPtrList<QDockWindow> *sipCpp = reinterpret_cast<QPtrList<QDockWindow> *>(sipCppV);

#line 44 "/usr/share/sip/qt/qptrlist.sip"
	QDockWindow *dw;
	int i;
	PyObject *l;

	// Create the list.

	if ((l = PyList_New(sipCpp -> count())) == NULL)
		return NULL;

	// Get it.

	i = 0;

	for (dw = sipCpp -> first(); dw != NULL; dw = sipCpp -> next())
	{
		PyObject *dwobj;

		if ((dwobj = sipConvertFromInstance(dw,sipClass_QDockWindow,sipTransferObj)) == NULL || PyList_SetItem(l,i,dwobj) < 0)
		{
			Py_XDECREF(dwobj);
			Py_DECREF(l);

			return NULL;
		}

		++i;
	}

	return l;
#line 145 "sipqtQPtrList0100QDockWindow.cc"
}


sipMappedTypeDef sipTypeDef_qt_QPtrList_0100QDockWindow = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_6636,
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
    assign_QPtrList_0100QDockWindow,
    array_QPtrList_0100QDockWindow,
    copy_QPtrList_0100QDockWindow,
    release_QPtrList_0100QDockWindow,
    convertTo_QPtrList_0100QDockWindow,
    convertFrom_QPtrList_0100QDockWindow
};
