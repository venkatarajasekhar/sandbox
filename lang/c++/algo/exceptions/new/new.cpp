// Demonstrating standard new throwing bad_alloc when memory
// cannot be allocated.
#include <iostream>
#include <new> // bad_alloc class is defined here
using namespace std;

const int SIZE = 5000;

int main()
{
   double *ptr[ SIZE ];
   
   // aim each ptr[i] at a big block of memory
   try 
   {
      // allocate memory for ptr[ i ]; new throws bad_alloc on failure
      for ( int i = 0; i < SIZE; ++i ) 
      {
         ptr[ i ] = new double[ 50000000 ]; // may throw exception
         cout << "ptr[" << i << "] points to 50,000,000 new doubles\n";
      } // end for
   } // end try
   catch ( bad_alloc &memoryAllocationException )
   {
      cerr << "Exception occurred: " 
         << memoryAllocationException.what() << endl;
   } // end catch
} 
