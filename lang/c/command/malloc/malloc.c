#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define BUFLEN 20

void main() 
{

  char *p_string;
  
  p_string = 0;						// set to null 

  if (p_string == NULL) {
    p_string = malloc(sizeof(char));
    printf("allocated\n");
  }
  printf("Char is %c\n", *p_string);

  *p_string = 'A';
  printf("Char is %c @ %x\n", *p_string, p_string);

  free(p_string);

  p_string = 0;						// reset pointer to null

  p_string = calloc(sizeof(char), BUFLEN);

  p_string[BUFLEN -1] = 0;

  printf("String is >%s< @ %x\n", p_string, p_string);	// notice that the format %s is expecting a pointer

  memset(p_string, 'A', BUFLEN-1);

  printf("String is >%s< @ %x\n", p_string, p_string);	// notice that the format %s is expecting a pointer

  strncpy(p_string, "1234567890123456789\0", BUFLEN);	// make sure that the send of string is here!

  printf("String is >%s< @ %x\n", p_string, p_string);	// Different ways to print the variable !

  free(p_string);
  
}
