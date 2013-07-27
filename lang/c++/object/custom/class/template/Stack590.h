#ifndef STACK_H
#define STACK_H

template< typename T >
class Stack 
{
public:
   explicit Stack( int = 10 );                                              // default constructor (stack size 10)

   ~Stack() 
   { 
      delete [] stackPtr; // deallocate internal space for stack
   }

   bool push( const T& ); // push an element onto the stack
   bool pop( T& ); // pop an element off the stack

   bool isEmpty() const 
   { 
      return top == -1; 
   }

   bool isFull() const 
   { 
      return top == size - 1; 
   }

private:
   int size;                                                                // # of elements in the stack
   int top;                                                                 // location of the top element (-1 means empty)
   T *stackPtr;                                                             // pointer to internal representation of the stack
}; 


template< typename T >
Stack< T >::Stack( int s )                                                  // constructor template
   : size( s > 0 ? s : 10 ),                                                // validate size
     top( -1 ),                                                             // Stack initially empty
     stackPtr( new T[ size ] )                                              // allocate memory for elements
{
   // empty body
} 

// push element onto stack;
// if successful, return true; otherwise, return false
template< typename T >
bool Stack< T >::push( const T &pushValue )
{
   if ( !isFull() ) 
   {
      stackPtr[ ++top ] = pushValue; // place item on Stack
      return true; // push successful
   } // end if

   return false; // push unsuccessful
}

// pop element off stack;
// if successful, return true; otherwise, return false
template< typename T > 
bool Stack< T >::pop( T &popValue )
{
   if ( !isEmpty() ) 
   {
      popValue = stackPtr[ top-- ]; // remove item from Stack
      return true; // pop successful
   } // end if

   return false; // pop unsuccessful
}

#endif
