#include <unistd.h>
#include <stdio.h>
#include <iostream>
#include <cstdlib>

using namespace std;

//Program calls atexit with FinalFunction
//FinalFunction is executed before program ends
void FinalFunction(void)
{
    cout<<"Final function called\n";
}

int main()
{
      atexit(FinalFunction);
      printf("Message 1\n");
      sleep(2);
      printf("Message 2 a two second after Message 1\n");
      return 0;
}
