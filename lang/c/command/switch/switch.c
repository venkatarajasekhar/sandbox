#include <stdio.h>


int main(void)
{
  int c;
  
  while((c = getchar()) != EOF) {
    if (c == '.') 
      break;
    
    switch(c) {
      case '0':
        printf("Numeral 0\n"); break;
      case '1':
        printf("Numeral 1\n"); break;
      case '\n':
        printf("Cariage return\n"); break;
      default:
        printf("Unknown\n"); break;
    }
  }
        
}
