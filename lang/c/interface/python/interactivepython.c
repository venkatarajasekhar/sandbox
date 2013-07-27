#include <python.h>

void exec_pycode(int arg, char** argv)
{
  Py_Initialize();
  Py_Main(argc, argv);
  Py_Finalize();
}


void main() 
{

  char *p_code[100] = "print 3";

  exec_pycode(p_code);




}
