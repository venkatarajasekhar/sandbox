#include <iostream>
#include <iomanip>
#include <cstdlib>



using namespace std;

void f(const int *) ;

int main ()
{
    // 1
    const int arraySize = 5;						            // aka named constant or read-only variables

    int myarray[arraySize] = { 55, 41, 43, 17, 8 };				// arraySize needs to be const otherwise not initialized
    cout << " The value of the const variable is " 
        << arraySize << endl;
    for (int j = 0; j< arraySize; j++) 
        cout << setw(7) << j << setw(7) << myarray[j] << endl;

    // 2 - call a function with a (const int * ptr)
    const int constInt = 33;
    f(&constInt);

    // 3 - const pointer
    int x, y;
    int * const p_constPtr = &x;                                // const ptr (points to same memory location) that points to an integer (but integer can change)
                                                                // int * const ptr ~ a C array
    *p_constPtr =7;
    //p_constPtr = &y;                                          // error: ptr is const; cannot assign to it a new address


    // 4
    int z = 5, k;
    const int * const p_constPtr2 = &x;                         // needs to be initialized

    cout << *p_constPtr2 << endl;
    //*p_constPtr2 = 7;                                         // error: *ptr is const; cannot assign new value
    //p_constPtr2 = &y;                                         // error: ptr is const; cannot assing new address


    return EXIT_SUCCESS;
}

void f(const int *p_ptr)
{
    //*p_ptr =5;                                                // error: canot modify a const object
    cout << *p_ptr << " " << p_ptr << endl;
}
