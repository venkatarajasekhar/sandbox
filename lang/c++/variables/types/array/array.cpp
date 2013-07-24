#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

//

void printArray( int [], int );						// An array doesn't know its size. 
void modifyArray(int [], int);						// Check vector object for array object
void modifyElement(int );
int tryToModifyArray(const int []);					// with const in prototype
									

int main () 
{

    const int myArraySize = 5;
    int myArray[myArraySize] = { 5, 66, 71, 80, 15 };			// arraySize = only possible in C++;

    printArray(myArray, myArraySize);					// array doesn't know its size 

    cout << endl << "An array argument is passed by reference" << endl;
    cout << "Example in modifyArray (all elements *2)" << endl;
    modifyArray(myArray, myArraySize);
    printArray(myArray, myArraySize);

    modifyElement(myArray[0]);
    cout << "Element [0] is restored after exit" << endl;
    printArray(myArray, myArraySize);

    cout << "Sample error due to const:" << endl;
    tryToModifyArray(myArray);

    return EXIT_SUCCESS;

}

void printArray( int array[], int arraySize) 				// array[] = a pointer to &array[0]
{
    cout << endl;
    for ( int j = 0; j < arraySize; ++j)  
        cout << setw(7) << j << setw(13) << array[j] << endl;
}

void modifyArray(int * p_array, int sizeOfArray)			// use a pointer in this def, but not in prototype ==> compiler is happy nevertheless
{
    for (int k=0; k<sizeOfArray; ++k)
        p_array[k] *=2;							// pointers can be used as arrays
}

void modifyElement(int element)
{
    element *= 2;
    cout << "Value of element in modifyElement: " << element << endl;
}
int tryToModifyArray ( const int b[]) 
{
    //b[0] /=2;								// compilation error due to const
    cout << "g++     array.cpp   -o array " << endl;
    cout << "array.cpp: In function ‘int tryToModifyArray(const int*)’:" << endl;
    cout << "array.cpp:55:12: error: assignment of read-only location ‘* b’" << endl;
    cout << "make: *** [array] Error 1" << endl;

    return b[0];

}
