#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define BUFLEN 20

void main() 
{

    char *p_char;
    char *p_string;
    int integer;
    int *p_integer;

    // 1 - basic
    integer = 19;
    printf("integer    = %d\n", integer);
    p_integer = &integer;
    *p_integer = 3;
    printf("*p_integer = %d @(%x)\n", *p_integer, p_integer);
    printf("integer    = %d\n", integer);

    // 2 - malloc and free 
    p_char = 0;                                             // set to NULL 
    if (p_char == NULL) {
        p_char = malloc(sizeof(char));
        printf("allocated\n");
    }
    printf("Char is %c\n", *p_char);
    *p_char = 'A';
    printf("Char is %c @ %x\n", *p_char, p_char);
    free(p_char);                                           // free required because of malloc

    // 3 - dereferencing and referencing operators
    printf("Showing that * and & are inverses of each other.\n");
    printf("*&p_integer = %x\n", *&p_integer);
    printf("&*p_integer = %x\n", &*p_integer);

    // 4 - memory allocation
    p_string = 0;                                           // reset pointer to NULL
    p_string = calloc(sizeof(char), BUFLEN);
    p_string[BUFLEN -1] = 0;
    printf("String is >%s< @(%x)\n", p_string, p_string);   // notice that the format %s is expecting a pointer
    memset(p_string, 'A', BUFLEN-1);
    printf("String is >%s< @(%x)\n", p_string, p_string);   // notice that the format %s is expecting a pointer
    strncpy(p_string, "1234567890123456789\0", BUFLEN);	    // make sure that the send of string is here!
    printf("String is >%s< @(%x)\n", p_string, p_string);	// Different ways to print the variable !
    free(p_string);                                         // free is used in conjunction with calloc and malloc
                                                            // DO NT USE FREE ON ARRAYS !

    // 5 - pointer arithmetics
    int p_array[10] = { 0, 11, 21, 31, 41};                // arrays are const pointers !
    int *p_pointer = 0;                                    // pointer is set to NULL
    int i;

    p_pointer = &p_array[0];
    p_pointer = p_array;                                    // both are same !

    for (i = 0; i < 10; ++i)
    {
        printf("%d: %d @(%x)\n", i, *p_pointer, p_pointer);
        ++p_pointer;                                        // pointer arithmetics
    }

    // 6 - void pointer and cast
    void *p_void;
    int ii = 5;
    int *p_int;
    double d = 3.1415;
    int p_constPointer[4] = { 4, 5, 7, 10 };

    p_int = &ii;
    p_void = p_int;                                         // void pointers can be assigned any other pointer (no cast required)
    p_int = (int *)&d;                                      // cast required because change type and not void
    p_void = p_constPointer;                                // p_void points to array
    printf("void : %x %d" , p_void, *(int *)p_void);
    p_void++;                                               // Move only by 1 byte, not 4 bytes as a (int *) would !
    p_void++;
    p_void++;
    p_void++;
    printf(" %x %d", p_void, *(int *)p_void);
    p_int = (int *)p_void;                                  // circumvented way to ++
    p_int++;                                                // note that ((int *)p_void)++) doesn't work !
    p_void = p_int;
    printf(" %x %d\n", p_void, *(int *)p_void);

    // 7 - pointers as array
    int p_myarray[3] = { 3, 4,5 };
    int * p_myptr;

    p_myptr = p_myarray;
    printf("p_myptr (as array)[x]: %d %d %d\n", p_myptr[0], p_myptr[1], p_myptr[2]);
  
}
