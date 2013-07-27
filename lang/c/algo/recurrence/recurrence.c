#include <stdio.h>
#include <stdlib.h>


int decr(int x) 
{

  printf("%d\n", x);
  if (x>0) {
    decr(--x);
  }

  return EXIT_SUCCESS;

}

int fibonacci(int x)
{

  int ret;

  if (x==0) 
      ret=0;
  else {
    if (x==1) 
        ret=1;
    else
        ret=fibonacci(x-1) + fibonacci(x-2);
  }

  printf("%d -> %d\n", x, ret);

  return ret;

}


int main() 
{

  int i = 10;

  decr(i);

  fibonacci(9);

  return EXIT_SUCCESS;

}




