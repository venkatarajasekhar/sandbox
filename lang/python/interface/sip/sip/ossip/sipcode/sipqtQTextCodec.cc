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

#line 84 "/usr/share/sip/qt/qtextcodec.sip"
#include <qtextcodec.h>
#line 31 "sipqtQTextCodec.cc"

#line 449 "/usr/share/sip/qt/qstring.sip"
#include <qstring.h>
#line 35 "sipqtQTextCodec.cc"
#line 180 "/usr/share/sip/qt/qstring.sip"
#include <qstring.h>
#line 38 "sipqtQTextCodec.cc"
#line 120 "/usr/share/sip/qt/qcstring.sip"
#include <qcstring.h>
#line 41 "sipqtQTextCodec.cc"
#line 98 "/usr/share/sip/qt/qbytearray.sip"
#include <qstring.h>
#line 44 "sipqtQTextCodec.cc"
#line 62 "/usr/share/sip/qt/qtextcodec.sip"
#include <qtextcodec.h>
#line 47 "sipqtQTextCodec.cc"
#line 73 "/usr/share/sip/qt/qtextcodec.sip"
#include <qtextcodec.h>
#line 50 "sipqtQTextCodec.cc"
#line 83 "/usr/share/sip/qt/qiodevice.sip"
#include <qiodevice.h>
#line 53 "sipqtQTextCodec.cc"


class sipQTextCodec : public QTextCodec
{
public:
    sipQTextCodec();
    sipQTextCodec(const QTextCodec&);
    virtual ~sipQTextCodec();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    const char * name() const;
    const char * mimeName() const;
    int mibEnum() const;
    QTextDecoder * makeDecoder() const;
    QTextEncoder * makeEncoder() const;
    QString toUnicode(const char *,int) const;
    QCString fromUnicode(const QString&,int&) const;
    bool canEncode(QChar) const;
    bool canEncode(const QString&) const;
    int heuristicContentMatch(const char *,int) const;
    int heuristicNameMatch(const char *) const;
    QByteArray fromUnicode(const QString&,int,int) const;
    unsigned short characterFromUnicode(const QString&,int) const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQTextCodec(const sipQTextCodec &);
    sipQTextCodec &operator = (const sipQTextCodec &);

    char sipPyMethods[13];
};

sipQTextCodec::sipQTextCodec(): QTextCodec(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQTextCodec::sipQTextCodec(const QTextCodec& a0): QTextCodec(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQTextCodec::~sipQTextCodec()
{
    sipCommonDtor(sipPySelf);
}

const char * sipQTextCodec::name() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,sipName_QTextCodec,sipName_name);

    if (!meth)
        return 0;

    extern const char * sipVH_qt_107(sip_gilstate_t,PyObject *,int,sipSimpleWrapper *);

    return sipVH_qt_107(sipGILState,meth,1,sipPySelf);
}

const char * sipQTextCodec::mimeName() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,NULL,sipName_mimeName);

    if (!meth)
        return QTextCodec::mimeName();

    extern const char * sipVH_qt_107(sip_gilstate_t,PyObject *,int,sipSimpleWrapper *);

    return sipVH_qt_107(sipGILState,meth,2,sipPySelf);
}

int sipQTextCodec::mibEnum() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,sipName_QTextCodec,sipName_mibEnum);

    if (!meth)
        return 0;

    extern int sipVH_qt_106(sip_gilstate_t,PyObject *);

    return sipVH_qt_106(sipGILState,meth);
}

QTextDecoder * sipQTextCodec::makeDecoder() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[3]),sipPySelf,NULL,sipName_makeDecoder);

    if (!meth)
        return QTextCodec::makeDecoder();

    extern QTextDecoder * sipVH_qt_105(sip_gilstate_t,PyObject *);

    return sipVH_qt_105(sipGILState,meth);
}

QTextEncoder * sipQTextCodec::makeEncoder() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[4]),sipPySelf,NULL,sipName_makeEncoder);

    if (!meth)
        return QTextCodec::makeEncoder();

    extern QTextEncoder * sipVH_qt_104(sip_gilstate_t,PyObject *);

    return sipVH_qt_104(sipGILState,meth);
}

QString sipQTextCodec::toUnicode(const char *a0,int a1) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[5]),sipPySelf,NULL,sipName_toUnicode);

    if (!meth)
        return QTextCodec::toUnicode(a0,a1);

    extern QString sipVH_qt_103(sip_gilstate_t,PyObject *,const char *,int);

    return sipVH_qt_103(sipGILState,meth,a0,a1);
}

QCString sipQTextCodec::fromUnicode(const QString& a0,int& a1) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[6]),sipPySelf,NULL,sipName_fromUnicode);

    if (!meth)
        return QTextCodec::fromUnicode(a0,a1);

    extern QCString sipVH_qt_102(sip_gilstate_t,PyObject *,const QString&,int&);

    return sipVH_qt_102(sipGILState,meth,a0,a1);
}

bool sipQTextCodec::canEncode(QChar a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[7]),sipPySelf,NULL,sipName_canEncode);

    if (!meth)
        return QTextCodec::canEncode(a0);

    extern bool sipVH_qt_101(sip_gilstate_t,PyObject *,QChar);

    return sipVH_qt_101(sipGILState,meth,a0);
}

bool sipQTextCodec::canEncode(const QString& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[8]),sipPySelf,NULL,sipName_canEncode);

    if (!meth)
        return QTextCodec::canEncode(a0);

    extern bool sipVH_qt_54(sip_gilstate_t,PyObject *,const QString&);

    return sipVH_qt_54(sipGILState,meth,a0);
}

int sipQTextCodec::heuristicContentMatch(const char *a0,int a1) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[9]),sipPySelf,sipName_QTextCodec,sipName_heuristicContentMatch);

    if (!meth)
        return 0;

    extern int sipVH_qt_100(sip_gilstate_t,PyObject *,const char *,int);

    return sipVH_qt_100(sipGILState,meth,a0,a1);
}

int sipQTextCodec::heuristicNameMatch(const char *a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[10]),sipPySelf,NULL,sipName_heuristicNameMatch);

    if (!meth)
        return QTextCodec::heuristicNameMatch(a0);

    extern int sipVH_qt_99(sip_gilstate_t,PyObject *,const char *);

    return sipVH_qt_99(sipGILState,meth,a0);
}

QByteArray sipQTextCodec::fromUnicode(const QString& a0,int a1,int a2) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[11]),sipPySelf,NULL,sipName_fromUnicode);

    if (!meth)
        return QTextCodec::fromUnicode(a0,a1,a2);

    extern QByteArray sipVH_qt_98(sip_gilstate_t,PyObject *,const QString&,int,int);

    return sipVH_qt_98(sipGILState,meth,a0,a1,a2);
}

unsigned short sipQTextCodec::characterFromUnicode(const QString& a0,int a1) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[12]),sipPySelf,NULL,sipName_characterFromUnicode);

    if (!meth)
        return QTextCodec::characterFromUnicode(a0,a1);

    extern unsigned short sipVH_qt_97(sip_gilstate_t,PyObject *,const QString&,int);

    return sipVH_qt_97(sipGILState,meth,a0,a1);
}


extern "C" {static PyObject *meth_QTextCodec_loadCharmap(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_loadCharmap(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QIODevice * a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8", sipType_QIODevice, &a0))
        {
            QTextCodec *sipRes;

            sipRes = QTextCodec::loadCharmap(a0);

            return sipConvertFromType(sipRes,sipType_QTextCodec,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_loadCharmap, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextCodec_loadCharmapFile(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_loadCharmapFile(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QString * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QString, &a0, &a0State))
        {
            QTextCodec *sipRes;

            sipRes = QTextCodec::loadCharmapFile(*a0);
            sipReleaseType(a0,sipType_QString,a0State);

            return sipConvertFromType(sipRes,sipType_QTextCodec,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_loadCharmapFile, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextCodec_codecForMib(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_codecForMib(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "i", &a0))
        {
            QTextCodec *sipRes;

            sipRes = QTextCodec::codecForMib(a0);

            return sipConvertFromType(sipRes,sipType_QTextCodec,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_codecForMib, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextCodec_codecForName(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_codecForName(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const char * a0;
        int a1 = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "s|i", &a0, &a1))
        {
            QTextCodec *sipRes;

            sipRes = QTextCodec::codecForName(a0,a1);

            return sipConvertFromType(sipRes,sipType_QTextCodec,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_codecForName, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextCodec_codecForContent(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_codecForContent(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const char * a0;
        int a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "si", &a0, &a1))
        {
            QTextCodec *sipRes;

            sipRes = QTextCodec::codecForContent(a0,a1);

            return sipConvertFromType(sipRes,sipType_QTextCodec,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_codecForContent, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextCodec_codecForIndex(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_codecForIndex(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "i", &a0))
        {
            QTextCodec *sipRes;

            sipRes = QTextCodec::codecForIndex(a0);

            return sipConvertFromType(sipRes,sipType_QTextCodec,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_codecForIndex, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextCodec_codecForLocale(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_codecForLocale(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QTextCodec *sipRes;

            sipRes = QTextCodec::codecForLocale();

            return sipConvertFromType(sipRes,sipType_QTextCodec,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_codecForLocale, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextCodec_setCodecForLocale(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_setCodecForLocale(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextCodec * a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8", sipType_QTextCodec, &a0))
        {
            QTextCodec::setCodecForLocale(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_setCodecForLocale, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextCodec_codecForTr(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_codecForTr(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QTextCodec *sipRes;

            sipRes = QTextCodec::codecForTr();

            return sipConvertFromType(sipRes,sipType_QTextCodec,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_codecForTr, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextCodec_setCodecForTr(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_setCodecForTr(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextCodec * a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8", sipType_QTextCodec, &a0))
        {
            QTextCodec::setCodecForTr(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_setCodecForTr, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextCodec_codecForCStrings(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_codecForCStrings(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QTextCodec *sipRes;

            sipRes = QTextCodec::codecForCStrings();

            return sipConvertFromType(sipRes,sipType_QTextCodec,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_codecForCStrings, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextCodec_setCodecForCStrings(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_setCodecForCStrings(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextCodec * a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8", sipType_QTextCodec, &a0))
        {
            QTextCodec::setCodecForCStrings(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_setCodecForCStrings, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextCodec_deleteAllCodecs(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_deleteAllCodecs(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QTextCodec::deleteAllCodecs();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_deleteAllCodecs, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextCodec_locale(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_locale(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            const char *sipRes;

            sipRes = QTextCodec::locale();

            if (sipRes == NULL)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return SIPBytes_FromString(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_locale, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextCodec_name(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_name(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QTextCodec *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextCodec, &sipCpp))
        {
            const char *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QTextCodec, sipName_name);
                return NULL;
            }

            sipRes = sipCpp->name();

            if (sipRes == NULL)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return SIPBytes_FromString(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_name, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextCodec_mimeName(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_mimeName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QTextCodec *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextCodec, &sipCpp))
        {
            const char *sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QTextCodec::mimeName() : sipCpp->mimeName());

            if (sipRes == NULL)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return SIPBytes_FromString(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_mimeName, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextCodec_mibEnum(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_mibEnum(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QTextCodec *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextCodec, &sipCpp))
        {
            int sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QTextCodec, sipName_mibEnum);
                return NULL;
            }

            sipRes = sipCpp->mibEnum();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_mibEnum, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextCodec_makeDecoder(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_makeDecoder(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QTextCodec *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextCodec, &sipCpp))
        {
            QTextDecoder *sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QTextCodec::makeDecoder() : sipCpp->makeDecoder());

            return sipConvertFromNewType(sipRes,sipType_QTextDecoder,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_makeDecoder, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextCodec_makeEncoder(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_makeEncoder(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QTextCodec *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextCodec, &sipCpp))
        {
            QTextEncoder *sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QTextCodec::makeEncoder() : sipCpp->makeEncoder());

            return sipConvertFromNewType(sipRes,sipType_QTextEncoder,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_makeEncoder, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextCodec_toUnicode(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_toUnicode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const char * a0;
        int a1;
        QTextCodec *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bsi", &sipSelf, sipType_QTextCodec, &sipCpp, &a0, &a1))
        {
            QString *sipRes;

            sipRes = new QString((sipSelfWasArg ? sipCpp->QTextCodec::toUnicode(a0,a1) : sipCpp->toUnicode(a0,a1)));

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    {
        const QByteArray * a0;
        int a0State = 0;
        int a1;
        QTextCodec *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1i", &sipSelf, sipType_QTextCodec, &sipCpp, sipType_QByteArray, &a0, &a0State, &a1))
        {
            QString *sipRes;

            sipRes = new QString(sipCpp->toUnicode(*a0,a1));
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    {
        const QByteArray * a0;
        int a0State = 0;
        QTextCodec *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QTextCodec, &sipCpp, sipType_QByteArray, &a0, &a0State))
        {
            QString *sipRes;

            sipRes = new QString(sipCpp->toUnicode(*a0));
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    {
        const QCString * a0;
        int a0State = 0;
        int a1;
        QTextCodec *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1i", &sipSelf, sipType_QTextCodec, &sipCpp, sipType_QCString, &a0, &a0State, &a1))
        {
            QString *sipRes;

            sipRes = new QString(sipCpp->toUnicode(*a0,a1));
            sipReleaseType(const_cast<QCString *>(a0),sipType_QCString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    {
        const QCString * a0;
        int a0State = 0;
        QTextCodec *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QTextCodec, &sipCpp, sipType_QCString, &a0, &a0State))
        {
            QString *sipRes;

            sipRes = new QString(sipCpp->toUnicode(*a0));
            sipReleaseType(const_cast<QCString *>(a0),sipType_QCString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    {
        const char * a0;
        QTextCodec *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bs", &sipSelf, sipType_QTextCodec, &sipCpp, &a0))
        {
            QString *sipRes;

            sipRes = new QString(sipCpp->toUnicode(a0));

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_toUnicode, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextCodec_fromUnicode(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_fromUnicode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QString * a0;
        int a0State = 0;
        int a1;
        QTextCodec *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1i", &sipSelf, sipType_QTextCodec, &sipCpp, sipType_QString, &a0, &a0State, &a1))
        {
            QCString *sipRes;

            sipRes = new QCString((sipSelfWasArg ? sipCpp->QTextCodec::fromUnicode(*a0,a1) : sipCpp->fromUnicode(*a0,a1)));
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            PyObject *sipResObj = sipConvertFromNewType(sipRes,sipType_QCString,NULL);
            return sipBuildResult(0,"(Ri)",sipResObj,a1);
        }
    }

    {
        const QString * a0;
        int a0State = 0;
        QTextCodec *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QTextCodec, &sipCpp, sipType_QString, &a0, &a0State))
        {
            QCString *sipRes;

            sipRes = new QCString(sipCpp->fromUnicode(*a0));
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QCString,NULL);
        }
    }

    {
        const QString * a0;
        int a0State = 0;
        int a1;
        int a2;
        QTextCodec *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1ii", &sipSelf, sipType_QTextCodec, &sipCpp, sipType_QString, &a0, &a0State, &a1, &a2))
        {
            QByteArray *sipRes;

            sipRes = new QByteArray((sipSelfWasArg ? sipCpp->QTextCodec::fromUnicode(*a0,a1,a2) : sipCpp->fromUnicode(*a0,a1,a2)));
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_fromUnicode, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextCodec_canEncode(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_canEncode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QChar * a0;
        QTextCodec *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QTextCodec, &sipCpp, sipType_QChar, &a0))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QTextCodec::canEncode(*a0) : sipCpp->canEncode(*a0));

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const QString * a0;
        int a0State = 0;
        QTextCodec *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QTextCodec, &sipCpp, sipType_QString, &a0, &a0State))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QTextCodec::canEncode(*a0) : sipCpp->canEncode(*a0));
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_canEncode, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextCodec_heuristicContentMatch(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_heuristicContentMatch(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const char * a0;
        int a1;
        QTextCodec *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bsi", &sipSelf, sipType_QTextCodec, &sipCpp, &a0, &a1))
        {
            int sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QTextCodec, sipName_heuristicContentMatch);
                return NULL;
            }

            sipRes = sipCpp->heuristicContentMatch(a0,a1);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_heuristicContentMatch, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextCodec_heuristicNameMatch(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_heuristicNameMatch(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const char * a0;
        QTextCodec *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bs", &sipSelf, sipType_QTextCodec, &sipCpp, &a0))
        {
            int sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QTextCodec::heuristicNameMatch(a0) : sipCpp->heuristicNameMatch(a0));

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_heuristicNameMatch, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextCodec_characterFromUnicode(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_characterFromUnicode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QString * a0;
        int a0State = 0;
        int a1;
        QTextCodec *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1i", &sipSelf, sipType_QTextCodec, &sipCpp, sipType_QString, &a0, &a0State, &a1))
        {
            unsigned short sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QTextCodec::characterFromUnicode(*a0,a1) : sipCpp->characterFromUnicode(*a0,a1));
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_characterFromUnicode, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QTextCodec(void *, const sipTypeDef *);}
static void *cast_QTextCodec(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QTextCodec)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTextCodec(void *, int);}
static void release_QTextCodec(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQTextCodec *>(sipCppV);
    else
        delete reinterpret_cast<QTextCodec *>(sipCppV);
}


extern "C" {static void dealloc_QTextCodec(sipSimpleWrapper *);}
static void dealloc_QTextCodec(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQTextCodec *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QTextCodec(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QTextCodec(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QTextCodec(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQTextCodec *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQTextCodec();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QTextCodec * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QTextCodec, &a0))
        {
            sipCpp = new sipQTextCodec(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QTextCodec[] = {
    {SIP_MLNAME_CAST(sipName_canEncode), meth_QTextCodec_canEncode, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_characterFromUnicode), meth_QTextCodec_characterFromUnicode, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_codecForCStrings), meth_QTextCodec_codecForCStrings, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_codecForContent), meth_QTextCodec_codecForContent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_codecForIndex), meth_QTextCodec_codecForIndex, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_codecForLocale), meth_QTextCodec_codecForLocale, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_codecForMib), meth_QTextCodec_codecForMib, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_codecForName), meth_QTextCodec_codecForName, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_codecForTr), meth_QTextCodec_codecForTr, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_deleteAllCodecs), meth_QTextCodec_deleteAllCodecs, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_fromUnicode), meth_QTextCodec_fromUnicode, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_heuristicContentMatch), meth_QTextCodec_heuristicContentMatch, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_heuristicNameMatch), meth_QTextCodec_heuristicNameMatch, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_loadCharmap), meth_QTextCodec_loadCharmap, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_loadCharmapFile), meth_QTextCodec_loadCharmapFile, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_locale), meth_QTextCodec_locale, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_makeDecoder), meth_QTextCodec_makeDecoder, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_makeEncoder), meth_QTextCodec_makeEncoder, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_mibEnum), meth_QTextCodec_mibEnum, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_mimeName), meth_QTextCodec_mimeName, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_name), meth_QTextCodec_name, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setCodecForCStrings), meth_QTextCodec_setCodecForCStrings, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setCodecForLocale), meth_QTextCodec_setCodecForLocale, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setCodecForTr), meth_QTextCodec_setCodecForTr, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_toUnicode), meth_QTextCodec_toUnicode, METH_VARARGS, NULL}
};


pyqt3ClassTypeDef sipTypeDef_qt_QTextCodec = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_QTextCodec,
        {0}
    },
    {
        sipNameNr_QTextCodec,
        {0, 0, 1},
        25, methods_QTextCodec,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_qt_pyqtWrapperType,
    sipNameNr_qt_pyqtWrapper,
    0,
    0,
    init_QTextCodec,
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
    dealloc_QTextCodec,
    0,
    0,
    0,
    release_QTextCodec,
    cast_QTextCodec,
    0,
    0,
    0
},
    0
};