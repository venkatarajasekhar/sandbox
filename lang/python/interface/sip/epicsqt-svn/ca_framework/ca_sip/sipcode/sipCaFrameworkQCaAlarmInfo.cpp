/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.10.2 on Fri Apr 22 17:31:55 2011
 */

#include "sipAPICaFramework.h"

#line 5 "QCaAlarmInfo.sip"
#include <QCaAlarmInfo.h>
#line 12 "sipCaFrameworkQCaAlarmInfo.cpp"

#line 41 "/usr/share/sip/PyQt4/QtCore/qstring.sip"
#include <qstring.h>
#line 16 "sipCaFrameworkQCaAlarmInfo.cpp"


extern "C" {static PyObject *meth_QCaAlarmInfo_statusName(PyObject *, PyObject *);}
static PyObject *meth_QCaAlarmInfo_statusName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QCaAlarmInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QCaAlarmInfo, &sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->statusName());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCaAlarmInfo, sipName_statusName, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QCaAlarmInfo_severityName(PyObject *, PyObject *);}
static PyObject *meth_QCaAlarmInfo_severityName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QCaAlarmInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QCaAlarmInfo, &sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->severityName());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCaAlarmInfo, sipName_severityName, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QCaAlarmInfo_isInAlarm(PyObject *, PyObject *);}
static PyObject *meth_QCaAlarmInfo_isInAlarm(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QCaAlarmInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QCaAlarmInfo, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isInAlarm();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCaAlarmInfo, sipName_isInAlarm, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QCaAlarmInfo_isMinor(PyObject *, PyObject *);}
static PyObject *meth_QCaAlarmInfo_isMinor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QCaAlarmInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QCaAlarmInfo, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isMinor();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCaAlarmInfo, sipName_isMinor, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QCaAlarmInfo_isMajor(PyObject *, PyObject *);}
static PyObject *meth_QCaAlarmInfo_isMajor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QCaAlarmInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QCaAlarmInfo, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isMajor();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCaAlarmInfo, sipName_isMajor, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QCaAlarmInfo_isInvalid(PyObject *, PyObject *);}
static PyObject *meth_QCaAlarmInfo_isInvalid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QCaAlarmInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QCaAlarmInfo, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isInvalid();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCaAlarmInfo, sipName_isInvalid, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QCaAlarmInfo_style(PyObject *, PyObject *);}
static PyObject *meth_QCaAlarmInfo_style(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QCaAlarmInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QCaAlarmInfo, &sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->style());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCaAlarmInfo, sipName_style, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QCaAlarmInfo(void *, const sipTypeDef *);}
static void *cast_QCaAlarmInfo(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QCaAlarmInfo)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QCaAlarmInfo(void *, int);}
static void release_QCaAlarmInfo(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QCaAlarmInfo *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QCaAlarmInfo(void *, SIP_SSIZE_T, const void *);}
static void assign_QCaAlarmInfo(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QCaAlarmInfo *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QCaAlarmInfo *>(sipSrc);
}


extern "C" {static void *array_QCaAlarmInfo(SIP_SSIZE_T);}
static void *array_QCaAlarmInfo(SIP_SSIZE_T sipNrElem)
{
    return new QCaAlarmInfo[sipNrElem];
}


extern "C" {static void *copy_QCaAlarmInfo(const void *, SIP_SSIZE_T);}
static void *copy_QCaAlarmInfo(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QCaAlarmInfo(reinterpret_cast<const QCaAlarmInfo *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QCaAlarmInfo(sipSimpleWrapper *);}
static void dealloc_QCaAlarmInfo(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QCaAlarmInfo(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QCaAlarmInfo(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QCaAlarmInfo(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QCaAlarmInfo *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QCaAlarmInfo();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        unsigned short a0;
        unsigned short a1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "tt", &a0, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QCaAlarmInfo(a0,a1);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QCaAlarmInfo * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QCaAlarmInfo, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QCaAlarmInfo(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QCaAlarmInfo[] = {
    {SIP_MLNAME_CAST(sipName_isInAlarm), meth_QCaAlarmInfo_isInAlarm, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isInvalid), meth_QCaAlarmInfo_isInvalid, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isMajor), meth_QCaAlarmInfo_isMajor, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isMinor), meth_QCaAlarmInfo_isMinor, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_severityName), meth_QCaAlarmInfo_severityName, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_statusName), meth_QCaAlarmInfo_statusName, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_style), meth_QCaAlarmInfo_style, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_CaFramework_QCaAlarmInfo = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QCaAlarmInfo,
        {0}
    },
    {
        sipNameNr_QCaAlarmInfo,
        {0, 0, 1},
        7, methods_QCaAlarmInfo,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    -1,
    0,
    0,
    init_QCaAlarmInfo,
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
    dealloc_QCaAlarmInfo,
    assign_QCaAlarmInfo,
    array_QCaAlarmInfo,
    copy_QCaAlarmInfo,
    release_QCaAlarmInfo,
    cast_QCaAlarmInfo,
    0,
    0,
    0
},
    0,
    0,
    0
};