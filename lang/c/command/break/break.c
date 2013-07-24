#include <stdio.h>




void main() {
  int i = 0;

  for (i=0; i<10; i++) {
    if (i==4) {
      printf("... contining ...\n");
      continue;
    } 
    printf("%d\n", i);
    if (i==6) {
        break;
    } 
  }

}
