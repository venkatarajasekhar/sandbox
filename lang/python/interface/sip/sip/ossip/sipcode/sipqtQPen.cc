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

#line 72 "/usr/share/sip/qt/qpen.sip"
#include <qpen.h>
#line 31 "sipqtQPen.cc"

#line 37 "/usr/share/sip/qt/qnamespace.sip"
#include <qnamespace.h>
#line 35 "sipqtQPen.cc"
#line 125 "/usr/share/sip/qt/qcolor.sip"
#include <qcolor.h>
#line 38 "sipqtQPen.cc"


extern "C" {static PyObject *meth_QPen_style(PyObject *, PyObject *);}
static PyObject *meth_QPen_style(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QPen *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPen, &sipCpp))
        {
            Qt::PenStyle sipRes;

            sipRes = sipCpp->style();

            return sipConvertFromEnum(sipRes,sipType_Qt_PenStyle);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPen, sipName_style, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QPen_setStyle(PyObject *, PyObject *);}
static PyObject *meth_QPen_setStyle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::PenStyle a0;
        QPen *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QPen, &sipCpp, sipType_Qt_PenStyle, &a0))
        {
            sipCpp->setStyle(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPen, sipName_setStyle, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QPen_width(PyObject *, PyObject *);}
static PyObject *meth_QPen_width(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QPen *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPen, &sipCpp))
        {
            uint sipRes;

            sipRes = sipCpp->width();

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPen, sipName_width, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QPen_setWidth(PyObject *, PyObject *);}
static PyObject *meth_QPen_setWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        uint a0;
        QPen *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bu", &sipSelf, sipType_QPen, &sipCpp, &a0))
        {
            sipCpp->setWidth(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPen, sipName_setWidth, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QPen_color(PyObject *, PyObject *);}
static PyObject *meth_QPen_color(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QPen *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPen, &sipCpp))
        {
            QColor *sipRes;

            sipRes = new QColor(sipCpp->color());

            return sipConvertFromNewType(sipRes,sipType_QColor,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPen, sipName_color, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QPen_setColor(PyObject *, PyObject *);}
static PyObject *meth_QPen_setColor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QColor * a0;
        QPen *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QPen, &sipCpp, sipType_QColor, &a0))
        {
            sipCpp->setColor(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPen, sipName_setColor, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QPen_capStyle(PyObject *, PyObject *);}
static PyObject *meth_QPen_capStyle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QPen *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPen, &sipCpp))
        {
            Qt::PenCapStyle sipRes;

            sipRes = sipCpp->capStyle();

            return sipConvertFromEnum(sipRes,sipType_Qt_PenCapStyle);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPen, sipName_capStyle, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QPen_setCapStyle(PyObject *, PyObject *);}
static PyObject *meth_QPen_setCapStyle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::PenCapStyle a0;
        QPen *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QPen, &sipCpp, sipType_Qt_PenCapStyle, &a0))
        {
            sipCpp->setCapStyle(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPen, sipName_setCapStyle, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QPen_joinStyle(PyObject *, PyObject *);}
static PyObject *meth_QPen_joinStyle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QPen *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPen, &sipCpp))
        {
            Qt::PenJoinStyle sipRes;

            sipRes = sipCpp->joinStyle();

            return sipConvertFromEnum(sipRes,sipType_Qt_PenJoinStyle);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPen, sipName_joinStyle, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QPen_setJoinStyle(PyObject *, PyObject *);}
static PyObject *meth_QPen_setJoinStyle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::PenJoinStyle a0;
        QPen *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QPen, &sipCpp, sipType_Qt_PenJoinStyle, &a0))
        {
            sipCpp->setJoinStyle(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPen, sipName_setJoinStyle, NULL);

    return NULL;
}


extern "C" {static PyObject *slot_QPen___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QPen___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QPen *sipCpp = reinterpret_cast<QPen *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPen));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QPen * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QPen, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QPen::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_qt,ne_slot,sipType_QPen,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QPen___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QPen___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QPen *sipCpp = reinterpret_cast<QPen *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPen));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QPen * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QPen, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QPen::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_qt,eq_slot,sipType_QPen,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QPen(void *, const sipTypeDef *);}
static void *cast_QPen(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QPen)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_Qt)->ctd_cast((Qt *)(QPen *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPen(void *, int);}
static void release_QPen(void *sipCppV,int)
{
    delete reinterpret_cast<QPen *>(sipCppV);
}


extern "C" {static void assign_QPen(void *, SIP_SSIZE_T, const void *);}
static void assign_QPen(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QPen *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QPen *>(sipSrc);
}


extern "C" {static void *array_QPen(SIP_SSIZE_T);}
static void *array_QPen(SIP_SSIZE_T sipNrElem)
{
    return new QPen[sipNrElem];
}


extern "C" {static void *copy_QPen(const void *, SIP_SSIZE_T);}
static void *copy_QPen(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QPen(reinterpret_cast<const QPen *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QPen(sipSimpleWrapper *);}
static void dealloc_QPen(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QPen(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QPen(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QPen(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QPen *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QPen();

            return sipCpp;
        }
    }

    {
        Qt::PenStyle a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "E", sipType_Qt_PenStyle, &a0))
        {
            sipCpp = new QPen(a0);

            return sipCpp;
        }
    }

    {
        const QColor * a0;
        uint a1 = 0;
        Qt::PenStyle a2 = Qt::SolidLine;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9|uE", sipType_QColor, &a0, &a1, sipType_Qt_PenStyle, &a2))
        {
            sipCpp = new QPen(*a0,a1,a2);

            return sipCpp;
        }
    }

    {
        const QColor * a0;
        uint a1;
        Qt::PenStyle a2;
        Qt::PenCapStyle a3;
        Qt::PenJoinStyle a4;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9uEEE", sipType_QColor, &a0, &a1, sipType_Qt_PenStyle, &a2, sipType_Qt_PenCapStyle, &a3, sipType_Qt_PenJoinStyle, &a4))
        {
            sipCpp = new QPen(*a0,a1,a2,a3,a4);

            return sipCpp;
        }
    }

    {
        const QPen * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QPen, &a0))
        {
            sipCpp = new QPen(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QPen[] = {{396, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_QPen[] = {
    {(void *)slot_QPen___ne__, ne_slot},
    {(void *)slot_QPen___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QPen[] = {
    {SIP_MLNAME_CAST(sipName_capStyle), meth_QPen_capStyle, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_color), meth_QPen_color, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_joinStyle), meth_QPen_joinStyle, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setCapStyle), meth_QPen_setCapStyle, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setColor), meth_QPen_setColor, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setJoinStyle), meth_QPen_setJoinStyle, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setStyle), meth_QPen_setStyle, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setWidth), meth_QPen_setWidth, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_style), meth_QPen_style, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_width), meth_QPen_width, METH_VARARGS, NULL}
};


pyqt3ClassTypeDef sipTypeDef_qt_QPen = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QPen,
        {0}
    },
    {
        sipNameNr_QPen,
        {0, 0, 1},
        10, methods_QPen,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QPen,
    slots_QPen,
    init_QPen,
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
    dealloc_QPen,
    assign_QPen,
    array_QPen,
    copy_QPen,
    release_QPen,
    cast_QPen,
    0,
    0,
    0
},
    0
};
