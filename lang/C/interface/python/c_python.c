#include <Python.h>


int exec_pyC() 
{
  Py_Initialize();

 // TODO: Add your Python code here.
 PyObject* pyIntObject = PyInt_FromLong(5);		// x = 5 in python
 if (pyIntObject == NULL) ; // Error

 Py_DECREF(pyIntObject);				// get ready to destroy x

 Py_Finalize();
 return 0;
}

void exec_pycode(const char* p_code)
{
  Py_Initialize();
  PyRun_SimpleString(p_code);
  Py_Finalize();
}

void exec_pyfile(char *p_filename) 
{
  FILE*  fh;
  Py_Initialize();
  fh = fopen(p_filename, "r");
  Py_Finalize();
}



void main() 
{

  char p_code[100];

  strcpy(p_code, "from time import time,ctime\n"
                 "print 'Today is',ctime(time())\n");

  exec_pyC();
  exec_pycode(p_code);

}
