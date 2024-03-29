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

#line 57 "/usr/share/sip/qt/qsize.sip"
#include <qsize.h>
#line 31 "sipqtQSize.cc"



extern "C" {static PyObject *meth_QSize_isNull(PyObject *, PyObject *);}
static PyObject *meth_QSize_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSize *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSize, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isNull();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSize, sipName_isNull, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSize_isEmpty(PyObject *, PyObject *);}
static PyObject *meth_QSize_isEmpty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSize *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSize, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isEmpty();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSize, sipName_isEmpty, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSize_isValid(PyObject *, PyObject *);}
static PyObject *meth_QSize_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSize *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSize, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSize, sipName_isValid, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSize_width(PyObject *, PyObject *);}
static PyObject *meth_QSize_width(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSize *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSize, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->width();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSize, sipName_width, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSize_height(PyObject *, PyObject *);}
static PyObject *meth_QSize_height(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSize *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSize, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->height();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSize, sipName_height, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSize_setWidth(PyObject *, PyObject *);}
static PyObject *meth_QSize_setWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QSize *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QSize, &sipCpp, &a0))
        {
            sipCpp->setWidth(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSize, sipName_setWidth, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSize_setHeight(PyObject *, PyObject *);}
static PyObject *meth_QSize_setHeight(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QSize *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QSize, &sipCpp, &a0))
        {
            sipCpp->setHeight(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSize, sipName_setHeight, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSize_transpose(PyObject *, PyObject *);}
static PyObject *meth_QSize_transpose(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSize *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSize, &sipCpp))
        {
            sipCpp->transpose();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSize, sipName_transpose, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSize_scale(PyObject *, PyObject *);}
static PyObject *meth_QSize_scale(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        int a1;
        QSize::ScaleMode a2;
        QSize *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiiE", &sipSelf, sipType_QSize, &sipCpp, &a0, &a1, sipType_QSize_ScaleMode, &a2))
        {
            sipCpp->scale(a0,a1,a2);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QSize * a0;
        QSize::ScaleMode a1;
        QSize *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9E", &sipSelf, sipType_QSize, &sipCpp, sipType_QSize, &a0, sipType_QSize_ScaleMode, &a1))
        {
            sipCpp->scale(*a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSize, sipName_scale, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSize_expandedTo(PyObject *, PyObject *);}
static PyObject *meth_QSize_expandedTo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSize * a0;
        QSize *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QSize, &sipCpp, sipType_QSize, &a0))
        {
            QSize *sipRes;

            sipRes = new QSize(sipCpp->expandedTo(*a0));

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSize, sipName_expandedTo, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSize_boundedTo(PyObject *, PyObject *);}
static PyObject *meth_QSize_boundedTo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSize * a0;
        QSize *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QSize, &sipCpp, sipType_QSize, &a0))
        {
            QSize *sipRes;

            sipRes = new QSize(sipCpp->boundedTo(*a0));

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSize, sipName_boundedTo, NULL);

    return NULL;
}


extern "C" {static PyObject *slot_QSize___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QSize___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QSize *sipCpp = reinterpret_cast<QSize *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSize));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QSize * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QSize, &a0))
        {
            bool sipRes;

            sipRes = operator==((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_qt,eq_slot,sipType_QSize,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QSize___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QSize___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QSize *sipCpp = reinterpret_cast<QSize *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSize));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QSize * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QSize, &a0))
        {
            bool sipRes;

            sipRes = operator!=((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_qt,ne_slot,sipType_QSize,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QSize___add__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_QSize___add__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        const QSize * a0;
        const QSize * a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_QSize, &a0, sipType_QSize, &a1))
        {
            QSize *sipRes;

            sipRes = new QSize((*a0 + *a1));

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_qt,add_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QSize___sub__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_QSize___sub__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        const QSize * a0;
        const QSize * a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_QSize, &a0, sipType_QSize, &a1))
        {
            QSize *sipRes;

            sipRes = new QSize((*a0 - *a1));

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_qt,sub_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QSize___mul__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_QSize___mul__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        const QSize * a0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9Xi", sipType_QSize, &a0, &a1))
        {
            QSize *sipRes;

            sipRes = new QSize((*a0 * a1));

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    {
        const QSize * a0;
        double a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9d", sipType_QSize, &a0, &a1))
        {
            QSize *sipRes;

            sipRes = new QSize((*a0 * a1));

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_qt,mul_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QSize___div__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_QSize___div__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        const QSize * a0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9Xi", sipType_QSize, &a0, &a1))
        {
            QSize *sipRes;

            sipRes = new QSize((*a0 / a1));

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    {
        const QSize * a0;
        double a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9d", sipType_QSize, &a0, &a1))
        {
            QSize *sipRes;

            sipRes = new QSize((*a0 / a1));

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_qt,div_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static int slot_QSize___nonzero__(PyObject *sipSelf);}
static int slot_QSize___nonzero__(PyObject *sipSelf)
{
    QSize *sipCpp = reinterpret_cast<QSize *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSize));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 101 "/usr/share/sip/qt/qsize.sip"
		sipRes = sipCpp -> isValid();
#line 546 "sipqtQSize.cc"

            return sipRes;
        }
    }
}


extern "C" {static PyObject *slot_QSize___idiv__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QSize___idiv__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSize)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QSize *sipCpp = reinterpret_cast<QSize *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSize));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1Xi", &a0))
        {
            sipCpp->QSize::operator/=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    {
        double a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1d", &a0))
        {
            sipCpp->QSize::operator/=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QSize___imul__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QSize___imul__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSize)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QSize *sipCpp = reinterpret_cast<QSize *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSize));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1Xi", &a0))
        {
            sipCpp->QSize::operator*=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    {
        double a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1d", &a0))
        {
            sipCpp->QSize::operator*=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QSize___isub__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QSize___isub__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSize)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QSize *sipCpp = reinterpret_cast<QSize *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSize));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QSize * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QSize, &a0))
        {
            sipCpp->QSize::operator-=(*a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QSize___iadd__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QSize___iadd__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSize)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QSize *sipCpp = reinterpret_cast<QSize *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSize));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QSize * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QSize, &a0))
        {
            sipCpp->QSize::operator+=(*a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QSize(void *, const sipTypeDef *);}
static void *cast_QSize(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QSize)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSize(void *, int);}
static void release_QSize(void *sipCppV,int)
{
    delete reinterpret_cast<QSize *>(sipCppV);
}


extern "C" {static void assign_QSize(void *, SIP_SSIZE_T, const void *);}
static void assign_QSize(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QSize *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QSize *>(sipSrc);
}


extern "C" {static void *array_QSize(SIP_SSIZE_T);}
static void *array_QSize(SIP_SSIZE_T sipNrElem)
{
    return new QSize[sipNrElem];
}


extern "C" {static void *copy_QSize(const void *, SIP_SSIZE_T);}
static void *copy_QSize(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QSize(reinterpret_cast<const QSize *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QSize(sipSimpleWrapper *);}
static void dealloc_QSize(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QSize(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QSize(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QSize(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QSize *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QSize();

            return sipCpp;
        }
    }

    {
        int a0;
        int a1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "ii", &a0, &a1))
        {
            sipCpp = new QSize(a0,a1);

            return sipCpp;
        }
    }

    {
        const QSize * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QSize, &a0))
        {
            sipCpp = new QSize(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QSize[] = {
    {(void *)slot_QSize___eq__, eq_slot},
    {(void *)slot_QSize___ne__, ne_slot},
    {(void *)slot_QSize___add__, add_slot},
    {(void *)slot_QSize___sub__, sub_slot},
    {(void *)slot_QSize___mul__, mul_slot},
    {(void *)slot_QSize___div__, div_slot},
    {(void *)slot_QSize___nonzero__, bool_slot},
    {(void *)slot_QSize___idiv__, idiv_slot},
    {(void *)slot_QSize___imul__, imul_slot},
    {(void *)slot_QSize___isub__, isub_slot},
    {(void *)slot_QSize___iadd__, iadd_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QSize[] = {
    {SIP_MLNAME_CAST(sipName_boundedTo), meth_QSize_boundedTo, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_expandedTo), meth_QSize_expandedTo, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_height), meth_QSize_height, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isEmpty), meth_QSize_isEmpty, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QSize_isNull, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QSize_isValid, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_scale), meth_QSize_scale, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setHeight), meth_QSize_setHeight, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setWidth), meth_QSize_setWidth, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_transpose), meth_QSize_transpose, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_width), meth_QSize_width, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_QSize[] = {
    {sipName_ScaleFree, QSize::ScaleFree, 268},
    {sipName_ScaleMax, QSize::ScaleMax, 268},
    {sipName_ScaleMin, QSize::ScaleMin, 268},
};


pyqt3ClassTypeDef sipTypeDef_qt_QSize = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QSize,
        {0}
    },
    {
        sipNameNr_QSize,
        {0, 0, 1},
        11, methods_QSize,
        3, enummembers_QSize,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_qt_pyqtWrapperType,
    sipNameNr_qt_pyqtWrapper,
    0,
    slots_QSize,
    init_QSize,
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
    dealloc_QSize,
    assign_QSize,
    array_QSize,
    copy_QSize,
    release_QSize,
    cast_QSize,
    0,
    0,
    0
},
    0
};
