#include <iostream>
#include <stdexcept>

#include "SalariedEmployee564.h" // SalariedEmployee class definition
using namespace std;

SalariedEmployee::SalariedEmployee( const string &first, 
   const string &last, const string &ssn, double salary )
   : Employee( first, last, ssn )
{ 
   setWeeklySalary( salary ); 
}

void SalariedEmployee::setWeeklySalary( double salary )
{ 
   if ( salary >= 0.0 )
      weeklySalary = salary;
   else
      throw invalid_argument( "Weekly salary must be >= 0.0" );
}

double SalariedEmployee::getWeeklySalary() const
{
   return weeklySalary;
}

// calculate earnings; 
// override pure virtual function earnings in Employee
double SalariedEmployee::earnings() const 
{ 
   return getWeeklySalary(); 
} // end function earnings

// print SalariedEmployee's information 
void SalariedEmployee::print() const
{
   cout << "salaried employee: ";
   Employee::print(); // reuse abstract base-class print function
   cout << "\nweekly salary: " << getWeeklySalary();
} // end function print
