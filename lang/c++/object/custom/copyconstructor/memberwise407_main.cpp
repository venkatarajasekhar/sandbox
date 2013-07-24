#include <iostream>
#include "memberwise407.h"

using namespace std;

int main()
{
    Date date1(7,4,2004);
    Date date2;

    cout << "date1 = ";
    date1.print();

    cout << "\ndate2 = ";
    date2.print();

    date2 = date1;                  // default memberwise assignment

    cout << "\n\nAfter default memberwise assignment, date2 = ";
    date2.print();
    cout << endl;

}

