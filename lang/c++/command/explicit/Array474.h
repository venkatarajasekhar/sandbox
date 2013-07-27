#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

using namespace std;

class Array
{
    friend ostream &operator<<(ostream &, const Array &);
    friend istream &operator>>(istream &, Array &);

    public:
        explicit Array(int = 10);                                           // default constructor (explicit prevent implicit use of constructor by compiler for type/cast conversion)
        Array(const Array &);                                               // copy constructor
        ~Array();
        int getSize() const;                                                

        const Array &operator=(const Array &);                              // assignment operator
        bool operator==(const Array &) const;                               // equality operator
        bool operator!=(const Array &right) const                           // inequality operator
            {
                return ! (*this == right);                                  // invoks Array::operator==
            }

        int &operator[](int);                                               // subscript operator for NON-CONST objects returns modifiable lvalue
        int operator[](int) const;                                          // subscript operator for CONST objects returns rvalue

    private:
        int size;                                                           // pointer-based array size
        int *ptr;                                                           // pointer to 1st element of pointer-base array
};

#endif




