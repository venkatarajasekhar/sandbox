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

#line 51 "/usr/share/sip/qt/qpicture.sip"
#include <qpicture.h>
#line 31 "sipqtQPicture.cc"

#line 93 "/usr/share/sip/qt/qrect.sip"
#include <qrect.h>
#line 35 "sipqtQPicture.cc"
#line 83 "/usr/share/sip/qt/qiodevice.sip"
#include <qiodevice.h>
#line 38 "sipqtQPicture.cc"
#line 449 "/usr/share/sip/qt/qstring.sip"
#include <qstring.h>
#line 41 "sipqtQPicture.cc"
#line 357 "/usr/share/sip/qt/qpainter.sip"
#include <qpainter.h>
#line 44 "sipqtQPicture.cc"


class sipQPicture : public QPicture
{
public:
    sipQPicture(int);
    sipQPicture(const QPicture&);
    virtual ~sipQPicture();

    /*
     * There is a public method for every protected method visible from
     * this class.
     */
    void sipProtect_detach();
    QPicture sipProtect_copy() const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void setData(const char *,unsigned);
    void setResolution(int);
    int resolution() const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQPicture(const sipQPicture &);
    sipQPicture &operator = (const sipQPicture &);

    char sipPyMethods[3];
};

sipQPicture::sipQPicture(int a0): QPicture(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQPicture::sipQPicture(const QPicture& a0): QPicture(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQPicture::~sipQPicture()
{
    sipCommonDtor(sipPySelf);
}

void sipQPicture::setData(const char *a0,unsigned a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_setData);

    if (!meth)
    {
        QPicture::setData(a0,a1);
        return;
    }

    extern void sipVH_qt_169(sip_gilstate_t,PyObject *,const char *,unsigned);

    sipVH_qt_169(sipGILState,meth,a0,a1);
}

void sipQPicture::setResolution(int a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_setResolution);

    if (!meth)
    {
        QPaintDevice::setResolution(a0);
        return;
    }

    extern void sipVH_qt_68(sip_gilstate_t,PyObject *,int);

    sipVH_qt_68(sipGILState,meth,a0);
}

int sipQPicture::resolution() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,NULL,sipName_resolution);

    if (!meth)
        return QPaintDevice::resolution();

    extern int sipVH_qt_106(sip_gilstate_t,PyObject *);

    return sipVH_qt_106(sipGILState,meth);
}

void sipQPicture::sipProtect_detach()
{
    QPicture::detach();
}

QPicture sipQPicture::sipProtect_copy() const
{
    return QPicture::copy();
}


extern "C" {static PyObject *meth_QPicture_isNull(PyObject *, PyObject *);}
static PyObject *meth_QPicture_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QPicture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPicture, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isNull();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPicture, sipName_isNull, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QPicture_size(PyObject *, PyObject *);}
static PyObject *meth_QPicture_size(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QPicture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPicture, &sipCpp))
        {
            uint sipRes;

            sipRes = sipCpp->size();

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPicture, sipName_size, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QPicture_setData(PyObject *, PyObject *);}
static PyObject *meth_QPicture_setData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const char * a0;
        SIP_SSIZE_T a1;
        QPicture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bk", &sipSelf, sipType_QPicture, &sipCpp, &a0, &a1))
        {
            (sipSelfWasArg ? sipCpp->QPicture::setData(a0,(unsigned)a1) : sipCpp->setData(a0,(unsigned)a1));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPicture, sipName_setData, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QPicture_play(PyObject *, PyObject *);}
static PyObject *meth_QPicture_play(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QPainter * a0;
        QPicture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QPicture, &sipCpp, sipType_QPainter, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->play(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPicture, sipName_play, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QPicture_load(PyObject *, PyObject *);}
static PyObject *meth_QPicture_load(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QIODevice * a0;
        const char * a1 = 0;
        QPicture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8|s", &sipSelf, sipType_QPicture, &sipCpp, sipType_QIODevice, &a0, &a1))
        {
            bool sipRes;

            sipRes = sipCpp->load(a0,a1);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const QString * a0;
        int a0State = 0;
        const char * a1 = 0;
        QPicture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1|s", &sipSelf, sipType_QPicture, &sipCpp, sipType_QString, &a0, &a0State, &a1))
        {
            bool sipRes;

            sipRes = sipCpp->load(*a0,a1);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPicture, sipName_load, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QPicture_save(PyObject *, PyObject *);}
static PyObject *meth_QPicture_save(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QIODevice * a0;
        const char * a1 = 0;
        QPicture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8|s", &sipSelf, sipType_QPicture, &sipCpp, sipType_QIODevice, &a0, &a1))
        {
            bool sipRes;

            sipRes = sipCpp->save(a0,a1);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const QString * a0;
        int a0State = 0;
        const char * a1 = 0;
        QPicture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1|s", &sipSelf, sipType_QPicture, &sipCpp, sipType_QString, &a0, &a0State, &a1))
        {
            bool sipRes;

            sipRes = sipCpp->save(*a0,a1);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPicture, sipName_save, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QPicture_boundingRect(PyObject *, PyObject *);}
static PyObject *meth_QPicture_boundingRect(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QPicture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPicture, &sipCpp))
        {
            QRect *sipRes;

            sipRes = new QRect(sipCpp->boundingRect());

            return sipConvertFromNewType(sipRes,sipType_QRect,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPicture, sipName_boundingRect, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QPicture_setBoundingRect(PyObject *, PyObject *);}
static PyObject *meth_QPicture_setBoundingRect(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRect * a0;
        QPicture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QPicture, &sipCpp, sipType_QRect, &a0))
        {
            sipCpp->setBoundingRect(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPicture, sipName_setBoundingRect, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QPicture_detach(PyObject *, PyObject *);}
static PyObject *meth_QPicture_detach(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        sipQPicture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPicture, &sipCpp))
        {
            sipCpp->sipProtect_detach();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPicture, sipName_detach, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QPicture_copy(PyObject *, PyObject *);}
static PyObject *meth_QPicture_copy(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        sipQPicture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPicture, &sipCpp))
        {
            QPicture *sipRes;

            sipRes = new QPicture(sipCpp->sipProtect_copy());

            return sipConvertFromNewType(sipRes,sipType_QPicture,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPicture, sipName_copy, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QPicture(void *, const sipTypeDef *);}
static void *cast_QPicture(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QPicture)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QPaintDevice)->ctd_cast((QPaintDevice *)(QPicture *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPicture(void *, int);}
static void release_QPicture(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQPicture *>(sipCppV);
    else
        delete reinterpret_cast<QPicture *>(sipCppV);
}


extern "C" {static void dealloc_QPicture(sipSimpleWrapper *);}
static void dealloc_QPicture(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQPicture *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QPicture(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QPicture(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QPicture(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQPicture *sipCpp = 0;

    {
        int a0 = -1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "|i", &a0))
        {
            sipCpp = new sipQPicture(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QPicture * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QPicture, &a0))
        {
            sipCpp = new sipQPicture(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QPicture[] = {{205, 255, 1}};


static PyMethodDef methods_QPicture[] = {
    {SIP_MLNAME_CAST(sipName_boundingRect), meth_QPicture_boundingRect, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_copy), meth_QPicture_copy, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_detach), meth_QPicture_detach, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QPicture_isNull, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_load), meth_QPicture_load, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_play), meth_QPicture_play, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_save), meth_QPicture_save, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setBoundingRect), meth_QPicture_setBoundingRect, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setData), meth_QPicture_setData, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_size), meth_QPicture_size, METH_VARARGS, NULL}
};


pyqt3ClassTypeDef sipTypeDef_qt_QPicture = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QPicture,
        {0}
    },
    {
        sipNameNr_QPicture,
        {0, 0, 1},
        10, methods_QPicture,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QPicture,
    0,
    init_QPicture,
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
    dealloc_QPicture,
    0,
    0,
    0,
    release_QPicture,
    cast_QPicture,
    0,
    0,
    0
},
    0
};
