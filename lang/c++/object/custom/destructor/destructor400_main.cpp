#include <iostream>
#include "destructor400.h"

using namespace std;

void create ( void);                // prototype

CreateAndDestroy first ( 1, "(global before main)");


int main()
{
    cout << "\nMAIN FUNCTION: EXECUTION BEGINS" << endl;

    CreateAndDestroy second (2, "(local automatic in main)");

    static CreateAndDestroy thrid(3, "(local static in main)");

    create();                                                       // call fucntion to create objects

    cout << "\nMAIN FUNCTION: EXECUTION RESUMES" << endl;

    CreateAndDestroy fourth(4, "(local automatic in main)");

    cout << "\nMAIN FUNCTION: EXECUTION ENDS" << endl;
}

void create (void)
{
    cout <<"\nCREATE FUNCTION: EXECUTION BEGINS" << endl;
    CreateAndDestroy fifth(5, "(local automatic in create)" );
    static CreateAndDestroy sizth (6, "(local static in create)" );

    CreateAndDestroy seventh(7, "(local automatic in create)" );
    cout << "\nCREATE FUNCTION: EXECUTION ENDS" <<endl;
}


