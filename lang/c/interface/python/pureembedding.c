#include <Python.h>

int
main(int argc, char *argv[])
{
    PyObject *p_pyFileName, *pModule, *pDict, *p_pyFunc;
    PyObject *p_pyFuncArgs, *pValue;
    int i;

    if (argc < 3) {
        fprintf(stderr,"Usage: call pythonfile funcname [args]\n");
        return 1;
    }

    Py_Initialize();
    p_pyFileName = PyString_FromString(argv[1]);
    /* Error checking of p_pyFileName left out */

    pModule = PyImport_Import(p_pyFileName);
    Py_DECREF(p_pyFileName);

    if (pModule != NULL) {
        p_pyFunc = PyObject_GetAttrString(pModule, argv[2]);			/* Find the function in the module object */
        /* p_pyFunc is a new reference */

        if (p_pyFunc && PyCallable_Check(p_pyFunc)) {				/* If function exist and is callable */
            p_pyFuncArgs = PyTuple_New(argc - 3);				/* Create a tuple of size = nb of [args] */
            for (i = 0; i < argc - 3; ++i) {					/* For each argument at the commmand line */
                pValue = PyInt_FromLong(atoi(argv[i + 3]));			/* assume cmdLine args are integer... otherwise 0 */
                if (!pValue) {
                    Py_DECREF(p_pyFuncArgs);
                    Py_DECREF(pModule);
                    fprintf(stderr, "Cannot convert argument\n");
                    return 1;
                }
                /* pValue reference stolen here: */
                PyTuple_SetItem(p_pyFuncArgs, i, pValue);			/* Build the argument tuple one by one command line arg*/
            }
            pValue = PyObject_CallObject(p_pyFunc, p_pyFuncArgs); 		/* pValue is returned by python function */
            Py_DECREF(p_pyFuncArgs);
            if (pValue != NULL) {						/* Also true if pValue=None */
                printf("Function Returned: %ld\n", PyInt_AsLong(pValue));	/* Format returned value as an integer */
                Py_DECREF(pValue);
            }
            else {
                Py_DECREF(p_pyFunc);
                Py_DECREF(pModule);
                PyErr_Print();
                fprintf(stderr,"Call failed\n");
                return 1;
            }
        }
        else {
            if (PyErr_Occurred())
                PyErr_Print();
            fprintf(stderr, "Cannot find function \"%s\"\n", argv[2]);
        }
        Py_XDECREF(p_pyFunc);
        Py_DECREF(pModule);
    }
    else {
        PyErr_Print();
        fprintf(stderr, "Failed to load \"%s\"\n", argv[1]);
        return 1;
    }
    Py_Finalize();
    return 0;
}
