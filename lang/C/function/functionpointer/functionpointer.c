#include <stdio.h>

/*

Benefits of Function Pointers

    Function pointers provide a way of passing around instructions for how to do something (ex sorting)
    You can write flexible functions and libraries that allow the programmer to choose behavior by passing function pointers as arguments
    This flexibility can also be achieved by using classes with virtual functions

*/

void my_int_func(int x)
{
    printf( "%d\n", x );
}


int main()
{
    void (*foo)(int);									// declaration of the functionpointer

    foo = &my_int_func;									// assignment. Note that the ampersand is optional
    //foo = my_int_func;									// assignment. Note that the ampersand is optional

    /* call my_int_func (note that you do not need to write (*foo)(2) ) */
    foo( 2 );
    /* but if you want to, you may */
    (*foo)( 4 );

    return 0;
}
