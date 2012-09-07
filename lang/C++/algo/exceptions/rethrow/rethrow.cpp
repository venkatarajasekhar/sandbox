// Demonstrating exception rethrowing.
#include <iostream>
#include <exception>
using namespace std;

// throw, catch and rethrow exception
void throwException() 
{
   try 
   {
      cout << "  Function throwException throws an exception\n";
      throw exception(); // generate exception
   } // end try
   catch ( exception & ) // handle exception
   {
      cout << "  Exception handled in function throwException"
         << "\n  Function throwException rethrows exception";
      throw; // rethrow exception for further processing
   }

   cout << "This also should not print\n";
} 

int main()
{
   // throw exception
   try 
   {
      cout << "\nmain invokes function throwException\n";
      throwException();
      cout << "This should not print\n";
   } // end try
   catch ( exception & ) // handle exception
   {
      cout << "\n\nException handled in main\n";
   } // end catch

   cout << "Program control continues after catch in main\n";
} 
