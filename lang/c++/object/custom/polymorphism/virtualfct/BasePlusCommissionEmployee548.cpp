#include <iostream>
#include <stdexcept>

#include "BasePlusCommissionEmployee548.h"
using namespace std;

BasePlusCommissionEmployee::BasePlusCommissionEmployee( 
   const string &first, const string &last, const string &ssn, 
   double sales, double rate, double salary ) 
   // explicitly call base-class constructor
   : CommissionEmployee( first, last, ssn, sales, rate )
{
   setBaseSalary( salary ); // validate and store base salary
} // end BasePlusCommissionEmployee constructor

void BasePlusCommissionEmployee::setBaseSalary( double salary )
{
   if ( salary >= 0.0 )                                        
      baseSalary = salary;                                     
   else                                                        
      throw invalid_argument( "Salary must be >= 0.0" );       
}

double BasePlusCommissionEmployee::getBaseSalary() const
{
   return baseSalary;
}

double BasePlusCommissionEmployee::earnings() const
{
   return getBaseSalary() + CommissionEmployee::earnings();
}

void BasePlusCommissionEmployee::print() const
{
   cout << "base-salaried ";

   // invoke CommissionEmployee's print function
   CommissionEmployee::print();                 
   
   cout << "\nbase salary: " << getBaseSalary();
}
