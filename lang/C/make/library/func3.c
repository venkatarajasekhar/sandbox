i#include <Python.h>

PyObject* MyFirstModule_Foo(PyObject* pSelf, PyObject* pArgs)
{
 // You can run any C code in here.
 MessageBox(NULL, "Foo was called!", "MyFirstModule", MB_OK);
}

PyObject* MyFirstModule_Bar(PyObject* pSelf, PyObject* pArgs)
{
}

static PyMethodDef MyFirstModulebMethods[] = {

    // "Python name", C Ffunction Code, Argument Flags, __doc__ description
    {"Foo", MyFirstModule_Foo, METH_NOARGS, "A dummy function."},
    {"Bar", MyFirstModule_Bar, METH_VARARGS, "An advanced dummy function which prints its argument."},
    {NULL, NULL, 0, NULL}
};

// Ending up with calling, so users can use it and import MyFirstModule.
Py_InitModule("MyFirstModule", MyFirstModulebMethods);
