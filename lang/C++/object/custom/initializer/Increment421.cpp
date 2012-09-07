#include <iostream>
#include "Increment421.h"

using namespace std;

Increment::Increment(int c, int i)
        :   count(c),                       // initializer for non-const member
            increment(i)                    // REQUIRED intializer for const data member
{
    count2 = 2*c;                           // A non const data member can be init in the body of the constructor
    //++increment;                          // A const data member cannot be changed in the body of the constructor 
    // empty
}

void Increment::print() const
{
    cout << "count = " << count 
        << ", increment = " 
        << increment << endl;
}
