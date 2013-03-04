/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.10.2 on Fri Apr 22 17:31:55 2011
 */

#include "sipAPICaFramework.h"

#line 4 "MappedType.sip"
#include <string>
#line 12 "sipCaFrameworkstdstring.cpp"



extern "C" {static void assign_std_string(void *, SIP_SSIZE_T, const void *);}
static void assign_std_string(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<std::string *>(sipDst)[sipDstIdx] = *reinterpret_cast<const std::string *>(sipSrc);
}


extern "C" {static void *array_std_string(SIP_SSIZE_T);}
static void *array_std_string(SIP_SSIZE_T sipNrElem)
{
    return new std::string[sipNrElem];
}


extern "C" {static void *copy_std_string(const void *, SIP_SSIZE_T);}
static void *copy_std_string(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new std::string(reinterpret_cast<const std::string *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_std_string(void *, int);}
static void release_std_string(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<std::string *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_std_string(PyObject *, void **, int *, PyObject *);}
static int convertTo_std_string(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *)
{
    std::string **sipCppPtr = reinterpret_cast<std::string **>(sipCppPtrV);

#line 19 "MappedType.sip"
	// Allow a Python string (or a unicode string) whenever a string is
	// expected.
    // If argument is a Unicode string, just decode it to UTF-8
    // If argument is a Python string, assume it's UTF-8
	if (sipIsErr == NULL)
		return (PyString_Check(sipPy) || PyUnicode_Check(sipPy));
	if (sipPy == Py_None) {
		*sipCppPtr = new std::string;
		return 1;
	}
	if (PyUnicode_Check(sipPy))	{
        PyObject* s = PyUnicode_AsEncodedString(sipPy, "UTF-8", "");
        *sipCppPtr = new std::string(PyString_AS_STRING(s));
        Py_DECREF(s);
        return 1;
	}
	if (PyString_Check(sipPy)) {
        *sipCppPtr = new std::string(PyString_AS_STRING(sipPy));
    	return 1;
}
    return 0;
#line 75 "sipCaFrameworkstdstring.cpp"
}


extern "C" {static PyObject *convertFrom_std_string(void *, PyObject *);}
static PyObject *convertFrom_std_string(void *sipCppV,PyObject *)
{
   std::string *sipCpp = reinterpret_cast<std::string *>(sipCppV);

#line 8 "MappedType.sip"
    // convert an std::string to a Python (unicode) string
    PyObject* newstring;
    newstring = PyUnicode_DecodeUTF8(sipCpp->c_str(), sipCpp->length(), NULL);
    if(newstring == NULL) {
        PyErr_Clear();
        newstring = PyString_FromString(sipCpp->c_str());
    }
    return newstring;
#line 93 "sipCaFrameworkstdstring.cpp"
}


sipMappedTypeDef sipTypeDef_CaFramework_std_string = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_std__string,
        {0}
    },
    {
        -1,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_std_string,
    array_std_string,
    copy_std_string,
    release_std_string,
    convertTo_std_string,
    convertFrom_std_string
};
