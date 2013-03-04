/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.10.2 on Fri Apr 22 17:31:55 2011
 */

#include "sipAPICaFramework.h"

#line 4 "Generic.sip"
#include <Generic.h>
#line 12 "Generic.sip"
#include <Generic.h>
#line 14 "sipCaFrameworkgenericGeneric.cpp"

#line 4 "Generic.sip"
#include <Generic.h>
#line 12 "Generic.sip"
#include <Generic.h>
#line 20 "sipCaFrameworkgenericGeneric.cpp"
#line 4 "MappedType.sip"
#include <string>
#line 23 "sipCaFrameworkgenericGeneric.cpp"


class sipgeneric_Generic : public generic::Generic
{
public:
    sipgeneric_Generic();
    sipgeneric_Generic(generic::Generic&);
    ~sipgeneric_Generic();

    /*
     * There is a public method for every protected method visible from
     * this class.
     */
    void sipProtect_cloneValue(generic::Generic *);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipgeneric_Generic(const sipgeneric_Generic &);
    sipgeneric_Generic &operator = (const sipgeneric_Generic &);
};

sipgeneric_Generic::sipgeneric_Generic(): generic::Generic(), sipPySelf(0)
{
}

sipgeneric_Generic::sipgeneric_Generic(generic::Generic& a0): generic::Generic(a0), sipPySelf(0)
{
}

sipgeneric_Generic::~sipgeneric_Generic()
{
    sipCommonDtor(sipPySelf);
}

void sipgeneric_Generic::sipProtect_cloneValue(generic::Generic *a0)
{
    generic::Generic::cloneValue(a0);
}


extern "C" {static PyObject *meth_generic_Generic_setString(PyObject *, PyObject *);}
static PyObject *meth_generic_Generic_setString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        std::string * a0;
        int a0State = 0;
        generic::Generic *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_generic_Generic, &sipCpp, sipType_std_string,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setString(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_std_string,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Generic, sipName_setString, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_generic_Generic_setShort(PyObject *, PyObject *);}
static PyObject *meth_generic_Generic_setShort(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        short a0;
        generic::Generic *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bh", &sipSelf, sipType_generic_Generic, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setShort(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Generic, sipName_setShort, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_generic_Generic_setChar(PyObject *, PyObject *);}
static PyObject *meth_generic_Generic_setChar(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        char a0;
        generic::Generic *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bc", &sipSelf, sipType_generic_Generic, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setChar(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Generic, sipName_setChar, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_generic_Generic_setUnsignedLong(PyObject *, PyObject *);}
static PyObject *meth_generic_Generic_setUnsignedLong(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        unsigned long a0;
        generic::Generic *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bm", &sipSelf, sipType_generic_Generic, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setUnsignedLong(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Generic, sipName_setUnsignedLong, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_generic_Generic_setDouble(PyObject *, PyObject *);}
static PyObject *meth_generic_Generic_setDouble(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        double a0;
        generic::Generic *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_generic_Generic, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setDouble(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        double a0;
        unsigned long a1;
        generic::Generic *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bm", &sipSelf, sipType_generic_Generic, &sipCpp, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setDouble(&a0,a1);
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(a0);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Generic, sipName_setDouble, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_generic_Generic_getString(PyObject *, PyObject *);}
static PyObject *meth_generic_Generic_getString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        generic::Generic *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_generic_Generic, &sipCpp))
        {
            std::string *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new std::string(sipCpp->getString());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_std_string,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Generic, sipName_getString, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_generic_Generic_getShort(PyObject *, PyObject *);}
static PyObject *meth_generic_Generic_getShort(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        generic::Generic *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_generic_Generic, &sipCpp))
        {
            short sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->getShort();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Generic, sipName_getShort, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_generic_Generic_getChar(PyObject *, PyObject *);}
static PyObject *meth_generic_Generic_getChar(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        generic::Generic *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_generic_Generic, &sipCpp))
        {
            char sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->getChar();
            Py_END_ALLOW_THREADS

            return SIPBytes_FromStringAndSize(&sipRes,1);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Generic, sipName_getChar, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_generic_Generic_getUnsignedLong(PyObject *, PyObject *);}
static PyObject *meth_generic_Generic_getUnsignedLong(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        generic::Generic *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_generic_Generic, &sipCpp))
        {
            unsigned long sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->getUnsignedLong();
            Py_END_ALLOW_THREADS

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Generic, sipName_getUnsignedLong, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_generic_Generic_getDouble(PyObject *, PyObject *);}
static PyObject *meth_generic_Generic_getDouble(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        generic::Generic *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_generic_Generic, &sipCpp))
        {
            double sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->getDouble();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Generic, sipName_getDouble, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_generic_Generic_getArrayCount(PyObject *, PyObject *);}
static PyObject *meth_generic_Generic_getArrayCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        generic::Generic *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_generic_Generic, &sipCpp))
        {
            unsigned long sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->getArrayCount();
            Py_END_ALLOW_THREADS

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Generic, sipName_getArrayCount, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_generic_Generic_getType(PyObject *, PyObject *);}
static PyObject *meth_generic_Generic_getType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        generic::Generic *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_generic_Generic, &sipCpp))
        {
            generic::generic_types sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->getType();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_generic_generic_types);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Generic, sipName_getType, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_generic_Generic_cloneValue(PyObject *, PyObject *);}
static PyObject *meth_generic_Generic_cloneValue(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        generic::Generic * a0;
        sipgeneric_Generic *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_generic_Generic, &sipCpp, sipType_generic_Generic, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtect_cloneValue(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Generic, sipName_cloneValue, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_generic_Generic_setType(PyObject *, PyObject *);}
static PyObject *meth_generic_Generic_setType(PyObject *, PyObject *)
{

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(NULL, sipName_Generic, sipName_setType, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_generic_Generic_deleteValue(PyObject *, PyObject *);}
static PyObject *meth_generic_Generic_deleteValue(PyObject *, PyObject *)
{

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(NULL, sipName_Generic, sipName_deleteValue, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_generic_Generic(void *, const sipTypeDef *);}
static void *cast_generic_Generic(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_generic_Generic)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_generic_Generic(void *, int);}
static void release_generic_Generic(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipgeneric_Generic *>(sipCppV);
    else
        delete reinterpret_cast<generic::Generic *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_generic_Generic(sipSimpleWrapper *);}
static void dealloc_generic_Generic(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipgeneric_Generic *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_generic_Generic(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_generic_Generic(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_generic_Generic(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipgeneric_Generic *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipgeneric_Generic();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        generic::Generic * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_generic_Generic, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipgeneric_Generic(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_generic_Generic[] = {
    {SIP_MLNAME_CAST(sipName_cloneValue), meth_generic_Generic_cloneValue, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_deleteValue), meth_generic_Generic_deleteValue, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_getArrayCount), meth_generic_Generic_getArrayCount, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_getChar), meth_generic_Generic_getChar, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_getDouble), meth_generic_Generic_getDouble, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_getShort), meth_generic_Generic_getShort, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_getString), meth_generic_Generic_getString, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_getType), meth_generic_Generic_getType, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_getUnsignedLong), meth_generic_Generic_getUnsignedLong, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setChar), meth_generic_Generic_setChar, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setDouble), meth_generic_Generic_setDouble, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setShort), meth_generic_Generic_setShort, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setString), meth_generic_Generic_setString, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setType), meth_generic_Generic_setType, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setUnsignedLong), meth_generic_Generic_setUnsignedLong, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_CaFramework_generic_Generic = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_generic__Generic,
        {0}
    },
    {
        sipNameNr_Generic,
        {30, 255, 0},
        15, methods_generic_Generic,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    -1,
    0,
    0,
    init_generic_Generic,
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
    dealloc_generic_Generic,
    0,
    0,
    0,
    release_generic_Generic,
    cast_generic_Generic,
    0,
    0,
    0
},
    0,
    0,
    0
};
