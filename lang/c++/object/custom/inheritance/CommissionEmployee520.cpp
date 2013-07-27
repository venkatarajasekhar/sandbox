#include <iostream>
#include <stdexcept>

#include "CommissionEmployee520.h" 

using namespace std;


CommissionEmployee::CommissionEmployee(                                     // constructor
   const string &first, const string &last, const string &ssn, 
   double sales, double rate )
{
   firstName = first; // should validate
   lastName = last; 
   socialSecurityNumber = ssn; 
   setGrossSales( sales ); 
   setCommissionRate( rate ); 
} 


void CommissionEmployee::setFirstName( const string &first )
{
   firstName = first; // should validate
}


string CommissionEmployee::getFirstName() const
{
   return firstName;
}


void CommissionEmployee::setLastName( const string &last )
{
   lastName = last; // should validate
}


string CommissionEmployee::getLastName() const
{
   return lastName;
}


void CommissionEmployee::setSocialSecurityNumber( const string &ssn )
{
   socialSecurityNumber = ssn; // should validate
}


string CommissionEmployee::getSocialSecurityNumber() const
{
   return socialSecurityNumber;
}


void CommissionEmployee::setGrossSales( double sales )
{
   if ( sales >= 0.0 )
      grossSales = sales;
   else
      throw invalid_argument( "Gross sales must be >= 0.0" );
}


double CommissionEmployee::getGrossSales() const                        // return gross sales amount
{
   return grossSales;
}


void CommissionEmployee::setCommissionRate( double rate )               // set commission rate
{
   if ( rate > 0.0 && rate < 1.0 )
      commissionRate = rate;
   else
      throw invalid_argument( "Commission rate must be > 0.0 and < 1.0" );
}


double CommissionEmployee::getCommissionRate() const
{
   return commissionRate;
}


double CommissionEmployee::earnings() const                             // calculate earnings
{
   return commissionRate * grossSales;
}


void CommissionEmployee::print() const
{
   cout << "commission employee: " << firstName << ' ' << lastName 
      << "\nsocial security number: " << socialSecurityNumber 
      << "\ngross sales: " << grossSales 
      << "\ncommission rate: " << commissionRate;
}
