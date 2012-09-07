#include <stdio.h>
#include "extern.h"



int i = 3;
int j = 3;
int k = 3;

void main () 
{

  printf("i=%d, j=%d k=%d\n", i, j, k);

  increment();

  printf("global_variable = %d\n", global_variable);

}
