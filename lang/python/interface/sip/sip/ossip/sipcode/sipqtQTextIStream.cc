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

#line 199 "/usr/share/sip/qt/qtextstream.sip"
#include <qtextstream.h>
#line 31 "sipqtQTextIStream.cc"

#line 449 "/usr/share/sip/qt/qstring.sip"
#include <qstring.h>
#line 35 "sipqtQTextIStream.cc"
#line 98 "/usr/share/sip/qt/qbytearray.sip"
#include <qstring.h>
#line 38 "sipqtQTextIStream.cc"
#line 81 "/usr/share/sip/qt/qtextstream.sip"
#include <qtextstream.h>
#line 41 "sipqtQTextIStream.cc"
#line 71 "/usr/share/sip/qt/qmainwindow.sip"
#include <qmainwindow.h>
#line 44 "sipqtQTextIStream.cc"
#line 43 "/usr/share/sip/qt/qdockarea.sip"
#include <qdockarea.h>
#line 47 "sipqtQTextIStream.cc"
#line 83 "/usr/share/sip/qt/qiodevice.sip"
#include <qiodevice.h>
#line 50 "sipqtQTextIStream.cc"
#line 84 "/usr/share/sip/qt/qtextcodec.sip"
#include <qtextcodec.h>
#line 53 "sipqtQTextIStream.cc"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QTextIStream(void *, const sipTypeDef *);}
static void *cast_QTextIStream(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QTextIStream)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QTextStream)->ctd_cast((QTextStream *)(QTextIStream *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTextIStream(void *, int);}
static void release_QTextIStream(void *sipCppV,int)
{
    delete reinterpret_cast<QTextIStream *>(sipCppV);
}


extern "C" {static void dealloc_QTextIStream(sipSimpleWrapper *);}
static void dealloc_QTextIStream(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QTextIStream(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QTextIStream(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QTextIStream(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QTextIStream *sipCpp = 0;

    {
        QString * a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J0", sipType_QString, &a0, &a0State))
        {
            sipCpp = new QTextIStream(a0);
            sipReleaseType(a0,sipType_QString,a0State);

            return sipCpp;
        }
    }

    {
        QByteArray * a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QByteArray, &a0, &a0State))
        {
            sipCpp = new QTextIStream(*a0);
            sipReleaseType(a0,sipType_QByteArray,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QTextIStream[] = {{340, 255, 1}};


pyqt3ClassTypeDef sipTypeDef_qt_QTextIStream = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QTextIStream,
        {0}
    },
    {
        sipNameNr_QTextIStream,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QTextIStream,
    0,
    init_QTextIStream,
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
    dealloc_QTextIStream,
    0,
    0,
    0,
    release_QTextIStream,
    cast_QTextIStream,
    0,
    0,
    0
},
    0
};