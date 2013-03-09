/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.10.2 on Fri Apr 22 17:31:55 2011
 */

#include "sipAPICaFramework.h"

#line 5 "QCaToolTip.sip"
#include <QCaToolTip.h>
#line 12 "sipCaFrameworkQCaToolTip.cpp"

#line 41 "/usr/share/sip/PyQt4/QtCore/qstring.sip"
#include <qstring.h>
#line 16 "sipCaFrameworkQCaToolTip.cpp"


class sipQCaToolTip : public QCaToolTip
{
public:
    sipQCaToolTip();
    sipQCaToolTip(const QCaToolTip&);
    virtual ~sipQCaToolTip();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void updateToolTip(const QString&);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQCaToolTip(const sipQCaToolTip &);
    sipQCaToolTip &operator = (const sipQCaToolTip &);

    char sipPyMethods[1];
};

sipQCaToolTip::sipQCaToolTip(): QCaToolTip(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQCaToolTip::sipQCaToolTip(const QCaToolTip& a0): QCaToolTip(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQCaToolTip::~sipQCaToolTip()
{
    sipCommonDtor(sipPySelf);
}

void sipQCaToolTip::updateToolTip(const QString& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_QCaToolTip,sipName_updateToolTip);

    if (!meth)
        return;

    typedef void (*sipVH_QtCore_33)(sip_gilstate_t,PyObject *,const QString&);

    ((sipVH_QtCore_33)(sipModuleAPI_CaFramework_QtCore->em_virthandlers[33]))(sipGILState,meth,a0);
}


extern "C" {static PyObject *meth_QCaToolTip_updateToolTipVariable(PyObject *, PyObject *);}
static PyObject *meth_QCaToolTip_updateToolTipVariable(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        QCaToolTip *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QCaToolTip, &sipCpp, sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->updateToolTipVariable(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCaToolTip, sipName_updateToolTipVariable, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QCaToolTip_updateToolTipAlarm(PyObject *, PyObject *);}
static PyObject *meth_QCaToolTip_updateToolTipAlarm(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        QCaToolTip *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QCaToolTip, &sipCpp, sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->updateToolTipAlarm(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCaToolTip, sipName_updateToolTipAlarm, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QCaToolTip_updateToolTipConnection(PyObject *, PyObject *);}
static PyObject *meth_QCaToolTip_updateToolTipConnection(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        QCaToolTip *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QCaToolTip, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->updateToolTipConnection(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCaToolTip, sipName_updateToolTipConnection, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QCaToolTip_updateToolTip(PyObject *, PyObject *);}
static PyObject *meth_QCaToolTip_updateToolTip(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QString * a0;
        int a0State = 0;
        QCaToolTip *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QCaToolTip, &sipCpp, sipType_QString,&a0, &a0State))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QCaToolTip, sipName_updateToolTip);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->updateToolTip(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCaToolTip, sipName_updateToolTip, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QCaToolTip_displayToolTip(PyObject *, PyObject *);}
static PyObject *meth_QCaToolTip_displayToolTip(PyObject *, PyObject *)
{

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(NULL, sipName_QCaToolTip, sipName_displayToolTip, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QCaToolTip(void *, const sipTypeDef *);}
static void *cast_QCaToolTip(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QCaToolTip)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QCaToolTip(void *, int);}
static void release_QCaToolTip(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQCaToolTip *>(sipCppV);
    else
        delete reinterpret_cast<QCaToolTip *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QCaToolTip(sipSimpleWrapper *);}
static void dealloc_QCaToolTip(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQCaToolTip *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QCaToolTip(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QCaToolTip(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QCaToolTip(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQCaToolTip *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQCaToolTip();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QCaToolTip * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QCaToolTip, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQCaToolTip(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QCaToolTip[] = {
    {SIP_MLNAME_CAST(sipName_displayToolTip), meth_QCaToolTip_displayToolTip, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_updateToolTip), meth_QCaToolTip_updateToolTip, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_updateToolTipAlarm), meth_QCaToolTip_updateToolTipAlarm, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_updateToolTipConnection), meth_QCaToolTip_updateToolTipConnection, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_updateToolTipVariable), meth_QCaToolTip_updateToolTipVariable, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_CaFramework_QCaToolTip = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_QCaToolTip,
        {0}
    },
    {
        sipNameNr_QCaToolTip,
        {0, 0, 1},
        5, methods_QCaToolTip,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    -1,
    0,
    0,
    init_QCaToolTip,
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
    dealloc_QCaToolTip,
    0,
    0,
    0,
    release_QCaToolTip,
    cast_QCaToolTip,
    0,
    0,
    0
},
    0,
    0,
    0
};