#include <stdio.h>
#include "extern.h"


int ssum(int x, int y) 
{
  printf( "[%d] %s (%d %d)\n", __LINE__, __func__, x, y);
  return x+y;

}



