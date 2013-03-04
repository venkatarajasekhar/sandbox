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
#line 31 "sipqtQPtrList0100QNetworkOperation.cc"

#line 196 "/usr/share/sip/qt/qnetworkprotocol.sip"
#include <qnetworkprotocol.h>
#line 35 "sipqtQPtrList0100QNetworkOperation.cc"


extern "C" {static void assign_QPtrList_0100QNetworkOperation(void *, SIP_SSIZE_T, const void *);}
static void assign_QPtrList_0100QNetworkOperation(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QPtrList<QNetworkOperation> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QPtrList<QNetworkOperation> *>(sipSrc);
}


extern "C" {static void *array_QPtrList_0100QNetworkOperation(SIP_SSIZE_T);}
static void *array_QPtrList_0100QNetworkOperation(SIP_SSIZE_T sipNrElem)
{
    return new QPtrList<QNetworkOperation>[sipNrElem];
}


extern "C" {static void *copy_QPtrList_0100QNetworkOperation(const void *, SIP_SSIZE_T);}
static void *copy_QPtrList_0100QNetworkOperation(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QPtrList<QNetworkOperation>(reinterpret_cast<const QPtrList<QNetworkOperation> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QPtrList_0100QNetworkOperation(void *, int);}
static void release_QPtrList_0100QNetworkOperation(void *ptr, int)
{
    delete reinterpret_cast<QPtrList<QNetworkOperation> *>(ptr);
}



extern "C" {static int convertTo_QPtrList_0100QNetworkOperation(PyObject *, void **, int *, PyObject *);}
static int convertTo_QPtrList_0100QNetworkOperation(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QPtrList<QNetworkOperation> **sipCppPtr = reinterpret_cast<QPtrList<QNetworkOperation> **>(sipCppPtrV);

#line 76 "/usr/share/sip/qt/qptrlist.sip"
	if (sipIsErr == NULL)
	{
		if (!PyList_Check(sipPy))
			return 0;

		for (int i = 0; i < PyList_GET_SIZE(sipPy); ++i)
			if (!sipCanConvertToInstance(PyList_GET_ITEM(sipPy,i),sipClass_QNetworkOperation,0))
				return 0;

		return 1;
	}

	QPtrList<QNetworkOperation> *qpl = new QPtrList<QNetworkOperation>;
 
	for (int i = 0; i < PyList_GET_SIZE(sipPy); ++i)
	{
		// We apply the transfer to the list itself, not the elements.
		// Note that any temporary element will never be destroyed.
		// There is nothing that can be done about this.
		qpl -> append(reinterpret_cast<QNetworkOperation *>(sipConvertToInstance(PyList_GET_ITEM(sipPy,i),sipClass_QNetworkOperation,0,0,0,sipIsErr)));
 
		if (*sipIsErr)
		{
			delete qpl;
 
			return 0;
		}
	}
 
	*sipCppPtr = qpl;
 
	return sipGetState(sipTransferObj);
#line 106 "sipqtQPtrList0100QNetworkOperation.cc"
}


extern "C" {static PyObject *convertFrom_QPtrList_0100QNetworkOperation(void *, PyObject *);}
static PyObject *convertFrom_QPtrList_0100QNetworkOperation(void *sipCppV,PyObject *sipTransferObj)
{
   QPtrList<QNetworkOperation> *sipCpp = reinterpret_cast<QPtrList<QNetworkOperation> *>(sipCppV);

#line 44 "/usr/share/sip/qt/qptrlist.sip"
	QNetworkOperation *dw;
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

		if ((dwobj = sipConvertFromInstance(dw,sipClass_QNetworkOperation,sipTransferObj)) == NULL || PyList_SetItem(l,i,dwobj) < 0)
		{
			Py_XDECREF(dwobj);
			Py_DECREF(l);

			return NULL;
		}

		++i;
	}

	return l;
#line 145 "sipqtQPtrList0100QNetworkOperation.cc"
}


sipMappedTypeDef sipTypeDef_qt_QPtrList_0100QNetworkOperation = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_1615,
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
    assign_QPtrList_0100QNetworkOperation,
    array_QPtrList_0100QNetworkOperation,
    copy_QPtrList_0100QNetworkOperation,
    release_QPtrList_0100QNetworkOperation,
    convertTo_QPtrList_0100QNetworkOperation,
    convertFrom_QPtrList_0100QNetworkOperation
};
