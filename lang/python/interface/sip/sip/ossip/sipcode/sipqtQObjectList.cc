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

#line 37 "/usr/share/sip/qt/qobjectlist.sip"
#include <qobjectlist.h>
#line 31 "sipqtQObjectList.cc"



extern "C" {static void assign_QObjectList(void *, SIP_SSIZE_T, const void *);}
static void assign_QObjectList(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QObjectList *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QObjectList *>(sipSrc);
}


extern "C" {static void *array_QObjectList(SIP_SSIZE_T);}
static void *array_QObjectList(SIP_SSIZE_T sipNrElem)
{
    return new QObjectList[sipNrElem];
}


extern "C" {static void *copy_QObjectList(const void *, SIP_SSIZE_T);}
static void *copy_QObjectList(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QObjectList(reinterpret_cast<const QObjectList *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QObjectList(void *, int);}
static void release_QObjectList(void *ptr, int)
{
    delete reinterpret_cast<QObjectList *>(ptr);
}



extern "C" {static int convertTo_QObjectList(PyObject *, void **, int *, PyObject *);}
static int convertTo_QObjectList(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QObjectList **sipCppPtr = reinterpret_cast<QObjectList **>(sipCppPtrV);

#line 68 "/usr/share/sip/qt/qobjectlist.sip"
	// Convert a Python list of QObject instances to a QObjectList on the
	// heap.

	if (sipIsErr == NULL)
	{
		if (!PyList_Check(sipPy))
			return 0;

		for (int i = 0; i < PyList_GET_SIZE(sipPy); ++i)
			if (!sipCanConvertToInstance(PyList_GET_ITEM(sipPy,i),sipClass_QObject,0))
				return 0;

		return 1;
	}

	QObjectList *qol = new QObjectList;

	for (int i = 0; i < PyList_GET_SIZE(sipPy); ++i)
	{
		QObject *qobj;

		// We apply the transfer to the list itself, not the elements.
		// Note that any temporary element will never be destroyed.
		// There is nothing that can be done about this.
		qobj = reinterpret_cast<QObject *>(sipConvertToInstance(PyList_GET_ITEM(sipPy,i),sipClass_QObject,0,0,0,sipIsErr));

		if (*sipIsErr)
		{
			delete qol;
			return 0;
		}

		qol -> append(qobj);
	}

	*sipCppPtr = qol;

	return sipGetState(sipTransferObj);
#line 109 "sipqtQObjectList.cc"
}


extern "C" {static PyObject *convertFrom_QObjectList(void *, PyObject *);}
static PyObject *convertFrom_QObjectList(void *sipCppV,PyObject *sipTransferObj)
{
   QObjectList *sipCpp = reinterpret_cast<QObjectList *>(sipCppV);

#line 41 "/usr/share/sip/qt/qobjectlist.sip"
	// Convert the list.

	PyObject *pl;
	QObject *obj;

	if ((pl = PyList_New(0)) == NULL)
		return NULL;

	for (QObjectListIt it(*sipCpp); (obj = it.current()) != NULL; ++it)
	{
		PyObject *inst;

		if ((inst = sipConvertFromInstance(obj,sipClass_QObject,sipTransferObj)) == NULL || PyList_Append(pl,inst) < 0)
		{
			Py_XDECREF(inst);
			Py_DECREF(pl);

			return NULL;
		}

		Py_DECREF(inst);
	}

	return pl;
#line 143 "sipqtQObjectList.cc"
}


sipMappedTypeDef sipTypeDef_qt_QObjectList = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_QObjectList,
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
    assign_QObjectList,
    array_QObjectList,
    copy_QObjectList,
    release_QObjectList,
    convertTo_QObjectList,
    convertFrom_QObjectList
};
