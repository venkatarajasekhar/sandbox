#include <stdio.h>
#include "extern.h"


int global_variable = 0;


int increment (void)
{
  return global_variable++;
}



