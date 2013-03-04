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

#line 35 "/usr/share/sip/qt/qbitmap.sip"
#include <qbitmap.h>
#line 31 "sipqtQBitmap.cc"

#line 159 "/usr/share/sip/qt/qpixmap.sip"
#include <qpixmap.h>
#line 35 "sipqtQBitmap.cc"
#line 57 "/usr/share/sip/qt/qsize.sip"
#include <qsize.h>
#line 38 "sipqtQBitmap.cc"
#line 449 "/usr/share/sip/qt/qstring.sip"
#include <qstring.h>
#line 41 "sipqtQBitmap.cc"
#line 84 "/usr/share/sip/qt/qwmatrix.sip"
#include <qwmatrix.h>
#line 44 "sipqtQBitmap.cc"
#line 83 "/usr/share/sip/qt/qiodevice.sip"
#include <qiodevice.h>
#line 47 "sipqtQBitmap.cc"
#line 98 "/usr/share/sip/qt/qbytearray.sip"
#include <qstring.h>
#line 50 "sipqtQBitmap.cc"
#line 139 "/usr/share/sip/qt/qimage.sip"
#include <qimage.h>
#line 53 "sipqtQBitmap.cc"
#line 63 "/usr/share/sip/qt/qwidget.sip"
#include <qwidget.h>
#line 56 "sipqtQBitmap.cc"
#line 125 "/usr/share/sip/qt/qcolor.sip"
#include <qcolor.h>
#line 59 "sipqtQBitmap.cc"
#line 57 "/usr/share/sip/qt/qpoint.sip"
#include <qpoint.h>
#line 62 "sipqtQBitmap.cc"
#line 93 "/usr/share/sip/qt/qrect.sip"
#include <qrect.h>
#line 65 "sipqtQBitmap.cc"


class sipQBitmap : public QBitmap
{
public:
    sipQBitmap();
    sipQBitmap(int,int,bool,QPixmap::Optimization);
    sipQBitmap(const QSize&,bool,QPixmap::Optimization);
    sipQBitmap(int,int,uchar *,bool);
    sipQBitmap(const QSize&,uchar *,bool);
    sipQBitmap(const QBitmap&);
    sipQBitmap(const QString&,const char *);
    virtual ~sipQBitmap();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void detach();
    void setResolution(int);
    int resolution() const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQBitmap(const sipQBitmap &);
    sipQBitmap &operator = (const sipQBitmap &);

    char sipPyMethods[3];
};

sipQBitmap::sipQBitmap(): QBitmap(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQBitmap::sipQBitmap(int a0,int a1,bool a2,QPixmap::Optimization a3): QBitmap(a0,a1,a2,a3), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQBitmap::sipQBitmap(const QSize& a0,bool a1,QPixmap::Optimization a2): QBitmap(a0,a1,a2), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQBitmap::sipQBitmap(int a0,int a1,uchar *a2,bool a3): QBitmap(a0,a1,a2,a3), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQBitmap::sipQBitmap(const QSize& a0,uchar *a1,bool a2): QBitmap(a0,a1,a2), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQBitmap::sipQBitmap(const QBitmap& a0): QBitmap(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQBitmap::sipQBitmap(const QString& a0,const char *a1): QBitmap(a0,a1), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQBitmap::~sipQBitmap()
{
    sipCommonDtor(sipPySelf);
}

void sipQBitmap::detach()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_detach);

    if (!meth)
    {
        QPixmap::detach();
        return;
    }

    extern void sipVH_qt_2(sip_gilstate_t,PyObject *);

    sipVH_qt_2(sipGILState,meth);
}

void sipQBitmap::setResolution(int a0)
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

int sipQBitmap::resolution() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,NULL,sipName_resolution);

    if (!meth)
        return QPaintDevice::resolution();

    extern int sipVH_qt_106(sip_gilstate_t,PyObject *);

    return sipVH_qt_106(sipGILState,meth);
}


extern "C" {static PyObject *meth_QBitmap_xForm(PyObject *, PyObject *);}
static PyObject *meth_QBitmap_xForm(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWMatrix * a0;
        QBitmap *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QBitmap, &sipCpp, sipType_QWMatrix, &a0))
        {
            QBitmap *sipRes;

            sipRes = new QBitmap(sipCpp->xForm(*a0));

            return sipConvertFromNewType(sipRes,sipType_QBitmap,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBitmap, sipName_xForm, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QBitmap(void *, const sipTypeDef *);}
static void *cast_QBitmap(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QBitmap)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QPixmap)->ctd_cast((QPixmap *)(QBitmap *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QBitmap(void *, int);}
static void release_QBitmap(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQBitmap *>(sipCppV);
    else
        delete reinterpret_cast<QBitmap *>(sipCppV);
}


extern "C" {static void assign_QBitmap(void *, SIP_SSIZE_T, const void *);}
static void assign_QBitmap(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QBitmap *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QBitmap *>(sipSrc);
}


extern "C" {static void *array_QBitmap(SIP_SSIZE_T);}
static void *array_QBitmap(SIP_SSIZE_T sipNrElem)
{
    return new QBitmap[sipNrElem];
}


extern "C" {static void *copy_QBitmap(const void *, SIP_SSIZE_T);}
static void *copy_QBitmap(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QBitmap(reinterpret_cast<const QBitmap *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QBitmap(sipSimpleWrapper *);}
static void dealloc_QBitmap(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQBitmap *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QBitmap(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QBitmap(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QBitmap(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQBitmap *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQBitmap();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        int a0;
        int a1;
        bool a2 = 0;
        QPixmap::Optimization a3 = QPixmap::DefaultOptim;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "ii|bE", &a0, &a1, &a2, sipType_QPixmap_Optimization, &a3))
        {
            sipCpp = new sipQBitmap(a0,a1,a2,a3);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QSize * a0;
        bool a1 = 0;
        QPixmap::Optimization a2 = QPixmap::DefaultOptim;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9|bE", sipType_QSize, &a0, &a1, sipType_QPixmap_Optimization, &a2))
        {
            sipCpp = new sipQBitmap(*a0,a1,a2);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        int a0;
        int a1;
        uchar * a2;
        bool a3 = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "iis|b", &a0, &a1, &a2, &a3))
        {
            sipCpp = new sipQBitmap(a0,a1,a2,a3);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QSize * a0;
        uchar * a1;
        bool a2 = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9s|b", sipType_QSize, &a0, &a1, &a2))
        {
            sipCpp = new sipQBitmap(*a0,a1,a2);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QBitmap * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QBitmap, &a0))
        {
            sipCpp = new sipQBitmap(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QString * a0;
        int a0State = 0;
        const char * a1 = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1|s", sipType_QString, &a0, &a0State, &a1))
        {
            sipCpp = new sipQBitmap(*a0,a1);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QBitmap[] = {{217, 255, 1}};


static PyMethodDef methods_QBitmap[] = {
    {SIP_MLNAME_CAST(sipName_xForm), meth_QBitmap_xForm, METH_VARARGS, NULL}
};


pyqt3ClassTypeDef sipTypeDef_qt_QBitmap = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QBitmap,
        {0}
    },
    {
        sipNameNr_QBitmap,
        {0, 0, 1},
        1, methods_QBitmap,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QBitmap,
    0,
    init_QBitmap,
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
    dealloc_QBitmap,
    assign_QBitmap,
    array_QBitmap,
    copy_QBitmap,
    release_QBitmap,
    cast_QBitmap,
    0,
    0,
    0
},
    0
};
