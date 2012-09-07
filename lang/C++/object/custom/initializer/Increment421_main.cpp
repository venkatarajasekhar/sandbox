#include <iostream>
#include "Increment421.h"

using namespace std;

int main()
{
    Increment value(10, 5);
    int j;

    cout << "Before incrementing: ";
    value.print();

    for (j=1; j <=3; ++j)
    {
        value.addIncrement();
        cout << "After increment " << j << ": ";
        value.print();
    }
}
