#include <iostream>
#include "Employee441.h"

using namespace std;

int main()
{
    cout << "Number of employees before instantiation of any object is "
        << Employee::getCount() << endl;

    {
        Employee e1("Susan", "Bakeer");
        Employee e2("Robert", "Jones");

        cout << "Number of employees after objects are instantiated is "
            << Employee::getCount();

        cout << "\n\nEmployee 1: "
            << e1.getFirstName() << " " << e1.getLastName()
            << "\nEmployee 2: "
            << e2.getFirstName() << " " << e2.getLastName() << "\n\n";
    }

    cout << "\nNumber of emplyees after objects are deleted is "
        << Employee::getCount() << endl;

}
