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

#line 37 "/usr/share/sip/qt/qpixmapcache.sip"
#include <qpixmapcache.h>
#line 31 "sipqtQPixmapCache.cc"

#line 449 "/usr/share/sip/qt/qstring.sip"
#include <qstring.h>
#line 35 "sipqtQPixmapCache.cc"
#line 159 "/usr/share/sip/qt/qpixmap.sip"
#include <qpixmap.h>
#line 38 "sipqtQPixmapCache.cc"


extern "C" {static PyObject *meth_QPixmapCache_cacheLimit(PyObject *, PyObject *);}
static PyObject *meth_QPixmapCache_cacheLimit(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            int sipRes;

            sipRes = QPixmapCache::cacheLimit();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPixmapCache, sipName_cacheLimit, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QPixmapCache_setCacheLimit(PyObject *, PyObject *);}
static PyObject *meth_QPixmapCache_setCacheLimit(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "i", &a0))
        {
            QPixmapCache::setCacheLimit(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPixmapCache, sipName_setCacheLimit, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QPixmapCache_find(PyObject *, PyObject *);}
static PyObject *meth_QPixmapCache_find(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QString, &a0, &a0State))
        {
            QPixmap *sipRes;

            sipRes = QPixmapCache::find(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromType(sipRes,sipType_QPixmap,NULL);
        }
    }

    {
        const QString * a0;
        int a0State = 0;
        QPixmap * a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1J9", sipType_QString, &a0, &a0State, sipType_QPixmap, &a1))
        {
            bool sipRes;

            sipRes = QPixmapCache::find(*a0,*a1);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPixmapCache, sipName_find, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QPixmapCache_insert(PyObject *, PyObject *);}
static PyObject *meth_QPixmapCache_insert(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        const QPixmap * a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1J9", sipType_QString, &a0, &a0State, sipType_QPixmap, &a1))
        {
            bool sipRes;

            sipRes = QPixmapCache::insert(*a0,*a1);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPixmapCache, sipName_insert, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QPixmapCache_remove(PyObject *, PyObject *);}
static PyObject *meth_QPixmapCache_remove(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QString, &a0, &a0State))
        {
            QPixmapCache::remove(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPixmapCache, sipName_remove, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QPixmapCache_clear(PyObject *, PyObject *);}
static PyObject *meth_QPixmapCache_clear(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QPixmapCache::clear();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPixmapCache, sipName_clear, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QPixmapCache(void *, const sipTypeDef *);}
static void *cast_QPixmapCache(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QPixmapCache)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPixmapCache(void *, int);}
static void release_QPixmapCache(void *sipCppV,int)
{
    delete reinterpret_cast<QPixmapCache *>(sipCppV);
}


extern "C" {static void assign_QPixmapCache(void *, SIP_SSIZE_T, const void *);}
static void assign_QPixmapCache(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QPixmapCache *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QPixmapCache *>(sipSrc);
}


extern "C" {static void *array_QPixmapCache(SIP_SSIZE_T);}
static void *array_QPixmapCache(SIP_SSIZE_T sipNrElem)
{
    return new QPixmapCache[sipNrElem];
}


extern "C" {static void *copy_QPixmapCache(const void *, SIP_SSIZE_T);}
static void *copy_QPixmapCache(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QPixmapCache(reinterpret_cast<const QPixmapCache *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QPixmapCache(sipSimpleWrapper *);}
static void dealloc_QPixmapCache(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QPixmapCache(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QPixmapCache(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QPixmapCache(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QPixmapCache *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QPixmapCache();

            return sipCpp;
        }
    }

    {
        const QPixmapCache * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QPixmapCache, &a0))
        {
            sipCpp = new QPixmapCache(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QPixmapCache[] = {
    {SIP_MLNAME_CAST(sipName_cacheLimit), meth_QPixmapCache_cacheLimit, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_clear), meth_QPixmapCache_clear, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_find), meth_QPixmapCache_find, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_insert), meth_QPixmapCache_insert, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_remove), meth_QPixmapCache_remove, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setCacheLimit), meth_QPixmapCache_setCacheLimit, METH_VARARGS, NULL}
};


pyqt3ClassTypeDef sipTypeDef_qt_QPixmapCache = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QPixmapCache,
        {0}
    },
    {
        sipNameNr_QPixmapCache,
        {0, 0, 1},
        6, methods_QPixmapCache,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_qt_pyqtWrapperType,
    sipNameNr_qt_pyqtWrapper,
    0,
    0,
    init_QPixmapCache,
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
    dealloc_QPixmapCache,
    assign_QPixmapCache,
    array_QPixmapCache,
    copy_QPixmapCache,
    release_QPixmapCache,
    cast_QPixmapCache,
    0,
    0,
    0
},
    0
};