#include <iostream>
#include <stdexcept>

#include "Array474.h"

using namespace std;



int main()
{
    Array integers1(7);
    Array integers2;                                                                    // 110-element Array by default

    cout << "Size of Array integers1 is "
        << integers1.getSize()
        << "\nArray after intialization: \n"
        << integers1;


    cout << "\nSize of Array integers2 is"
        << integers2.getSize()
        << "\nArray after intialization:\n"
        << integers2;

    cout << "\nEnter 17 integers: " << endl;
    cin >> integers1 >> integers2;

    cout << "\nAfter input, the Arrays contain:\n"
        << "integers1:\n" << integers1
        << "integers2:\n" << integers2;

    cout << "\nEvaluating: integers1 != integers2" << endl;

    if (integers1 != integers2 )                                                        // use overloaded inequality operator
        cout << "integers1 and integers2 are not equal" << endl;

    Array integers3(integers1);                                                         // invokes copy constructor

    cout << "\nSize of Array integers3 is "
        << integers3.getSize()
        << "\nArray after initialization:\n" << integers3;

    cout << "\nAssigning integers2 to integers1:" << endl;                              // use overloaded assignment (=) operator
    integers1 = integers2;                                                              // note target Array is smaller (7 elements vs 10)

    cout << "integers1:\n" << integers1
        << "integers2:\n" << integers2;

    cout << "\nEvaluating: integers1 == integers2" << endl;

    if (integers1 == integers2)                                                         // use overloaded equality (==) operator
        cout << "integers1 and integers2 are equal" << endl;

    cout << "\nintegers1[5] is " << integers1[5];                                       // use overloaded subscript operator to create rvalue

    cout << "\n\nAssigning 1000 to integers1[5]" << endl;
    integers1[5] = 1000;
    cout << "integers1:\n" << integers1;

    try
    {
        cout <<"\nAttempt to assign 1000 to integers1[15]" <<endl;
        integers1[15] = 1000;
    }
    catch (out_of_range &ex)
    {
        cout << "An exception occured: " << ex.what() << endl;
    }
}

    
