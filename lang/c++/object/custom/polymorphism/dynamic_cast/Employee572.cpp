// Abstract-base-class Employee member-function definitions.
// Note: No definitions are given for pure virtual functions.

#include <iostream>
#include <stdexcept>

#include "Employee572.h" // Employee class definition

using namespace std;

Employee::Employee( const string &first, const string &last,
   const string &ssn )
   : firstName( first ), lastName( last ), socialSecurityNumber( ssn )
{
   // empty body 
}

void Employee::setFirstName( const string &first ) 
{ 
   firstName = first;  
}

string Employee::getFirstName() const 
{ 
   return firstName;  
}

void Employee::setLastName( const string &last )
{
   lastName = last;   
}

string Employee::getLastName() const
{
   return lastName;   
}

void Employee::setSocialSecurityNumber( const string &ssn )
{
   socialSecurityNumber = ssn; // should validate
}

string Employee::getSocialSecurityNumber() const
{
   return socialSecurityNumber;   
}

// print Employee's information (virtual, but not pure virtual)
void Employee::print() const
{ 
   cout << getFirstName() << ' ' << getLastName() 
      << "\nsocial security number: " << getSocialSecurityNumber(); 
}
