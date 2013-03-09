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

#line 114 "/usr/share/sip/qt/qtooltip.sip"
#include <qtooltip.h>
#line 31 "sipqtQToolTip.cc"

#line 63 "/usr/share/sip/qt/qwidget.sip"
#include <qwidget.h>
#line 35 "sipqtQToolTip.cc"
#line 41 "/usr/share/sip/qt/qtooltip.sip"
#include <qtooltip.h>
#line 38 "sipqtQToolTip.cc"
#line 93 "/usr/share/sip/qt/qrect.sip"
#include <qrect.h>
#line 41 "sipqtQToolTip.cc"
#line 449 "/usr/share/sip/qt/qstring.sip"
#include <qstring.h>
#line 44 "sipqtQToolTip.cc"
#line 57 "/usr/share/sip/qt/qpoint.sip"
#include <qpoint.h>
#line 47 "sipqtQToolTip.cc"
#line 36 "/usr/share/sip/qt/qpalette.sip"
#include <qpalette.h>
#line 50 "sipqtQToolTip.cc"
#line 36 "/usr/share/sip/qt/qfont.sip"
#include <qfont.h>
#line 53 "sipqtQToolTip.cc"


class sipQToolTip : public QToolTip
{
public:
    sipQToolTip(QWidget *,QToolTipGroup *);
    sipQToolTip(const QToolTip&);
    virtual ~sipQToolTip();

    /*
     * There is a public method for every protected method visible from
     * this class.
     */
    void sipProtect_maybeTip(const QPoint&);
    void sipProtect_tip(const QRect&,const QString&);
    void sipProtect_tip(const QRect&,const QString&,const QString&);
    void sipProtect_tip(const QRect&,const QString&,const QRect&);
    void sipProtect_tip(const QRect&,const QString&,const QString&,const QRect&);
    void sipProtect_clear();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void maybeTip(const QPoint&);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQToolTip(const sipQToolTip &);
    sipQToolTip &operator = (const sipQToolTip &);

    char sipPyMethods[1];
};

sipQToolTip::sipQToolTip(QWidget *a0,QToolTipGroup *a1): QToolTip(a0,a1), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQToolTip::sipQToolTip(const QToolTip& a0): QToolTip(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQToolTip::~sipQToolTip()
{
    sipCommonDtor(sipPySelf);
}

void sipQToolTip::maybeTip(const QPoint& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_QToolTip,sipName_maybeTip);

    if (!meth)
        return;

    extern void sipVH_qt_71(sip_gilstate_t,PyObject *,const QPoint&);

    sipVH_qt_71(sipGILState,meth,a0);
}

void sipQToolTip::sipProtect_maybeTip(const QPoint& a0)
{
    maybeTip(a0);
}

void sipQToolTip::sipProtect_tip(const QRect& a0,const QString& a1)
{
    QToolTip::tip(a0,a1);
}

void sipQToolTip::sipProtect_tip(const QRect& a0,const QString& a1,const QString& a2)
{
    QToolTip::tip(a0,a1,a2);
}

void sipQToolTip::sipProtect_tip(const QRect& a0,const QString& a1,const QRect& a2)
{
    QToolTip::tip(a0,a1,a2);
}

void sipQToolTip::sipProtect_tip(const QRect& a0,const QString& a1,const QString& a2,const QRect& a3)
{
    QToolTip::tip(a0,a1,a2,a3);
}

void sipQToolTip::sipProtect_clear()
{
    QToolTip::clear();
}


extern "C" {static PyObject *meth_QToolTip_add(PyObject *, PyObject *);}
static PyObject *meth_QToolTip_add(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWidget * a0;
        const QString * a1;
        int a1State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8J1", sipType_QWidget, &a0, sipType_QString, &a1, &a1State))
        {
            QToolTip::add(a0,*a1);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        QWidget * a0;
        const QString * a1;
        int a1State = 0;
        QToolTipGroup * a2;
        const QString * a3;
        int a3State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8J1J8J1", sipType_QWidget, &a0, sipType_QString, &a1, &a1State, sipType_QToolTipGroup, &a2, sipType_QString, &a3, &a3State))
        {
            QToolTip::add(a0,*a1,a2,*a3);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);
            sipReleaseType(const_cast<QString *>(a3),sipType_QString,a3State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        QWidget * a0;
        const QRect * a1;
        const QString * a2;
        int a2State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8J9J1", sipType_QWidget, &a0, sipType_QRect, &a1, sipType_QString, &a2, &a2State))
        {
            QToolTip::add(a0,*a1,*a2);
            sipReleaseType(const_cast<QString *>(a2),sipType_QString,a2State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        QWidget * a0;
        const QRect * a1;
        const QString * a2;
        int a2State = 0;
        QToolTipGroup * a3;
        const QString * a4;
        int a4State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8J9J1J8J1", sipType_QWidget, &a0, sipType_QRect, &a1, sipType_QString, &a2, &a2State, sipType_QToolTipGroup, &a3, sipType_QString, &a4, &a4State))
        {
            QToolTip::add(a0,*a1,*a2,a3,*a4);
            sipReleaseType(const_cast<QString *>(a2),sipType_QString,a2State);
            sipReleaseType(const_cast<QString *>(a4),sipType_QString,a4State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QToolTip, sipName_add, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QToolTip_remove(PyObject *, PyObject *);}
static PyObject *meth_QToolTip_remove(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWidget * a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8", sipType_QWidget, &a0))
        {
            QToolTip::remove(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        QWidget * a0;
        const QRect * a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8J9", sipType_QWidget, &a0, sipType_QRect, &a1))
        {
            QToolTip::remove(a0,*a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QToolTip, sipName_remove, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QToolTip_textFor(PyObject *, PyObject *);}
static PyObject *meth_QToolTip_textFor(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWidget * a0;
        const QPoint& a1def = QPoint();
        const QPoint * a1 = &a1def;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8|J9", sipType_QWidget, &a0, sipType_QPoint, &a1))
        {
            QString *sipRes;

            sipRes = new QString(QToolTip::textFor(a0,*a1));

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QToolTip, sipName_textFor, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QToolTip_hide(PyObject *, PyObject *);}
static PyObject *meth_QToolTip_hide(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QToolTip::hide();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QToolTip, sipName_hide, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QToolTip_font(PyObject *, PyObject *);}
static PyObject *meth_QToolTip_font(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QFont *sipRes;

            sipRes = new QFont(QToolTip::font());

            return sipConvertFromNewType(sipRes,sipType_QFont,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QToolTip, sipName_font, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QToolTip_setFont(PyObject *, PyObject *);}
static PyObject *meth_QToolTip_setFont(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QFont * a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J9", sipType_QFont, &a0))
        {
            QToolTip::setFont(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QToolTip, sipName_setFont, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QToolTip_palette(PyObject *, PyObject *);}
static PyObject *meth_QToolTip_palette(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QPalette *sipRes;

            sipRes = new QPalette(QToolTip::palette());

            return sipConvertFromNewType(sipRes,sipType_QPalette,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QToolTip, sipName_palette, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QToolTip_setPalette(PyObject *, PyObject *);}
static PyObject *meth_QToolTip_setPalette(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPalette * a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J9", sipType_QPalette, &a0))
        {
            QToolTip::setPalette(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QToolTip, sipName_setPalette, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QToolTip_setGloballyEnabled(PyObject *, PyObject *);}
static PyObject *meth_QToolTip_setGloballyEnabled(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "b", &a0))
        {
            QToolTip::setGloballyEnabled(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QToolTip, sipName_setGloballyEnabled, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QToolTip_isGloballyEnabled(PyObject *, PyObject *);}
static PyObject *meth_QToolTip_isGloballyEnabled(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            bool sipRes;

            sipRes = QToolTip::isGloballyEnabled();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QToolTip, sipName_isGloballyEnabled, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QToolTip_setWakeUpDelay(PyObject *, PyObject *);}
static PyObject *meth_QToolTip_setWakeUpDelay(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "i", &a0))
        {
            QToolTip::setWakeUpDelay(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QToolTip, sipName_setWakeUpDelay, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QToolTip_parentWidget(PyObject *, PyObject *);}
static PyObject *meth_QToolTip_parentWidget(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QToolTip *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QToolTip, &sipCpp))
        {
            QWidget *sipRes;

            sipRes = sipCpp->parentWidget();

            return sipConvertFromType(sipRes,sipType_QWidget,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QToolTip, sipName_parentWidget, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QToolTip_group(PyObject *, PyObject *);}
static PyObject *meth_QToolTip_group(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QToolTip *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QToolTip, &sipCpp))
        {
            QToolTipGroup *sipRes;

            sipRes = sipCpp->group();

            return sipConvertFromType(sipRes,sipType_QToolTipGroup,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QToolTip, sipName_group, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QToolTip_maybeTip(PyObject *, PyObject *);}
static PyObject *meth_QToolTip_maybeTip(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QPoint * a0;
        sipQToolTip *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QToolTip, &sipCpp, sipType_QPoint, &a0))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QToolTip, sipName_maybeTip);
                return NULL;
            }

            sipCpp->sipProtect_maybeTip(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QToolTip, sipName_maybeTip, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QToolTip_tip(PyObject *, PyObject *);}
static PyObject *meth_QToolTip_tip(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRect * a0;
        const QString * a1;
        int a1State = 0;
        sipQToolTip *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9J1", &sipSelf, sipType_QToolTip, &sipCpp, sipType_QRect, &a0, sipType_QString, &a1, &a1State))
        {
            sipCpp->sipProtect_tip(*a0,*a1);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QRect * a0;
        const QString * a1;
        int a1State = 0;
        const QString * a2;
        int a2State = 0;
        sipQToolTip *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9J1J1", &sipSelf, sipType_QToolTip, &sipCpp, sipType_QRect, &a0, sipType_QString, &a1, &a1State, sipType_QString, &a2, &a2State))
        {
            sipCpp->sipProtect_tip(*a0,*a1,*a2);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);
            sipReleaseType(const_cast<QString *>(a2),sipType_QString,a2State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QRect * a0;
        const QString * a1;
        int a1State = 0;
        const QRect * a2;
        sipQToolTip *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9J1J9", &sipSelf, sipType_QToolTip, &sipCpp, sipType_QRect, &a0, sipType_QString, &a1, &a1State, sipType_QRect, &a2))
        {
            sipCpp->sipProtect_tip(*a0,*a1,*a2);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QRect * a0;
        const QString * a1;
        int a1State = 0;
        const QString * a2;
        int a2State = 0;
        const QRect * a3;
        sipQToolTip *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9J1J1J9", &sipSelf, sipType_QToolTip, &sipCpp, sipType_QRect, &a0, sipType_QString, &a1, &a1State, sipType_QString, &a2, &a2State, sipType_QRect, &a3))
        {
            sipCpp->sipProtect_tip(*a0,*a1,*a2,*a3);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);
            sipReleaseType(const_cast<QString *>(a2),sipType_QString,a2State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QToolTip, sipName_tip, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QToolTip_clear(PyObject *, PyObject *);}
static PyObject *meth_QToolTip_clear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        sipQToolTip *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QToolTip, &sipCpp))
        {
            sipCpp->sipProtect_clear();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QToolTip, sipName_clear, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QToolTip(void *, const sipTypeDef *);}
static void *cast_QToolTip(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QToolTip)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_Qt)->ctd_cast((Qt *)(QToolTip *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QToolTip(void *, int);}
static void release_QToolTip(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQToolTip *>(sipCppV);
    else
        delete reinterpret_cast<QToolTip *>(sipCppV);
}


extern "C" {static void dealloc_QToolTip(sipSimpleWrapper *);}
static void dealloc_QToolTip(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQToolTip *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QToolTip(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QToolTip(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QToolTip(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQToolTip *sipCpp = 0;

    {
        QWidget * a0;
        QToolTipGroup * a1 = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J8|J8", sipType_QWidget, &a0, sipType_QToolTipGroup, &a1))
        {
            sipCpp = new sipQToolTip(a0,a1);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QToolTip * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QToolTip, &a0))
        {
            sipCpp = new sipQToolTip(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QToolTip[] = {{396, 255, 1}};


static PyMethodDef methods_QToolTip[] = {
    {SIP_MLNAME_CAST(sipName_add), meth_QToolTip_add, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_clear), meth_QToolTip_clear, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_font), meth_QToolTip_font, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_group), meth_QToolTip_group, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_hide), meth_QToolTip_hide, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isGloballyEnabled), meth_QToolTip_isGloballyEnabled, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_maybeTip), meth_QToolTip_maybeTip, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_palette), meth_QToolTip_palette, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_parentWidget), meth_QToolTip_parentWidget, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_remove), meth_QToolTip_remove, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setFont), meth_QToolTip_setFont, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setGloballyEnabled), meth_QToolTip_setGloballyEnabled, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setPalette), meth_QToolTip_setPalette, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setWakeUpDelay), meth_QToolTip_setWakeUpDelay, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_textFor), meth_QToolTip_textFor, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_tip), meth_QToolTip_tip, METH_VARARGS, NULL}
};


pyqt3ClassTypeDef sipTypeDef_qt_QToolTip = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_QToolTip,
        {0}
    },
    {
        sipNameNr_QToolTip,
        {0, 0, 1},
        16, methods_QToolTip,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QToolTip,
    0,
    init_QToolTip,
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
    dealloc_QToolTip,
    0,
    0,
    0,
    release_QToolTip,
    cast_QToolTip,
    0,
    0,
    0
},
    0
};