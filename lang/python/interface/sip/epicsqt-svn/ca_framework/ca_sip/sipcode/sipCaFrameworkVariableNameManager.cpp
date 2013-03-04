/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.10.2 on Fri Apr 22 17:31:55 2011
 */

#include "sipAPICaFramework.h"

#line 4 "VariableNameManager.sip"
#include <VariableNameManager.h>
#line 12 "sipCaFrameworkVariableNameManager.cpp"

#line 41 "/usr/share/sip/PyQt4/QtCore/qstring.sip"
#include <qstring.h>
#line 16 "sipCaFrameworkVariableNameManager.cpp"


class sipVariableNameManager : public VariableNameManager
{
public:
    sipVariableNameManager();
    sipVariableNameManager(const VariableNameManager&);
    virtual ~sipVariableNameManager();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void establishConnection(unsigned);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipVariableNameManager(const sipVariableNameManager &);
    sipVariableNameManager &operator = (const sipVariableNameManager &);

    char sipPyMethods[1];
};

sipVariableNameManager::sipVariableNameManager(): VariableNameManager(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipVariableNameManager::sipVariableNameManager(const VariableNameManager& a0): VariableNameManager(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipVariableNameManager::~sipVariableNameManager()
{
    sipCommonDtor(sipPySelf);
}

void sipVariableNameManager::establishConnection(unsigned a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_VariableNameManager,sipName_establishConnection);

    if (!meth)
        return;

    extern void sipVH_CaFramework_0(sip_gilstate_t,PyObject *,unsigned);

    sipVH_CaFramework_0(sipGILState,meth,a0);
}


extern "C" {static PyObject *meth_VariableNameManager_variableNameManagerInitialise(PyObject *, PyObject *);}
static PyObject *meth_VariableNameManager_variableNameManagerInitialise(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        unsigned a0;
        VariableNameManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bu", &sipSelf, sipType_VariableNameManager, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->variableNameManagerInitialise(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_VariableNameManager, sipName_variableNameManagerInitialise, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_VariableNameManager_getOriginalVariableName(PyObject *, PyObject *);}
static PyObject *meth_VariableNameManager_getOriginalVariableName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        unsigned a0;
        VariableNameManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bu", &sipSelf, sipType_VariableNameManager, &sipCpp, &a0))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->getOriginalVariableName(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_VariableNameManager, sipName_getOriginalVariableName, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_VariableNameManager_getVariableNameSubstitutions(PyObject *, PyObject *);}
static PyObject *meth_VariableNameManager_getVariableNameSubstitutions(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        VariableNameManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_VariableNameManager, &sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->getVariableNameSubstitutions());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_VariableNameManager, sipName_getVariableNameSubstitutions, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_VariableNameManager_getSubstitutedVariableName(PyObject *, PyObject *);}
static PyObject *meth_VariableNameManager_getSubstitutedVariableName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        unsigned a0;
        VariableNameManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bu", &sipSelf, sipType_VariableNameManager, &sipCpp, &a0))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->getSubstitutedVariableName(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_VariableNameManager, sipName_getSubstitutedVariableName, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_VariableNameManager_initialiseVariableNameSubstitutions(PyObject *, PyObject *);}
static PyObject *meth_VariableNameManager_initialiseVariableNameSubstitutions(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        VariableNameManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_VariableNameManager, &sipCpp, sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->initialiseVariableNameSubstitutions(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_VariableNameManager, sipName_initialiseVariableNameSubstitutions, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_VariableNameManager_establishConnection(PyObject *, PyObject *);}
static PyObject *meth_VariableNameManager_establishConnection(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        unsigned a0;
        VariableNameManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bu", &sipSelf, sipType_VariableNameManager, &sipCpp, &a0))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_VariableNameManager, sipName_establishConnection);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->establishConnection(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_VariableNameManager, sipName_establishConnection, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_VariableNameManager_setVariableNameSubstitutionsOverride(PyObject *, PyObject *);}
static PyObject *meth_VariableNameManager_setVariableNameSubstitutionsOverride(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        VariableNameManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_VariableNameManager, &sipCpp, sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setVariableNameSubstitutionsOverride(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_VariableNameManager, sipName_setVariableNameSubstitutionsOverride, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_VariableNameManager_setVariableName(PyObject *, PyObject *);}
static PyObject *meth_VariableNameManager_setVariableName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        unsigned a1;
        VariableNameManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1u", &sipSelf, sipType_VariableNameManager, &sipCpp, sipType_QString,&a0, &a0State, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setVariableName(*a0,a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_VariableNameManager, sipName_setVariableName, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_VariableNameManager_setVariableNameSubstitutions(PyObject *, PyObject *);}
static PyObject *meth_VariableNameManager_setVariableNameSubstitutions(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        VariableNameManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_VariableNameManager, &sipCpp, sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setVariableNameSubstitutions(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_VariableNameManager, sipName_setVariableNameSubstitutions, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_VariableNameManager_doSubstitution(PyObject *, PyObject *);}
static PyObject *meth_VariableNameManager_doSubstitution(PyObject *, PyObject *)
{

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(NULL, sipName_VariableNameManager, sipName_doSubstitution, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_VariableNameManager_standardizeSubs(PyObject *, PyObject *);}
static PyObject *meth_VariableNameManager_standardizeSubs(PyObject *, PyObject *)
{

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(NULL, sipName_VariableNameManager, sipName_standardizeSubs, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_VariableNameManager(void *, const sipTypeDef *);}
static void *cast_VariableNameManager(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_VariableNameManager)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_VariableNameManager(void *, int);}
static void release_VariableNameManager(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipVariableNameManager *>(sipCppV);
    else
        delete reinterpret_cast<VariableNameManager *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_VariableNameManager(sipSimpleWrapper *);}
static void dealloc_VariableNameManager(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipVariableNameManager *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_VariableNameManager(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_VariableNameManager(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_VariableNameManager(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipVariableNameManager *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipVariableNameManager();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const VariableNameManager * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_VariableNameManager, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipVariableNameManager(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_VariableNameManager[] = {
    {SIP_MLNAME_CAST(sipName_doSubstitution), meth_VariableNameManager_doSubstitution, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_establishConnection), meth_VariableNameManager_establishConnection, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_getOriginalVariableName), meth_VariableNameManager_getOriginalVariableName, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_getSubstitutedVariableName), meth_VariableNameManager_getSubstitutedVariableName, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_getVariableNameSubstitutions), meth_VariableNameManager_getVariableNameSubstitutions, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_initialiseVariableNameSubstitutions), meth_VariableNameManager_initialiseVariableNameSubstitutions, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setVariableName), meth_VariableNameManager_setVariableName, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setVariableNameSubstitutions), meth_VariableNameManager_setVariableNameSubstitutions, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setVariableNameSubstitutionsOverride), meth_VariableNameManager_setVariableNameSubstitutionsOverride, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_standardizeSubs), meth_VariableNameManager_standardizeSubs, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_variableNameManagerInitialise), meth_VariableNameManager_variableNameManagerInitialise, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_CaFramework_VariableNameManager = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_VariableNameManager,
        {0}
    },
    {
        sipNameNr_VariableNameManager,
        {0, 0, 1},
        11, methods_VariableNameManager,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    -1,
    0,
    0,
    init_VariableNameManager,
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
    dealloc_VariableNameManager,
    0,
    0,
    0,
    release_VariableNameManager,
    cast_VariableNameManager,
    0,
    0,
    0
},
    0,
    0,
    0
};
