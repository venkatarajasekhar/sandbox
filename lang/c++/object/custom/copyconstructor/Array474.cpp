#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <stdexcept>

#include "Array474.h"

using namespace std;


Array::Array(int arraySize)
{
    if (arraySize > 0)
        size = arraySize;
    else
        throw invalid_argument("Array size must be greater than 0");


    ptr = new int[size];

    for (int i=0; i <size; ++i)
        ptr[i] = 0;
}


Array::Array(const Array &arrayToCopy)                                      // copy constructor !
    : size(arrayToCopy.size)                                                // args are const XXX & 
{                                                                           // Has access to PRIVATE data of object to copy (So do not use getSize!)
    ptr = new int[size];                                                    // <-- pointer on int array of size 'size'

    for (int i=0; i<size; ++i)
        ptr[i] = arrayToCopy.ptr[i];
}

Array::~Array()
{
    delete [] ptr;                                                          // release pointer-based array space
}

int Array::getSize() const
{
    return size;
}


const Array &Array::operator=(const Array &right)
{
    if (&right != this)
    {
        if (size != right.size)
        {
            delete [] ptr;
            size = right.size;
            ptr = new int[size];
        }
        for (int i = 0; i < size; ++i)
            ptr[i] = right.ptr[i];
    }
    return *this;                                                           // enables x = y = z
}


bool Array::operator==(const Array &right) const
{
    if (size != right.size)
        return false;

    for (int i = 0; i < size; ++i)
        if (ptr[i] != right.ptr[i])
            return false;

    return true;
}

int &Array::operator[](int subscript)
{
    if (subscript < 0 || subscript >= size)
        throw out_of_range("Subscript out of range");

    return ptr[subscript];
}

istream &operator>>(istream &input , Array &a)
{
    for (int i = 0; i < a.size; ++i)
        input >> a.ptr[i];

    return input;
}

ostream &operator<<(ostream &output, const Array &a)
{
    int i;

    for (i =0; i < a.size; ++i)
    {
        output << setw(12) << a.ptr[i];

        if ((i+1) %4 == 0 )
            output << endl;
    }

    if ( i % 4 != 0)
        output << endl;

    return output;
}


