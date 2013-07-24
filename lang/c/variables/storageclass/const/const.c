#include <stdio.h>
#include <stdlib.h>



void func(const char *ptr);

int main()
{
    char c1 = 'a';
    const char c2 = 'c';                        // const need to be initialized at the same time. Here constant char
    const char *ptr1;                           // a pointer to a const char
    char * const ptr2 = &c1;                    // A const ptr point to the same memory location (cannot be changed) = array!
    const char * const ptr3 = &c2;              // A const ptr points to a const var/char

    c1 = 'b';
    //c2 = 'a';                                 // const.c:16:5: error: assignment of read-only variable ‘c2’

    func(ptr2);    

    char c3 = 'v';
    ptr1 = &c3;
    //*ptr1 = 'w';                              // not possible even so c3 is non-const, but ptr1 says it points to const
    
    
    
    return EXIT_SUCCESS;
    
}


void func(const char *ptr)                      // means that the char is not touched in this function (even so a non-const 'char *' can be passed)
{
    //*ptr = 10;                                // const.c:30:5: error: assignment of read-only location ‘*ptr’
}


