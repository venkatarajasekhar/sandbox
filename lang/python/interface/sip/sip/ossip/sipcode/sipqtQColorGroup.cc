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

#line 35 "/usr/share/sip/qt/qcolorgroup.sip"
#include <qpalette.h>
#line 31 "sipqtQColorGroup.cc"

#line 125 "/usr/share/sip/qt/qcolor.sip"
#include <qcolor.h>
#line 35 "sipqtQColorGroup.cc"
#line 84 "/usr/share/sip/qt/qbrush.sip"
#include <qbrush.h>
#line 38 "sipqtQColorGroup.cc"


extern "C" {static PyObject *meth_QColorGroup_color(PyObject *, PyObject *);}
static PyObject *meth_QColorGroup_color(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QColorGroup::ColorRole a0;
        QColorGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QColorGroup, &sipCpp, sipType_QColorGroup_ColorRole, &a0))
        {
            QColor *sipRes;

            sipRes = new QColor(sipCpp->color(a0));

            return sipConvertFromNewType(sipRes,sipType_QColor,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QColorGroup, sipName_color, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QColorGroup_brush(PyObject *, PyObject *);}
static PyObject *meth_QColorGroup_brush(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QColorGroup::ColorRole a0;
        QColorGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QColorGroup, &sipCpp, sipType_QColorGroup_ColorRole, &a0))
        {
            QBrush *sipRes;

            sipRes = new QBrush(sipCpp->brush(a0));

            return sipConvertFromNewType(sipRes,sipType_QBrush,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QColorGroup, sipName_brush, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QColorGroup_setColor(PyObject *, PyObject *);}
static PyObject *meth_QColorGroup_setColor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QColorGroup::ColorRole a0;
        const QColor * a1;
        QColorGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BEJ9", &sipSelf, sipType_QColorGroup, &sipCpp, sipType_QColorGroup_ColorRole, &a0, sipType_QColor, &a1))
        {
            sipCpp->setColor(a0,*a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QColorGroup, sipName_setColor, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QColorGroup_setBrush(PyObject *, PyObject *);}
static PyObject *meth_QColorGroup_setBrush(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QColorGroup::ColorRole a0;
        const QBrush * a1;
        QColorGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BEJ9", &sipSelf, sipType_QColorGroup, &sipCpp, sipType_QColorGroup_ColorRole, &a0, sipType_QBrush, &a1))
        {
            sipCpp->setBrush(a0,*a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QColorGroup, sipName_setBrush, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QColorGroup_foreground(PyObject *, PyObject *);}
static PyObject *meth_QColorGroup_foreground(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QColorGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QColorGroup, &sipCpp))
        {
            QColor *sipRes;

            sipRes = new QColor(sipCpp->foreground());

            return sipConvertFromNewType(sipRes,sipType_QColor,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QColorGroup, sipName_foreground, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QColorGroup_button(PyObject *, PyObject *);}
static PyObject *meth_QColorGroup_button(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QColorGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QColorGroup, &sipCpp))
        {
            QColor *sipRes;

            sipRes = new QColor(sipCpp->button());

            return sipConvertFromNewType(sipRes,sipType_QColor,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QColorGroup, sipName_button, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QColorGroup_light(PyObject *, PyObject *);}
static PyObject *meth_QColorGroup_light(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QColorGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QColorGroup, &sipCpp))
        {
            QColor *sipRes;

            sipRes = new QColor(sipCpp->light());

            return sipConvertFromNewType(sipRes,sipType_QColor,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QColorGroup, sipName_light, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QColorGroup_dark(PyObject *, PyObject *);}
static PyObject *meth_QColorGroup_dark(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QColorGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QColorGroup, &sipCpp))
        {
            QColor *sipRes;

            sipRes = new QColor(sipCpp->dark());

            return sipConvertFromNewType(sipRes,sipType_QColor,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QColorGroup, sipName_dark, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QColorGroup_mid(PyObject *, PyObject *);}
static PyObject *meth_QColorGroup_mid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QColorGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QColorGroup, &sipCpp))
        {
            QColor *sipRes;

            sipRes = new QColor(sipCpp->mid());

            return sipConvertFromNewType(sipRes,sipType_QColor,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QColorGroup, sipName_mid, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QColorGroup_text(PyObject *, PyObject *);}
static PyObject *meth_QColorGroup_text(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QColorGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QColorGroup, &sipCpp))
        {
            QColor *sipRes;

            sipRes = new QColor(sipCpp->text());

            return sipConvertFromNewType(sipRes,sipType_QColor,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QColorGroup, sipName_text, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QColorGroup_base(PyObject *, PyObject *);}
static PyObject *meth_QColorGroup_base(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QColorGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QColorGroup, &sipCpp))
        {
            QColor *sipRes;

            sipRes = new QColor(sipCpp->base());

            return sipConvertFromNewType(sipRes,sipType_QColor,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QColorGroup, sipName_base, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QColorGroup_background(PyObject *, PyObject *);}
static PyObject *meth_QColorGroup_background(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QColorGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QColorGroup, &sipCpp))
        {
            QColor *sipRes;

            sipRes = new QColor(sipCpp->background());

            return sipConvertFromNewType(sipRes,sipType_QColor,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QColorGroup, sipName_background, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QColorGroup_midlight(PyObject *, PyObject *);}
static PyObject *meth_QColorGroup_midlight(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QColorGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QColorGroup, &sipCpp))
        {
            QColor *sipRes;

            sipRes = new QColor(sipCpp->midlight());

            return sipConvertFromNewType(sipRes,sipType_QColor,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QColorGroup, sipName_midlight, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QColorGroup_brightText(PyObject *, PyObject *);}
static PyObject *meth_QColorGroup_brightText(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QColorGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QColorGroup, &sipCpp))
        {
            QColor *sipRes;

            sipRes = new QColor(sipCpp->brightText());

            return sipConvertFromNewType(sipRes,sipType_QColor,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QColorGroup, sipName_brightText, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QColorGroup_buttonText(PyObject *, PyObject *);}
static PyObject *meth_QColorGroup_buttonText(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QColorGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QColorGroup, &sipCpp))
        {
            QColor *sipRes;

            sipRes = new QColor(sipCpp->buttonText());

            return sipConvertFromNewType(sipRes,sipType_QColor,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QColorGroup, sipName_buttonText, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QColorGroup_shadow(PyObject *, PyObject *);}
static PyObject *meth_QColorGroup_shadow(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QColorGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QColorGroup, &sipCpp))
        {
            QColor *sipRes;

            sipRes = new QColor(sipCpp->shadow());

            return sipConvertFromNewType(sipRes,sipType_QColor,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QColorGroup, sipName_shadow, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QColorGroup_highlight(PyObject *, PyObject *);}
static PyObject *meth_QColorGroup_highlight(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QColorGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QColorGroup, &sipCpp))
        {
            QColor *sipRes;

            sipRes = new QColor(sipCpp->highlight());

            return sipConvertFromNewType(sipRes,sipType_QColor,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QColorGroup, sipName_highlight, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QColorGroup_highlightedText(PyObject *, PyObject *);}
static PyObject *meth_QColorGroup_highlightedText(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QColorGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QColorGroup, &sipCpp))
        {
            QColor *sipRes;

            sipRes = new QColor(sipCpp->highlightedText());

            return sipConvertFromNewType(sipRes,sipType_QColor,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QColorGroup, sipName_highlightedText, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QColorGroup_link(PyObject *, PyObject *);}
static PyObject *meth_QColorGroup_link(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QColorGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QColorGroup, &sipCpp))
        {
            QColor *sipRes;

            sipRes = new QColor(sipCpp->link());

            return sipConvertFromNewType(sipRes,sipType_QColor,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QColorGroup, sipName_link, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QColorGroup_linkVisited(PyObject *, PyObject *);}
static PyObject *meth_QColorGroup_linkVisited(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QColorGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QColorGroup, &sipCpp))
        {
            QColor *sipRes;

            sipRes = new QColor(sipCpp->linkVisited());

            return sipConvertFromNewType(sipRes,sipType_QColor,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QColorGroup, sipName_linkVisited, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QColorGroup(void *, const sipTypeDef *);}
static void *cast_QColorGroup(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QColorGroup)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QColorGroup(void *, int);}
static void release_QColorGroup(void *sipCppV,int)
{
    delete reinterpret_cast<QColorGroup *>(sipCppV);
}


extern "C" {static void dealloc_QColorGroup(sipSimpleWrapper *);}
static void dealloc_QColorGroup(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QColorGroup(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QColorGroup(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QColorGroup(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QColorGroup *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QColorGroup();

            return sipCpp;
        }
    }

    {
        const QColor * a0;
        const QColor * a1;
        const QColor * a2;
        const QColor * a3;
        const QColor * a4;
        const QColor * a5;
        const QColor * a6;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9J9J9J9J9J9J9", sipType_QColor, &a0, sipType_QColor, &a1, sipType_QColor, &a2, sipType_QColor, &a3, sipType_QColor, &a4, sipType_QColor, &a5, sipType_QColor, &a6))
        {
            sipCpp = new QColorGroup(*a0,*a1,*a2,*a3,*a4,*a5,*a6);

            return sipCpp;
        }
    }

    {
        const QBrush * a0;
        const QBrush * a1;
        const QBrush * a2;
        const QBrush * a3;
        const QBrush * a4;
        const QBrush * a5;
        const QBrush * a6;
        const QBrush * a7;
        const QBrush * a8;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9J9J9J9J9J9J9J9J9", sipType_QBrush, &a0, sipType_QBrush, &a1, sipType_QBrush, &a2, sipType_QBrush, &a3, sipType_QBrush, &a4, sipType_QBrush, &a5, sipType_QBrush, &a6, sipType_QBrush, &a7, sipType_QBrush, &a8))
        {
            sipCpp = new QColorGroup(*a0,*a1,*a2,*a3,*a4,*a5,*a6,*a7,*a8);

            return sipCpp;
        }
    }

    {
        QColorGroup * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QColorGroup, &a0))
        {
            sipCpp = new QColorGroup(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QColorGroup[] = {
    {SIP_MLNAME_CAST(sipName_background), meth_QColorGroup_background, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_base), meth_QColorGroup_base, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_brightText), meth_QColorGroup_brightText, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_brush), meth_QColorGroup_brush, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_button), meth_QColorGroup_button, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_buttonText), meth_QColorGroup_buttonText, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_color), meth_QColorGroup_color, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_dark), meth_QColorGroup_dark, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_foreground), meth_QColorGroup_foreground, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_highlight), meth_QColorGroup_highlight, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_highlightedText), meth_QColorGroup_highlightedText, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_light), meth_QColorGroup_light, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_link), meth_QColorGroup_link, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_linkVisited), meth_QColorGroup_linkVisited, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_mid), meth_QColorGroup_mid, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_midlight), meth_QColorGroup_midlight, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setBrush), meth_QColorGroup_setBrush, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setColor), meth_QColorGroup_setColor, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_shadow), meth_QColorGroup_shadow, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_text), meth_QColorGroup_text, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_QColorGroup[] = {
    {sipName_Background, QColorGroup::Background, 38},
    {sipName_Base, QColorGroup::Base, 38},
    {sipName_BrightText, QColorGroup::BrightText, 38},
    {sipName_Button, QColorGroup::Button, 38},
    {sipName_ButtonText, QColorGroup::ButtonText, 38},
    {sipName_Dark, QColorGroup::Dark, 38},
    {sipName_Foreground, QColorGroup::Foreground, 38},
    {sipName_Highlight, QColorGroup::Highlight, 38},
    {sipName_HighlightedText, QColorGroup::HighlightedText, 38},
    {sipName_Light, QColorGroup::Light, 38},
    {sipName_Link, QColorGroup::Link, 38},
    {sipName_LinkVisited, QColorGroup::LinkVisited, 38},
    {sipName_Mid, QColorGroup::Mid, 38},
    {sipName_Midlight, QColorGroup::Midlight, 38},
    {sipName_NColorRoles, QColorGroup::NColorRoles, 38},
    {sipName_Shadow, QColorGroup::Shadow, 38},
    {sipName_Text, QColorGroup::Text, 38},
};


pyqt3ClassTypeDef sipTypeDef_qt_QColorGroup = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QColorGroup,
        {0}
    },
    {
        sipNameNr_QColorGroup,
        {0, 0, 1},
        20, methods_QColorGroup,
        17, enummembers_QColorGroup,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_qt_pyqtWrapperType,
    sipNameNr_qt_pyqtWrapper,
    0,
    0,
    init_QColorGroup,
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
    dealloc_QColorGroup,
    0,
    0,
    0,
    release_QColorGroup,
    cast_QColorGroup,
    0,
    0,
    0
},
    0
};