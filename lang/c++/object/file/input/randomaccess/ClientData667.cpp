// Class ClientData stores customer's credit information.
#include <string>

#include "ClientData667.h"

using namespace std;

ClientData::ClientData( int accountNumberValue, 
   string lastNameValue, string firstNameValue, double balanceValue )
{
   setAccountNumber( accountNumberValue );
   setLastName( lastNameValue );
   setFirstName( firstNameValue );
   setBalance( balanceValue );
}

int ClientData::getAccountNumber() const
{
   return accountNumber;
}

void ClientData::setAccountNumber( int accountNumberValue )
{
   accountNumber = accountNumberValue; // should validate
}

string ClientData::getLastName() const
{
   return lastName;
}

void ClientData::setLastName( string lastNameString )
{
   // copy at most 15 characters from string to lastName
   int length = lastNameString.size();
   length = ( length < 15 ? length : 14 );
   lastNameString.copy( lastName, length );
   lastName[ length ] = '\0'; // append null character to lastName
}

string ClientData::getFirstName() const
{
   return firstName;
}

void ClientData::setFirstName( string firstNameString )
{
   // copy at most 10 characters from string to firstName
   int length = firstNameString.size();
   length = ( length < 10 ? length : 9 );
   firstNameString.copy( firstName, length );
   firstName[ length ] = '\0'; // append null character to firstName
}

double ClientData::getBalance() const
{
   return balance;
}

void ClientData::setBalance( double balanceValue )
{
   balance = balanceValue;
}
