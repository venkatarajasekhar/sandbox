#include <iostream>
#include "Interface445.h"
                                                        // note that the Implementation.h is not included !

using namespace std;

int main()
{
    Interface i(5);                                     // create an Interface object

    cout << "Interface contains: " << i.getValue()
        << " before setValue" << endl;

    i.setValue(10);

    cout << "Interface contains: " << i.getValue()
        << " after setValue" << endl;
}
