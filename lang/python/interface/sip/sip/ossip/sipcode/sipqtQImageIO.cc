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

#line 410 "/usr/share/sip/qt/qimage.sip"
#include <qimage.h>
#line 31 "sipqtQImageIO.cc"

#line 83 "/usr/share/sip/qt/qiodevice.sip"
#include <qiodevice.h>
#line 35 "sipqtQImageIO.cc"
#line 449 "/usr/share/sip/qt/qstring.sip"
#include <qstring.h>
#line 38 "sipqtQImageIO.cc"
#line 37 "/usr/share/sip/qt/qstrlist.sip"
#include <qstrlist.h>
#line 41 "sipqtQImageIO.cc"
#line 139 "/usr/share/sip/qt/qimage.sip"
#include <qimage.h>
#line 44 "sipqtQImageIO.cc"


extern "C" {static PyObject *meth_QImageIO_image(PyObject *, PyObject *);}
static PyObject *meth_QImageIO_image(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QImageIO *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QImageIO, &sipCpp))
        {
            QImage *sipRes;

            sipRes = new QImage(sipCpp->image());

            return sipConvertFromNewType(sipRes,sipType_QImage,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageIO, sipName_image, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QImageIO_status(PyObject *, PyObject *);}
static PyObject *meth_QImageIO_status(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QImageIO *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QImageIO, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->status();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageIO, sipName_status, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QImageIO_format(PyObject *, PyObject *);}
static PyObject *meth_QImageIO_format(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QImageIO *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QImageIO, &sipCpp))
        {
            const char *sipRes;

            sipRes = sipCpp->format();

            if (sipRes == NULL)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return SIPBytes_FromString(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageIO, sipName_format, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QImageIO_ioDevice(PyObject *, PyObject *);}
static PyObject *meth_QImageIO_ioDevice(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QImageIO *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QImageIO, &sipCpp))
        {
            QIODevice *sipRes;

            sipRes = sipCpp->ioDevice();

            return sipConvertFromType(sipRes,sipType_QIODevice,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageIO, sipName_ioDevice, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QImageIO_fileName(PyObject *, PyObject *);}
static PyObject *meth_QImageIO_fileName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QImageIO *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QImageIO, &sipCpp))
        {
            QString *sipRes;

            sipRes = new QString(sipCpp->fileName());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageIO, sipName_fileName, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QImageIO_quality(PyObject *, PyObject *);}
static PyObject *meth_QImageIO_quality(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QImageIO *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QImageIO, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->quality();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageIO, sipName_quality, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QImageIO_description(PyObject *, PyObject *);}
static PyObject *meth_QImageIO_description(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QImageIO *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QImageIO, &sipCpp))
        {
            QString *sipRes;

            sipRes = new QString(sipCpp->description());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageIO, sipName_description, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QImageIO_parameters(PyObject *, PyObject *);}
static PyObject *meth_QImageIO_parameters(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QImageIO *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QImageIO, &sipCpp))
        {
            const char *sipRes;

            sipRes = sipCpp->parameters();

            if (sipRes == NULL)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return SIPBytes_FromString(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageIO, sipName_parameters, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QImageIO_gamma(PyObject *, PyObject *);}
static PyObject *meth_QImageIO_gamma(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QImageIO *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QImageIO, &sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->gamma();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageIO, sipName_gamma, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QImageIO_setImage(PyObject *, PyObject *);}
static PyObject *meth_QImageIO_setImage(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QImage * a0;
        QImageIO *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QImageIO, &sipCpp, sipType_QImage, &a0))
        {
            sipCpp->setImage(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageIO, sipName_setImage, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QImageIO_setStatus(PyObject *, PyObject *);}
static PyObject *meth_QImageIO_setStatus(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QImageIO *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QImageIO, &sipCpp, &a0))
        {
            sipCpp->setStatus(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageIO, sipName_setStatus, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QImageIO_setFormat(PyObject *, PyObject *);}
static PyObject *meth_QImageIO_setFormat(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const char * a0;
        QImageIO *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bs", &sipSelf, sipType_QImageIO, &sipCpp, &a0))
        {
            sipCpp->setFormat(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageIO, sipName_setFormat, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QImageIO_setIODevice(PyObject *, PyObject *);}
static PyObject *meth_QImageIO_setIODevice(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QIODevice * a0;
        QImageIO *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QImageIO, &sipCpp, sipType_QIODevice, &a0))
        {
            sipCpp->setIODevice(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageIO, sipName_setIODevice, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QImageIO_setFileName(PyObject *, PyObject *);}
static PyObject *meth_QImageIO_setFileName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        QImageIO *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QImageIO, &sipCpp, sipType_QString, &a0, &a0State))
        {
            sipCpp->setFileName(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageIO, sipName_setFileName, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QImageIO_setQuality(PyObject *, PyObject *);}
static PyObject *meth_QImageIO_setQuality(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QImageIO *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QImageIO, &sipCpp, &a0))
        {
            sipCpp->setQuality(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageIO, sipName_setQuality, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QImageIO_setDescription(PyObject *, PyObject *);}
static PyObject *meth_QImageIO_setDescription(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        QImageIO *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QImageIO, &sipCpp, sipType_QString, &a0, &a0State))
        {
            sipCpp->setDescription(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageIO, sipName_setDescription, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QImageIO_setParameters(PyObject *, PyObject *);}
static PyObject *meth_QImageIO_setParameters(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const char * a0;
        QImageIO *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bs", &sipSelf, sipType_QImageIO, &sipCpp, &a0))
        {
            sipCpp->setParameters(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageIO, sipName_setParameters, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QImageIO_setGamma(PyObject *, PyObject *);}
static PyObject *meth_QImageIO_setGamma(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        float a0;
        QImageIO *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bf", &sipSelf, sipType_QImageIO, &sipCpp, &a0))
        {
            sipCpp->setGamma(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageIO, sipName_setGamma, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QImageIO_read(PyObject *, PyObject *);}
static PyObject *meth_QImageIO_read(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QImageIO *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QImageIO, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->read();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageIO, sipName_read, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QImageIO_write(PyObject *, PyObject *);}
static PyObject *meth_QImageIO_write(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QImageIO *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QImageIO, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->write();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageIO, sipName_write, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QImageIO_imageFormat(PyObject *, PyObject *);}
static PyObject *meth_QImageIO_imageFormat(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QString, &a0, &a0State))
        {
            const char *sipRes;

            sipRes = QImageIO::imageFormat(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            if (sipRes == NULL)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return SIPBytes_FromString(sipRes);
        }
    }

    {
        QIODevice * a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8", sipType_QIODevice, &a0))
        {
            const char *sipRes;

            sipRes = QImageIO::imageFormat(a0);

            if (sipRes == NULL)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return SIPBytes_FromString(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageIO, sipName_imageFormat, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QImageIO_inputFormats(PyObject *, PyObject *);}
static PyObject *meth_QImageIO_inputFormats(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QStrList *sipRes;

            sipRes = new QStrList(QImageIO::inputFormats());

            return sipConvertFromNewType(sipRes,sipType_QStrList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageIO, sipName_inputFormats, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QImageIO_outputFormats(PyObject *, PyObject *);}
static PyObject *meth_QImageIO_outputFormats(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QStrList *sipRes;

            sipRes = new QStrList(QImageIO::outputFormats());

            return sipConvertFromNewType(sipRes,sipType_QStrList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageIO, sipName_outputFormats, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QImageIO(void *, const sipTypeDef *);}
static void *cast_QImageIO(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QImageIO)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QImageIO(void *, int);}
static void release_QImageIO(void *sipCppV,int)
{
    delete reinterpret_cast<QImageIO *>(sipCppV);
}


extern "C" {static void dealloc_QImageIO(sipSimpleWrapper *);}
static void dealloc_QImageIO(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QImageIO(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QImageIO(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QImageIO(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QImageIO *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QImageIO();

            return sipCpp;
        }
    }

    {
        QIODevice * a0;
        const char * a1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J8s", sipType_QIODevice, &a0, &a1))
        {
            sipCpp = new QImageIO(a0,a1);

            return sipCpp;
        }
    }

    {
        const QString * a0;
        int a0State = 0;
        const char * a1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1s", sipType_QString, &a0, &a0State, &a1))
        {
            sipCpp = new QImageIO(*a0,a1);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QImageIO[] = {
    {SIP_MLNAME_CAST(sipName_description), meth_QImageIO_description, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_fileName), meth_QImageIO_fileName, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_format), meth_QImageIO_format, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_gamma), meth_QImageIO_gamma, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_image), meth_QImageIO_image, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_imageFormat), meth_QImageIO_imageFormat, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_inputFormats), meth_QImageIO_inputFormats, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_ioDevice), meth_QImageIO_ioDevice, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_outputFormats), meth_QImageIO_outputFormats, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_parameters), meth_QImageIO_parameters, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_quality), meth_QImageIO_quality, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_read), meth_QImageIO_read, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setDescription), meth_QImageIO_setDescription, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setFileName), meth_QImageIO_setFileName, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setFormat), meth_QImageIO_setFormat, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setGamma), meth_QImageIO_setGamma, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setIODevice), meth_QImageIO_setIODevice, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setImage), meth_QImageIO_setImage, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setParameters), meth_QImageIO_setParameters, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setQuality), meth_QImageIO_setQuality, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setStatus), meth_QImageIO_setStatus, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_status), meth_QImageIO_status, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_write), meth_QImageIO_write, METH_VARARGS, NULL}
};


pyqt3ClassTypeDef sipTypeDef_qt_QImageIO = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QImageIO,
        {0}
    },
    {
        sipNameNr_QImageIO,
        {0, 0, 1},
        23, methods_QImageIO,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_qt_pyqtWrapperType,
    sipNameNr_qt_pyqtWrapper,
    0,
    0,
    init_QImageIO,
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
    dealloc_QImageIO,
    0,
    0,
    0,
    release_QImageIO,
    cast_QImageIO,
    0,
    0,
    0
},
    0
};
