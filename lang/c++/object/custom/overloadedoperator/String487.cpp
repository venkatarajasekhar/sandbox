// Fig. 11.10: String.cpp
// String class member-function and friend-function definitions.
#include <iostream>
#include <iomanip>
#include <cstring> // strcpy and strcat prototypes
#include <cstdlib> // exit prototype

#include "String487.h" // String class definition

using namespace std;


String::String( const char *s )                                                                     // conversion (and default) constructor converts char * to String
   : length( ( s != 0 ) ? strlen( s ) : 0 )
{
   cout << "Conversion (and default) constructor: " << s << endl;
   setString( s ); // call utility function
} 


String::String( const String &copy )                                                                // copy constructor
   : length( copy.length )
{
   cout << "Copy constructor: " << copy.sPtr << endl;
   setString( copy.sPtr ); // call utility function
} // end String copy constructor

String::~String()                                                                                   // Destructor
{
   cout << "Destructor: " << sPtr << endl;
   delete [] sPtr; // release pointer-based string memory
} 


const String &String::operator=( const String &right )                                              // overloaded = operator; avoids self assignment
{
   cout << "operator= called" << endl;

   if ( &right != this ) // avoid self assignment
   {         
      delete [] sPtr; // prevents memory leak
      length = right.length; // new String length
      setString( right.sPtr ); // call utility function
   } 
   else
      cout << "Attempted assignment of a String to itself" << endl;

   return *this; // enables cascaded assignments
} 


const String &String::operator+=( const String &right )                                             // concatenate right operand to this object and store in this object
{
   size_t newLength = length + right.length; // new length
   char *tempPtr = new char[ newLength + 1 ]; // create memory

   strcpy( tempPtr, sPtr ); // copy sPtr
   strcpy( tempPtr + length, right.sPtr ); // copy right.sPtr

   delete [] sPtr; // reclaim old space
   sPtr = tempPtr; // assign new array to sPtr
   length = newLength; // assign new length to length
   return *this; // enables cascaded calls
} 


bool String::operator!() const                                                                      // is this String empty?
{ 
   return length == 0; 
} 


bool String::operator==( const String &right ) const                                                // Is this String equal to right String?
{ 
   return strcmp( sPtr, right.sPtr ) == 0; 
} 


bool String::operator<( const String &right ) const                                                 // Is this String less than right String?
{ 
   return strcmp( sPtr, right.sPtr ) < 0; 
}


char &String::operator[]( int subscript )                                                           // return reference to character in String as a modifiable lvalue
{
   // test for subscript out of range
   if ( subscript < 0 || subscript >= length )
   {
      cerr << "Error: Subscript " << subscript 
         << " out of range" << endl;
      exit( 1 ); // terminate program
   } 

   return sPtr[ subscript ]; // non-const return; modifiable lvalue
} 


char String::operator[]( int subscript ) const                                                      // return reference to character in String as rvalue
{
   if ( subscript < 0 || subscript >= length )
   {
      cerr << "Error: Subscript " << subscript 
           << " out of range" << endl;
      exit( 1 ); // terminate program
   }

   return sPtr[ subscript ]; // returns copy of this element
}


String String::operator()( int index, int subLength ) const                                         // return a substring beginning at index and of length subLength
{
   // if index is out of range or substring length < 0, 
   // return an empty String object
   if ( index < 0 || index >= length || subLength < 0 )  
      return ""; // converted to a String object automatically

   // determine length of substring
   int len;

   if ( ( subLength == 0 ) || ( index + subLength > length ) )
      len = length - index;
   else
      len = subLength;

   // allocate temporary array for substring and 
   // terminating null character
   char *tempPtr = new char[ len + 1 ];

   // copy substring into char array and terminate string
   strncpy( tempPtr, &sPtr[ index ], len );
   tempPtr[ len ] = '\0';

   // create temporary String object containing the substring
   String tempString( tempPtr );
   delete [] tempPtr; // delete temporary array
   return tempString; // return copy of the temporary String
} 


int String::getLength() const                                                                           // return string length
{ 
   return length; 
}


void String::setString( const char *string2 )                                                           // utility function called by constructors and operator=
{
   sPtr = new char[ length + 1 ]; // allocate memory

   if ( string2 != 0 ) // if string2 is not null pointer, copy contents
      strcpy( sPtr, string2 ); // copy literal to object
   else // if string2 is a null pointer, make this an empty string
      sPtr[ 0 ] = '\0'; // empty string
}


ostream &operator<<( ostream &output, const String &s )                                                 // overloaded output operator
{
   output << s.sPtr;
   return output; // enables cascading
}


istream &operator>>( istream &input, String &s )                                                        // overloaded input operator
{
   char temp[ 100 ]; // buffer to store input
   input >> setw( 100 ) >> temp;
   s = temp; // use String class assignment operator
   return input; // enables cascading
}
