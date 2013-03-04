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

#line 88 "/usr/share/sip/qt/qfile.sip"
#include <qfile.h>
#line 31 "sipqtQFile.cc"

#line 449 "/usr/share/sip/qt/qstring.sip"
#include <qstring.h>
#line 35 "sipqtQFile.cc"
#line 98 "/usr/share/sip/qt/qbytearray.sip"
#include <qstring.h>
#line 38 "sipqtQFile.cc"
#line 120 "/usr/share/sip/qt/qcstring.sip"
#include <qcstring.h>
#line 41 "sipqtQFile.cc"


class sipQFile : public QFile
{
public:
    sipQFile();
    sipQFile(const QString&);
    virtual ~sipQFile();

    /*
     * There is a public method for every protected method visible from
     * this class.
     */
    void sipProtect_setFlags(int);
    void sipProtect_setType(int);
    void sipProtect_setMode(int);
    void sipProtect_setState(int);
    void sipProtect_setStatus(int);
    void sipProtect_setErrorString(const QString&);

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool open(int);
    void close();
    void flush();
    QIODevice::Offset size() const;
    QIODevice::Offset at() const;
    bool at(QIODevice::Offset);
    bool atEnd() const;
    Q_LONG readBlock(char *,Q_ULONG);
    Q_LONG writeBlock(const char *,unsigned long);
    Q_LONG readLine(char *,Q_ULONG);
    QByteArray readAll();
    int getch();
    int putch(int);
    int ungetch(int);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQFile(const sipQFile &);
    sipQFile &operator = (const sipQFile &);

    char sipPyMethods[14];
};

sipQFile::sipQFile(): QFile(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQFile::sipQFile(const QString& a0): QFile(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQFile::~sipQFile()
{
    sipCommonDtor(sipPySelf);
}

bool sipQFile::open(int a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_open);

    if (!meth)
        return QFile::open(a0);

    extern bool sipVH_qt_254(sip_gilstate_t,PyObject *,int);

    return sipVH_qt_254(sipGILState,meth,a0);
}

void sipQFile::close()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_close);

    if (!meth)
    {
        QFile::close();
        return;
    }

    extern void sipVH_qt_2(sip_gilstate_t,PyObject *);

    sipVH_qt_2(sipGILState,meth);
}

void sipQFile::flush()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_flush);

    if (!meth)
    {
        QFile::flush();
        return;
    }

    extern void sipVH_qt_2(sip_gilstate_t,PyObject *);

    sipVH_qt_2(sipGILState,meth);
}

QIODevice::Offset sipQFile::size() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[3]),sipPySelf,NULL,sipName_size);

    if (!meth)
        return QFile::size();

    extern unsigned long sipVH_qt_253(sip_gilstate_t,PyObject *);

    return sipVH_qt_253(sipGILState,meth);
}

QIODevice::Offset sipQFile::at() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[4]),sipPySelf,NULL,sipName_at);

    if (!meth)
        return QFile::at();

    extern unsigned long sipVH_qt_253(sip_gilstate_t,PyObject *);

    return sipVH_qt_253(sipGILState,meth);
}

bool sipQFile::at(QIODevice::Offset a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_at);

    if (!meth)
        return QFile::at(a0);

    extern bool sipVH_qt_252(sip_gilstate_t,PyObject *,unsigned long);

    return sipVH_qt_252(sipGILState,meth,a0);
}

bool sipQFile::atEnd() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[6]),sipPySelf,NULL,sipName_atEnd);

    if (!meth)
        return QFile::atEnd();

    extern bool sipVH_qt_42(sip_gilstate_t,PyObject *);

    return sipVH_qt_42(sipGILState,meth);
}

Q_LONG sipQFile::readBlock(char *a0,Q_ULONG a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipName_readBlock);

    if (!meth)
        return QFile::readBlock(a0,a1);

    extern long sipVH_qt_251(sip_gilstate_t,PyObject *,char *,unsigned long);

    return sipVH_qt_251(sipGILState,meth,a0,a1);
}

Q_LONG sipQFile::writeBlock(const char *a0,unsigned long a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,NULL,sipName_writeBlock);

    if (!meth)
        return QFile::writeBlock(a0,a1);

    extern long sipVH_qt_250(sip_gilstate_t,PyObject *,const char *,unsigned long);

    return sipVH_qt_250(sipGILState,meth,a0,a1);
}

Q_LONG sipQFile::readLine(char *a0,Q_ULONG a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[9],sipPySelf,NULL,sipName_readLine);

    if (!meth)
        return QFile::readLine(a0,a1);

    extern long sipVH_qt_249(sip_gilstate_t,PyObject *,char *,unsigned long);

    return sipVH_qt_249(sipGILState,meth,a0,a1);
}

QByteArray sipQFile::readAll()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[10],sipPySelf,NULL,sipName_readAll);

    if (!meth)
        return QIODevice::readAll();

    extern QByteArray sipVH_qt_158(sip_gilstate_t,PyObject *);

    return sipVH_qt_158(sipGILState,meth);
}

int sipQFile::getch()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[11],sipPySelf,NULL,sipName_getch);

    if (!meth)
        return QFile::getch();

    extern int sipVH_qt_106(sip_gilstate_t,PyObject *);

    return sipVH_qt_106(sipGILState,meth);
}

int sipQFile::putch(int a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[12],sipPySelf,NULL,sipName_putch);

    if (!meth)
        return QFile::putch(a0);

    extern int sipVH_qt_44(sip_gilstate_t,PyObject *,int);

    return sipVH_qt_44(sipGILState,meth,a0);
}

int sipQFile::ungetch(int a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[13],sipPySelf,NULL,sipName_ungetch);

    if (!meth)
        return QFile::ungetch(a0);

    extern int sipVH_qt_44(sip_gilstate_t,PyObject *,int);

    return sipVH_qt_44(sipGILState,meth,a0);
}

void sipQFile::sipProtect_setFlags(int a0)
{
    QIODevice::setFlags(a0);
}

void sipQFile::sipProtect_setType(int a0)
{
    QIODevice::setType(a0);
}

void sipQFile::sipProtect_setMode(int a0)
{
    QIODevice::setMode(a0);
}

void sipQFile::sipProtect_setState(int a0)
{
    QIODevice::setState(a0);
}

void sipQFile::sipProtect_setStatus(int a0)
{
    QIODevice::setStatus(a0);
}

void sipQFile::sipProtect_setErrorString(const QString& a0)
{
    QFile::setErrorString(a0);
}


extern "C" {static PyObject *meth_QFile_setFlags(PyObject *, PyObject *);}
static PyObject *meth_QFile_setFlags(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        sipQFile *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QFile, &sipCpp, &a0))
        {
            sipCpp->sipProtect_setFlags(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFile, sipName_setFlags, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFile_setType(PyObject *, PyObject *);}
static PyObject *meth_QFile_setType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        sipQFile *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QFile, &sipCpp, &a0))
        {
            sipCpp->sipProtect_setType(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFile, sipName_setType, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFile_setMode(PyObject *, PyObject *);}
static PyObject *meth_QFile_setMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        sipQFile *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QFile, &sipCpp, &a0))
        {
            sipCpp->sipProtect_setMode(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFile, sipName_setMode, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFile_setState(PyObject *, PyObject *);}
static PyObject *meth_QFile_setState(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        sipQFile *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QFile, &sipCpp, &a0))
        {
            sipCpp->sipProtect_setState(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFile, sipName_setState, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFile_setStatus(PyObject *, PyObject *);}
static PyObject *meth_QFile_setStatus(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        sipQFile *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QFile, &sipCpp, &a0))
        {
            sipCpp->sipProtect_setStatus(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFile, sipName_setStatus, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFile_name(PyObject *, PyObject *);}
static PyObject *meth_QFile_name(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QFile *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFile, &sipCpp))
        {
            QString *sipRes;

            sipRes = new QString(sipCpp->name());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFile, sipName_name, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFile_setName(PyObject *, PyObject *);}
static PyObject *meth_QFile_setName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        QFile *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QFile, &sipCpp, sipType_QString, &a0, &a0State))
        {
            sipCpp->setName(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFile, sipName_setName, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFile_encodeName(PyObject *, PyObject *);}
static PyObject *meth_QFile_encodeName(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QString, &a0, &a0State))
        {
            QCString *sipRes;

            sipRes = new QCString(QFile::encodeName(*a0));
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QCString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFile, sipName_encodeName, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFile_decodeName(PyObject *, PyObject *);}
static PyObject *meth_QFile_decodeName(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QCString * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QCString, &a0, &a0State))
        {
            QString *sipRes;

            sipRes = new QString(QFile::decodeName(*a0));
            sipReleaseType(const_cast<QCString *>(a0),sipType_QCString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFile, sipName_decodeName, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFile_exists(PyObject *, PyObject *);}
static PyObject *meth_QFile_exists(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QFile *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFile, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->exists();

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const QString * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QString, &a0, &a0State))
        {
            bool sipRes;

            sipRes = QFile::exists(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFile, sipName_exists, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFile_remove(PyObject *, PyObject *);}
static PyObject *meth_QFile_remove(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QFile *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFile, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->remove();

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const QString * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QString, &a0, &a0State))
        {
            bool sipRes;

            sipRes = QFile::remove(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFile, sipName_remove, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFile_open(PyObject *, PyObject *);}
static PyObject *meth_QFile_open(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        int a0;
        QFile *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QFile, &sipCpp, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QFile::open(a0) : sipCpp->open(a0));
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    {
        int a0;
        int a1;
        QFile *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bii", &sipSelf, sipType_QFile, &sipCpp, &a0, &a1))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->open(a0,a1);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFile, sipName_open, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFile_close(PyObject *, PyObject *);}
static PyObject *meth_QFile_close(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QFile *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFile, &sipCpp))
        {
            (sipSelfWasArg ? sipCpp->QFile::close() : sipCpp->close());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFile, sipName_close, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFile_flush(PyObject *, PyObject *);}
static PyObject *meth_QFile_flush(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QFile *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFile, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QFile::flush() : sipCpp->flush());
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFile, sipName_flush, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFile_size(PyObject *, PyObject *);}
static PyObject *meth_QFile_size(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QFile *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFile, &sipCpp))
        {
            QIODevice::Offset sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QFile::size() : sipCpp->size());

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFile, sipName_size, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFile_at(PyObject *, PyObject *);}
static PyObject *meth_QFile_at(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QFile *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFile, &sipCpp))
        {
            QIODevice::Offset sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QFile::at() : sipCpp->at());

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    {
        QIODevice::Offset a0;
        QFile *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bm", &sipSelf, sipType_QFile, &sipCpp, &a0))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QFile::at(a0) : sipCpp->at(a0));

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFile, sipName_at, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFile_atEnd(PyObject *, PyObject *);}
static PyObject *meth_QFile_atEnd(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QFile *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFile, &sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QFile::atEnd() : sipCpp->atEnd());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFile, sipName_atEnd, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFile_readBlock(PyObject *, PyObject *);}
static PyObject *meth_QFile_readBlock(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        Q_ULONG a0;
        QFile *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bm", &sipSelf, sipType_QFile, &sipCpp, &a0))
        {
            PyObject * sipRes = 0;
            int sipIsErr = 0;

#line 182 "/usr/share/sip/qt/qfile.sip"
		char *buf;

		if ((buf = (char *)sipMalloc(a0)) == NULL)
			sipIsErr = 1;
		else
		{
			Q_LONG actlen;

			Py_BEGIN_ALLOW_THREADS
			actlen = sipSelfWasArg ? sipCpp->QFile::readBlock(buf,a0) : sipCpp->readBlock(buf,a0);
			Py_END_ALLOW_THREADS

			if (actlen < 0)
			{
				Py_INCREF(Py_None);
				sipRes = Py_None;
			}
			else if ((sipRes = PyString_FromStringAndSize(buf,actlen)) == NULL)
				sipIsErr = 1;

			sipFree((ANY *)buf);
		}
#line 893 "sipqtQFile.cc"

            if (sipIsErr)
                return 0;

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFile, sipName_readBlock, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFile_writeBlock(PyObject *, PyObject *);}
static PyObject *meth_QFile_writeBlock(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const char * a0;
        SIP_SSIZE_T a1;
        QFile *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bk", &sipSelf, sipType_QFile, &sipCpp, &a0, &a1))
        {
            Q_LONG sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QFile::writeBlock(a0,(unsigned long)a1) : sipCpp->writeBlock(a0,(unsigned long)a1));
            Py_END_ALLOW_THREADS

            return PyLong_FromLong(sipRes);
        }
    }

    {
        const QByteArray * a0;
        int a0State = 0;
        QFile *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QFile, &sipCpp, sipType_QByteArray, &a0, &a0State))
        {
            Q_LONG sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->writeBlock(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            return PyLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFile, sipName_writeBlock, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFile_readLine(PyObject *, PyObject *);}
static PyObject *meth_QFile_readLine(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        Q_ULONG a0;
        QFile *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bm", &sipSelf, sipType_QFile, &sipCpp, &a0))
        {
            PyObject * sipRes = 0;
            int sipIsErr = 0;

#line 254 "/usr/share/sip/qt/qfile.sip"
		char *buf;

		if ((buf = (char *)sipMalloc(a0)) == NULL)
			sipIsErr = 1;
		else
		{
			Q_LONG actlen;

			Py_BEGIN_ALLOW_THREADS
			actlen = sipSelfWasArg ? sipCpp->QFile::readLine(buf,a0) : sipCpp->readLine(buf,a0);
			Py_END_ALLOW_THREADS

			if (actlen < 0)
			{
				sipFree((ANY *)buf);

				Py_INCREF(Py_None);
				sipRes = Py_None;
			}
			else
			{
				sipRes = PyString_FromStringAndSize(buf,actlen);

				sipFree((ANY *)buf);

				if (sipRes == NULL)
					sipIsErr = 1;
			}
		}
#line 1002 "sipqtQFile.cc"

            if (sipIsErr)
                return 0;

            return sipRes;
        }
    }

    {
        QString * a0;
        int a0State = 0;
        Q_ULONG a1;
        QFile *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1m", &sipSelf, sipType_QFile, &sipCpp, sipType_QString, &a0, &a0State, &a1))
        {
            Q_LONG sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->readLine(*a0,a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QString,a0State);

            return PyLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFile, sipName_readLine, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFile_getch(PyObject *, PyObject *);}
static PyObject *meth_QFile_getch(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QFile *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFile, &sipCpp))
        {
            int sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QFile::getch() : sipCpp->getch());

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFile, sipName_getch, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFile_putch(PyObject *, PyObject *);}
static PyObject *meth_QFile_putch(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        int a0;
        QFile *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QFile, &sipCpp, &a0))
        {
            int sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QFile::putch(a0) : sipCpp->putch(a0));

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFile, sipName_putch, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFile_ungetch(PyObject *, PyObject *);}
static PyObject *meth_QFile_ungetch(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        int a0;
        QFile *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QFile, &sipCpp, &a0))
        {
            int sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QFile::ungetch(a0) : sipCpp->ungetch(a0));

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFile, sipName_ungetch, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFile_handle(PyObject *, PyObject *);}
static PyObject *meth_QFile_handle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QFile *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFile, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->handle();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFile, sipName_handle, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFile_errorString(PyObject *, PyObject *);}
static PyObject *meth_QFile_errorString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QFile *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFile, &sipCpp))
        {
            QString *sipRes;

            sipRes = new QString(sipCpp->errorString());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFile, sipName_errorString, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFile_setErrorString(PyObject *, PyObject *);}
static PyObject *meth_QFile_setErrorString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        sipQFile *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QFile, &sipCpp, sipType_QString, &a0, &a0State))
        {
            sipCpp->sipProtect_setErrorString(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFile, sipName_setErrorString, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QFile(void *, const sipTypeDef *);}
static void *cast_QFile(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QFile)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QIODevice)->ctd_cast((QIODevice *)(QFile *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QFile(void *, int);}
static void release_QFile(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQFile *>(sipCppV);
    else
        delete reinterpret_cast<QFile *>(sipCppV);
}


extern "C" {static void dealloc_QFile(sipSimpleWrapper *);}
static void dealloc_QFile(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQFile *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QFile(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QFile(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QFile(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQFile *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQFile();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QString * a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QString, &a0, &a0State))
        {
            sipCpp = new sipQFile(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QFile[] = {{119, 255, 1}};


static PyMethodDef methods_QFile[] = {
    {SIP_MLNAME_CAST(sipName_at), meth_QFile_at, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_atEnd), meth_QFile_atEnd, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_close), meth_QFile_close, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_decodeName), meth_QFile_decodeName, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_encodeName), meth_QFile_encodeName, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_errorString), meth_QFile_errorString, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_exists), meth_QFile_exists, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_flush), meth_QFile_flush, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_getch), meth_QFile_getch, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_handle), meth_QFile_handle, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_name), meth_QFile_name, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_open), meth_QFile_open, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_putch), meth_QFile_putch, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_readBlock), meth_QFile_readBlock, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_readLine), meth_QFile_readLine, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_remove), meth_QFile_remove, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setErrorString), meth_QFile_setErrorString, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setFlags), meth_QFile_setFlags, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setMode), meth_QFile_setMode, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setName), meth_QFile_setName, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setState), meth_QFile_setState, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setStatus), meth_QFile_setStatus, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setType), meth_QFile_setType, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_size), meth_QFile_size, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_ungetch), meth_QFile_ungetch, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_writeBlock), meth_QFile_writeBlock, METH_VARARGS, NULL}
};


pyqt3ClassTypeDef sipTypeDef_qt_QFile = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QFile,
        {0}
    },
    {
        sipNameNr_QFile,
        {0, 0, 1},
        26, methods_QFile,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QFile,
    0,
    init_QFile,
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
    dealloc_QFile,
    0,
    0,
    0,
    release_QFile,
    cast_QFile,
    0,
    0,
    0
},
    0
};
