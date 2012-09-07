#include <stdio.h>

#include "preprocessor.h"

#define MAX(a,b) 	((a) > (b)?(a):(b))


void main() 
{

  printf ("%d\n", MAX(2,3));
  printf ("%d\n", MAX(UP,DOWN));

}


