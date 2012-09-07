#include <stdio.h>
#include <stdlib.h>




void main() 
{

  FILE *ifp, *ofp;
  char *mode = "r";
  char outputFilename[] = "file.out";

  char username[9];  /* One extra for nul char. */
  int score;

  ifp = fopen("file.in", mode);
  
  if (ifp == NULL) {
    fprintf(stderr, "Can't open input file in.list!\n");
    exit(1);
  }
  
  ofp = fopen(outputFilename, "w");
  
  if (ofp == NULL) {
    fprintf(stderr, "Can't open output file %s!\n",
            outputFilename);
    exit(1);
  }


  while (fscanf(ifp, "%s %d", username, &score) != EOF) {
    fprintf(ofp, "%d %s\n", score+10, username);
  }

  /* Another method */
  while (!feof(ifp)) {
    if (fscanf(ifp, "%s %d", username, &score) != 2)
      break;
    fprintf(ofp, "%s %d", username, score+10);
  }

  close(ifp);
  close(ofp);
  
}
