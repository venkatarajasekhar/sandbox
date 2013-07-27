#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
  int i;
  int offset;
  char sinstr[80];

  memset(sinstr, 0x20, 80);
  sinstr[79] = '\0';           /* a 80 char line filled with space */

  for (i=0; i<20;i++) {
    offset = 39 + (int)(39*sin(M_PI*(float) i/10));

    sinstr[offset] = '*';
    printf("%s\n", sinstr);
    sinstr[offset] = ' ' ;
  }
}
