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

#line 37 "/usr/share/sip/qt/qlibrary.sip"
#include <qlibrary.h>
#line 31 "sipqtQLibrary.cc"

#line 449 "/usr/share/sip/qt/qstring.sip"
#include <qstring.h>
#line 35 "sipqtQLibrary.cc"


class sipQLibrary : public QLibrary
{
public:
    sipQLibrary(const QString&);
    virtual ~sipQLibrary();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool unload();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQLibrary(const sipQLibrary &);
    sipQLibrary &operator = (const sipQLibrary &);

    char sipPyMethods[1];
};

sipQLibrary::sipQLibrary(const QString& a0): QLibrary(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQLibrary::~sipQLibrary()
{
    sipCommonDtor(sipPySelf);
}

bool sipQLibrary::unload()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_unload);

    if (!meth)
        return QLibrary::unload();

    extern bool sipVH_qt_42(sip_gilstate_t,PyObject *);

    return sipVH_qt_42(sipGILState,meth);
}


extern "C" {static PyObject *meth_QLibrary_resolve(PyObject *, PyObject *);}
static PyObject *meth_QLibrary_resolve(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const char * a0;
        QLibrary *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bs", &sipSelf, sipType_QLibrary, &sipCpp, &a0))
        {
            void *sipRes;

            sipRes = sipCpp->resolve(a0);

            return sipConvertFromVoidPtr(sipRes);
        }
    }

    {
        const QString * a0;
        int a0State = 0;
        const char * a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1s", sipType_QString, &a0, &a0State, &a1))
        {
            void *sipRes;

            sipRes = QLibrary::resolve(*a0,a1);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromVoidPtr(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLibrary, sipName_resolve, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QLibrary_load(PyObject *, PyObject *);}
static PyObject *meth_QLibrary_load(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QLibrary *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLibrary, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->load();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLibrary, sipName_load, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QLibrary_unload(PyObject *, PyObject *);}
static PyObject *meth_QLibrary_unload(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QLibrary *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLibrary, &sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QLibrary::unload() : sipCpp->unload());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLibrary, sipName_unload, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QLibrary_isLoaded(PyObject *, PyObject *);}
static PyObject *meth_QLibrary_isLoaded(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QLibrary *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLibrary, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isLoaded();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLibrary, sipName_isLoaded, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QLibrary_autoUnload(PyObject *, PyObject *);}
static PyObject *meth_QLibrary_autoUnload(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QLibrary *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLibrary, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->autoUnload();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLibrary, sipName_autoUnload, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QLibrary_setAutoUnload(PyObject *, PyObject *);}
static PyObject *meth_QLibrary_setAutoUnload(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        QLibrary *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QLibrary, &sipCpp, &a0))
        {
            sipCpp->setAutoUnload(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLibrary, sipName_setAutoUnload, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QLibrary_library(PyObject *, PyObject *);}
static PyObject *meth_QLibrary_library(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QLibrary *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLibrary, &sipCpp))
        {
            QString *sipRes;

            sipRes = new QString(sipCpp->library());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLibrary, sipName_library, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QLibrary(void *, const sipTypeDef *);}
static void *cast_QLibrary(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QLibrary)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QLibrary(void *, int);}
static void release_QLibrary(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQLibrary *>(sipCppV);
    else
        delete reinterpret_cast<QLibrary *>(sipCppV);
}


extern "C" {static void dealloc_QLibrary(sipSimpleWrapper *);}
static void dealloc_QLibrary(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQLibrary *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QLibrary(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QLibrary(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QLibrary(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQLibrary *sipCpp = 0;

    {
        const QString * a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QString, &a0, &a0State))
        {
            sipCpp = new sipQLibrary(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QLibrary[] = {
    {SIP_MLNAME_CAST(sipName_autoUnload), meth_QLibrary_autoUnload, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isLoaded), meth_QLibrary_isLoaded, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_library), meth_QLibrary_library, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_load), meth_QLibrary_load, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_resolve), meth_QLibrary_resolve, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setAutoUnload), meth_QLibrary_setAutoUnload, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_unload), meth_QLibrary_unload, METH_VARARGS, NULL}
};


pyqt3ClassTypeDef sipTypeDef_qt_QLibrary = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QLibrary,
        {0}
    },
    {
        sipNameNr_QLibrary,
        {0, 0, 1},
        7, methods_QLibrary,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_qt_pyqtWrapperType,
    sipNameNr_qt_pyqtWrapper,
    0,
    0,
    init_QLibrary,
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
    dealloc_QLibrary,
    0,
    0,
    0,
    release_QLibrary,
    cast_QLibrary,
    0,
    0,
    0
},
    0
};
