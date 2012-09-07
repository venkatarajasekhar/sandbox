// Processing Employee derived-class objects individually 
// and polymorphically using dynamic binding.
#include <iostream>
#include <iomanip>
#include <vector>

#include "Employee564.h"
#include "SalariedEmployee564.h" 
#include "CommissionEmployee564.h"  
#include "BasePlusCommissionEmployee564.h" 
using namespace std;

void virtualViaPointer( const Employee * const ); // prototype
void virtualViaReference( const Employee & ); // prototype

int main()
{
   // set floating-point output formatting
   cout << fixed << setprecision( 2 );

   // create derived-class objects
   SalariedEmployee salariedEmployee( "John", "Smith", "111-11-1111", 800 );
   CommissionEmployee commissionEmployee( "Sue", "Jones", "333-33-3333", 10000, .06 );
   BasePlusCommissionEmployee basePlusCommissionEmployee( "Bob", "Lewis", "444-44-4444", 5000, .04, 300 );
   
   cout << "Employees processed individually using static binding:\n\n";

   // output each Employee’s information and earnings using static binding
   salariedEmployee.print();
   cout << "\nearned $" << salariedEmployee.earnings() << "\n\n";
   commissionEmployee.print();
   cout << "\nearned $" << commissionEmployee.earnings() << "\n\n";
   basePlusCommissionEmployee.print();
   cout << "\nearned $" << basePlusCommissionEmployee.earnings() 
      << "\n\n";

   
   vector < Employee * > employees( 3 );                                                // create vector of three base-class pointers


   employees[ 0 ] = &salariedEmployee;                                                  // initialize vector with Employees
   employees[ 1 ] = &commissionEmployee;
   employees[ 2 ] = &basePlusCommissionEmployee;

   cout << "Employees processed polymorphically via dynamic binding:\n\n";

   // call virtualViaPointer to print each Employee's information
   // and earnings using dynamic binding
   cout << "Virtual function calls made off base-class pointers:\n\n";

   for ( size_t i = 0; i < employees.size(); ++i )
      virtualViaPointer( employees[ i ] );

   // call virtualViaReference to print each Employee's information 
   // and earnings using dynamic binding
   cout << "Virtual function calls made off base-class references:\n\n";

   for ( size_t i = 0; i < employees.size(); ++i )    
      virtualViaReference( *employees[ i ] );                                           // note dereferencing
}

// call Employee virtual functions print and earnings off a 
// base-class pointer using dynamic binding
void virtualViaPointer( const Employee * const baseClassPtr )                           // notice the const Employee * const ptrName
{
   baseClassPtr->print();
   cout << "\nearned $" << baseClassPtr->earnings() << "\n\n";
}

// call Employee virtual functions print and earnings off a 
// base-class reference using dynamic binding
void virtualViaReference( const Employee &baseClassRef )
{
   baseClassRef.print();
   cout << "\nearned $" << baseClassRef.earnings() << "\n\n";
} 
