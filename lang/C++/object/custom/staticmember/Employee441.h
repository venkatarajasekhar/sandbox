#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include "Employee441.h"

using namespace std;

class Employee
{
    public:
        Employee(const string &, const string & );
        ~Employee();    
        string getFirstName() const;
        string getLastName() const;

        static int getCount();                          // static member function, returns nb of objects instantiated

    private:
        string firstName;
        string lastName;

        static int count;                               // static data = number of instantiated objects
};

#endif
