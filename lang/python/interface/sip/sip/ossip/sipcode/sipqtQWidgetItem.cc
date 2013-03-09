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

#line 244 "/usr/share/sip/qt/qlayout.sip"
#include <qabstractlayout.h>
#line 31 "sipqtQWidgetItem.cc"

#line 63 "/usr/share/sip/qt/qwidget.sip"
#include <qwidget.h>
#line 35 "sipqtQWidgetItem.cc"
#line 93 "/usr/share/sip/qt/qrect.sip"
#include <qrect.h>
#line 38 "sipqtQWidgetItem.cc"
#line 37 "/usr/share/sip/qt/qsizepolicy.sip"
#include <qsizepolicy.h>
#line 41 "sipqtQWidgetItem.cc"
#line 57 "/usr/share/sip/qt/qsize.sip"
#include <qsize.h>
#line 44 "sipqtQWidgetItem.cc"
#line 221 "/usr/share/sip/qt/qlayout.sip"
#include <qabstractlayout.h>
#line 47 "sipqtQWidgetItem.cc"
#line 267 "/usr/share/sip/qt/qlayout.sip"
#include <qabstractlayout.h>
#line 50 "sipqtQWidgetItem.cc"
#line 157 "/usr/share/sip/qt/qlayout.sip"
#include <qabstractlayout.h>
#line 53 "sipqtQWidgetItem.cc"


class sipQWidgetItem : public QWidgetItem
{
public:
    sipQWidgetItem(QWidget *);
    sipQWidgetItem(const QWidgetItem&);
    virtual ~sipQWidgetItem();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    QWidget * widget();
    QSize sizeHint() const;
    QSize minimumSize() const;
    QSize maximumSize() const;
    QSizePolicy::ExpandData expanding() const;
    void setGeometry(const QRect&);
    QRect geometry() const;
    bool isEmpty() const;
    bool hasHeightForWidth() const;
    int heightForWidth(int) const;
    void invalidate();
    QLayoutIterator iterator();
    QLayout * layout();
    QSpacerItem * spacerItem();
    void setAlignment(int);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQWidgetItem(const sipQWidgetItem &);
    sipQWidgetItem &operator = (const sipQWidgetItem &);

    char sipPyMethods[15];
};

sipQWidgetItem::sipQWidgetItem(QWidget *a0): QWidgetItem(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQWidgetItem::sipQWidgetItem(const QWidgetItem& a0): QWidgetItem(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQWidgetItem::~sipQWidgetItem()
{
    sipCommonDtor(sipPySelf);
}

QWidget * sipQWidgetItem::widget()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_widget);

    if (!meth)
        return QWidgetItem::widget();

    extern QWidget * sipVH_qt_237(sip_gilstate_t,PyObject *);

    return sipVH_qt_237(sipGILState,meth);
}

QSize sipQWidgetItem::sizeHint() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,NULL,sipName_sizeHint);

    if (!meth)
        return QWidgetItem::sizeHint();

    extern QSize sipVH_qt_47(sip_gilstate_t,PyObject *);

    return sipVH_qt_47(sipGILState,meth);
}

QSize sipQWidgetItem::minimumSize() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,NULL,sipName_minimumSize);

    if (!meth)
        return QWidgetItem::minimumSize();

    extern QSize sipVH_qt_47(sip_gilstate_t,PyObject *);

    return sipVH_qt_47(sipGILState,meth);
}

QSize sipQWidgetItem::maximumSize() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[3]),sipPySelf,NULL,sipName_maximumSize);

    if (!meth)
        return QWidgetItem::maximumSize();

    extern QSize sipVH_qt_47(sip_gilstate_t,PyObject *);

    return sipVH_qt_47(sipGILState,meth);
}

QSizePolicy::ExpandData sipQWidgetItem::expanding() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[4]),sipPySelf,NULL,sipName_expanding);

    if (!meth)
        return QWidgetItem::expanding();

    extern QSizePolicy::ExpandData sipVH_qt_242(sip_gilstate_t,PyObject *);

    return sipVH_qt_242(sipGILState,meth);
}

void sipQWidgetItem::setGeometry(const QRect& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_setGeometry);

    if (!meth)
    {
        QWidgetItem::setGeometry(a0);
        return;
    }

    extern void sipVH_qt_36(sip_gilstate_t,PyObject *,const QRect&);

    sipVH_qt_36(sipGILState,meth,a0);
}

QRect sipQWidgetItem::geometry() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[6]),sipPySelf,NULL,sipName_geometry);

    if (!meth)
        return QWidgetItem::geometry();

    extern QRect sipVH_qt_241(sip_gilstate_t,PyObject *);

    return sipVH_qt_241(sipGILState,meth);
}

bool sipQWidgetItem::isEmpty() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[7]),sipPySelf,NULL,sipName_isEmpty);

    if (!meth)
        return QWidgetItem::isEmpty();

    extern bool sipVH_qt_42(sip_gilstate_t,PyObject *);

    return sipVH_qt_42(sipGILState,meth);
}

bool sipQWidgetItem::hasHeightForWidth() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[8]),sipPySelf,NULL,sipName_hasHeightForWidth);

    if (!meth)
        return QWidgetItem::hasHeightForWidth();

    extern bool sipVH_qt_42(sip_gilstate_t,PyObject *);

    return sipVH_qt_42(sipGILState,meth);
}

int sipQWidgetItem::heightForWidth(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[9]),sipPySelf,NULL,sipName_heightForWidth);

    if (!meth)
        return QWidgetItem::heightForWidth(a0);

    extern int sipVH_qt_44(sip_gilstate_t,PyObject *,int);

    return sipVH_qt_44(sipGILState,meth,a0);
}

void sipQWidgetItem::invalidate()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[10],sipPySelf,NULL,sipName_invalidate);

    if (!meth)
    {
        QLayoutItem::invalidate();
        return;
    }

    extern void sipVH_qt_2(sip_gilstate_t,PyObject *);

    sipVH_qt_2(sipGILState,meth);
}

QLayoutIterator sipQWidgetItem::iterator()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[11],sipPySelf,NULL,sipName_iterator);

    if (!meth)
        return QLayoutItem::iterator();

    extern QLayoutIterator sipVH_qt_240(sip_gilstate_t,PyObject *);

    return sipVH_qt_240(sipGILState,meth);
}

QLayout * sipQWidgetItem::layout()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[12],sipPySelf,NULL,sipName_layout);

    if (!meth)
        return QLayoutItem::layout();

    extern QLayout * sipVH_qt_239(sip_gilstate_t,PyObject *);

    return sipVH_qt_239(sipGILState,meth);
}

QSpacerItem * sipQWidgetItem::spacerItem()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[13],sipPySelf,NULL,sipName_spacerItem);

    if (!meth)
        return QLayoutItem::spacerItem();

    extern QSpacerItem * sipVH_qt_238(sip_gilstate_t,PyObject *);

    return sipVH_qt_238(sipGILState,meth);
}

void sipQWidgetItem::setAlignment(int a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[14],sipPySelf,NULL,sipName_setAlignment);

    if (!meth)
    {
        QLayoutItem::setAlignment(a0);
        return;
    }

    extern void sipVH_qt_68(sip_gilstate_t,PyObject *,int);

    sipVH_qt_68(sipGILState,meth,a0);
}


extern "C" {static PyObject *meth_QWidgetItem_sizeHint(PyObject *, PyObject *);}
static PyObject *meth_QWidgetItem_sizeHint(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QWidgetItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWidgetItem, &sipCpp))
        {
            QSize *sipRes;

            sipRes = new QSize((sipSelfWasArg ? sipCpp->QWidgetItem::sizeHint() : sipCpp->sizeHint()));

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWidgetItem, sipName_sizeHint, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QWidgetItem_minimumSize(PyObject *, PyObject *);}
static PyObject *meth_QWidgetItem_minimumSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QWidgetItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWidgetItem, &sipCpp))
        {
            QSize *sipRes;

            sipRes = new QSize((sipSelfWasArg ? sipCpp->QWidgetItem::minimumSize() : sipCpp->minimumSize()));

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWidgetItem, sipName_minimumSize, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QWidgetItem_maximumSize(PyObject *, PyObject *);}
static PyObject *meth_QWidgetItem_maximumSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QWidgetItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWidgetItem, &sipCpp))
        {
            QSize *sipRes;

            sipRes = new QSize((sipSelfWasArg ? sipCpp->QWidgetItem::maximumSize() : sipCpp->maximumSize()));

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWidgetItem, sipName_maximumSize, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QWidgetItem_expanding(PyObject *, PyObject *);}
static PyObject *meth_QWidgetItem_expanding(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QWidgetItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWidgetItem, &sipCpp))
        {
            QSizePolicy::ExpandData sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QWidgetItem::expanding() : sipCpp->expanding());

            return sipConvertFromEnum(sipRes,sipType_QSizePolicy_ExpandData);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWidgetItem, sipName_expanding, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QWidgetItem_isEmpty(PyObject *, PyObject *);}
static PyObject *meth_QWidgetItem_isEmpty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QWidgetItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWidgetItem, &sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QWidgetItem::isEmpty() : sipCpp->isEmpty());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWidgetItem, sipName_isEmpty, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QWidgetItem_setGeometry(PyObject *, PyObject *);}
static PyObject *meth_QWidgetItem_setGeometry(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QRect * a0;
        QWidgetItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QWidgetItem, &sipCpp, sipType_QRect, &a0))
        {
            (sipSelfWasArg ? sipCpp->QWidgetItem::setGeometry(*a0) : sipCpp->setGeometry(*a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWidgetItem, sipName_setGeometry, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QWidgetItem_geometry(PyObject *, PyObject *);}
static PyObject *meth_QWidgetItem_geometry(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QWidgetItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWidgetItem, &sipCpp))
        {
            QRect *sipRes;

            sipRes = new QRect((sipSelfWasArg ? sipCpp->QWidgetItem::geometry() : sipCpp->geometry()));

            return sipConvertFromNewType(sipRes,sipType_QRect,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWidgetItem, sipName_geometry, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QWidgetItem_widget(PyObject *, PyObject *);}
static PyObject *meth_QWidgetItem_widget(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QWidgetItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWidgetItem, &sipCpp))
        {
            QWidget *sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QWidgetItem::widget() : sipCpp->widget());

            return sipConvertFromType(sipRes,sipType_QWidget,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWidgetItem, sipName_widget, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QWidgetItem_hasHeightForWidth(PyObject *, PyObject *);}
static PyObject *meth_QWidgetItem_hasHeightForWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QWidgetItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWidgetItem, &sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QWidgetItem::hasHeightForWidth() : sipCpp->hasHeightForWidth());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWidgetItem, sipName_hasHeightForWidth, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QWidgetItem_heightForWidth(PyObject *, PyObject *);}
static PyObject *meth_QWidgetItem_heightForWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        int a0;
        QWidgetItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QWidgetItem, &sipCpp, &a0))
        {
            int sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QWidgetItem::heightForWidth(a0) : sipCpp->heightForWidth(a0));

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWidgetItem, sipName_heightForWidth, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QWidgetItem(void *, const sipTypeDef *);}
static void *cast_QWidgetItem(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QWidgetItem)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QLayoutItem)->ctd_cast((QLayoutItem *)(QWidgetItem *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QWidgetItem(void *, int);}
static void release_QWidgetItem(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQWidgetItem *>(sipCppV);
    else
        delete reinterpret_cast<QWidgetItem *>(sipCppV);
}


extern "C" {static void dealloc_QWidgetItem(sipSimpleWrapper *);}
static void dealloc_QWidgetItem(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQWidgetItem *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QWidgetItem(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QWidgetItem(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QWidgetItem(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQWidgetItem *sipCpp = 0;

    {
        QWidget * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J8", sipType_QWidget, &a0))
        {
            sipCpp = new sipQWidgetItem(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QWidgetItem * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QWidgetItem, &a0))
        {
            sipCpp = new sipQWidgetItem(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QWidgetItem[] = {{150, 255, 1}};


static PyMethodDef methods_QWidgetItem[] = {
    {SIP_MLNAME_CAST(sipName_expanding), meth_QWidgetItem_expanding, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_geometry), meth_QWidgetItem_geometry, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_hasHeightForWidth), meth_QWidgetItem_hasHeightForWidth, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_heightForWidth), meth_QWidgetItem_heightForWidth, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isEmpty), meth_QWidgetItem_isEmpty, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_maximumSize), meth_QWidgetItem_maximumSize, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_minimumSize), meth_QWidgetItem_minimumSize, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setGeometry), meth_QWidgetItem_setGeometry, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_sizeHint), meth_QWidgetItem_sizeHint, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_widget), meth_QWidgetItem_widget, METH_VARARGS, NULL}
};


pyqt3ClassTypeDef sipTypeDef_qt_QWidgetItem = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QWidgetItem,
        {0}
    },
    {
        sipNameNr_QWidgetItem,
        {0, 0, 1},
        10, methods_QWidgetItem,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QWidgetItem,
    0,
    init_QWidgetItem,
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
    dealloc_QWidgetItem,
    0,
    0,
    0,
    release_QWidgetItem,
    cast_QWidgetItem,
    0,
    0,
    0
},
    0
};