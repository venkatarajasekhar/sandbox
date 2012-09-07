#include <iostream>
#include <stdexcept> 

#include "BasePlusCommissionEmployee520.h" 

using namespace std;


BasePlusCommissionEmployee::BasePlusCommissionEmployee(                             // constructor
    const string &first, const string &last, const string &ssn, 
    double sales, double rate, double salary ) 
    : CommissionEmployee( first, last, ssn, sales, rate )                            // explicitly call base-class constructor
{
    setBaseSalary( salary ); 
} 


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


double BasePlusCommissionEmployee::earnings() const                                 // calculate earnings
{
                                                                                    // derived class cannot access the base class's private data --> protected
    return baseSalary + ( commissionRate * grossSales );
} 


void BasePlusCommissionEmployee::print() const
{
                                                                                    // derived class cannot access the base class's private data --> protected
    cout << "base-salaried commission employee: " << firstName << ' ' 
        << lastName << "\nsocial security number: " << socialSecurityNumber 
        << "\ngross sales: " << grossSales 
        << "\ncommission rate: " << commissionRate 
        << "\nbase salary: " << baseSalary;
}
