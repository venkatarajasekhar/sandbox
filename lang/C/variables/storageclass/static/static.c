#include <stdio.h>


void useLocal();
void useStaticLocal();
void useGlobal();

int x = 1;				// global variable

void main ()
{
  printf("Global x = %d\n", x);

  int x = 5;				// local to main mask global
  int y = 3;
  printf("Local x = %d y=%d (outer scope)\n", x, y);

  {
    int x = 7;				// local to main mask global
    printf("Local x = %d y=%d (inner scope)\n", x, y);
  }

  printf("Local x = %d (outer scope)\n", x);

  useLocal();
  useStaticLocal();
  useGlobal();
  useStaticLocal();
  useLocal();
}


void useLocal ()
{

  int x = 25;
  printf("useLocal x = %d y=undef (Entering)", x);
  printf("\t\t<-- always 25!\n");
  x++;
  printf("useLocal x = %d (Exiting)\n", x);
}

void useStaticLocal() 
{

  static int x = 50;			// If not initialized in this scope then, will init otherwise recall previous value
  printf("useStaticLocal x = %d (Entering)", x);
  printf("\t\t<-- not always 50!\n");

  x++;
  printf("useStaticLocal x = %d (Existing)\n", x);
  
}

void useGlobal()
{
  // no defintion for x

  printf("Global x = %d\n", x);

  x *= 10;
  printf("Global x = %d\n", x);

}
