#include <stdio.h>


void main() 
{
  int i;

  printf("while loop\n");
  while(i<10) {
    printf("i=%d\n", i);
    i++;
  }

  printf("do-while loop\n");
  do {
   i--;
   printf("i=%d\n", i);
  } while (i>=0);


}
