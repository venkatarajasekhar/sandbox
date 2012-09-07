#include <iostream>

#include "Array474.h"

using namespace std;

void outputArray( const Array &);


int main()
{
    Array integers1(7);
    outputArray(integers1);
    outputArray(3);                        // The compiler is expecting an array
                                           // The compiler will use the Array::Array(int) constructor to turn the int into the desired object
}


void outputArray(const Array &arrayToOutput)
{
    cout << "The Array received has " << arrayToOutput.getSize()
        << " elements. The contents are:\n" << arrayToOutput << endl;
}
