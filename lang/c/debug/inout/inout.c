#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int debugLevel = 210;

static void dsetLog(int logLevel, const char *format, ...) {
  va_list args;
  if (    (debugLevel % logLevel ) == 0  ) {
    va_start(args, format);
    vfprintf(stderr, format, args);
    va_end(args);
  }
}


int toto(int x, int y)
{
  dsetLog(3, __FILE__ "[%d] --> %s (%d, %d)\n", __LINE__, __func__, x, y);

  printf("toto\n");

  dsetLog(3, __FILE__ "[%d] <-- %s (%d, %d)\n", __LINE__, __func__, x, y);

  return(EXIT_SUCCESS);
}

int main ()
{


  toto(3,4);

  return(EXIT_SUCCESS);



}

