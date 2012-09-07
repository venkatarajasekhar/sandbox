#include <iostream>
#include "Employee441.h"

using namespace std;

// define and initialize static data member at global namespace scope

int Employee::count = 0;                                        // cannot include keyword static

Employee::Employee(const string &first, const string &last)
        :   firstName(first),
            lastName(last)
{
    ++ count;                                                   // increment static data

    cout << "Employee object constructor: "
        << firstName << ' ' << lastName << endl;
}




int Employee::getCount()                                       // static function cannot be a const?
{
    return count;
} 

string Employee::getFirstName() const
{
    return firstName;
}

string Employee::getLastName() const
{
    return lastName;
}


Employee::~Employee()
{
    cout << "Employee object destructor: "
        << lastName << ", " << firstName << endl;
    --count;                                                    // decrement static count of employees
}
