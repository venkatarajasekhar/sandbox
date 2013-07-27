#include <stdio.h>
#include <stdlib.h>

#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>




void main(int argc, char **argv) 
{

  FILE *ifp, *ifp2;
  char *mode = "r";
  char p_line[80];
  char p_token[80];

  int f=0;
  char l[80];
  struct stat s;

  if (argc != 2) {
    perror("file missing");
    exit(1);
  }

  ifp = fopen(argv[1], mode);
  if (ifp == NULL) {
    fprintf(stderr, "Can't open input file in.list!\n");
    exit(1);
  }

  printf("======= TOKEN BY TOKEN ======\n");
  
  while (!feof(ifp)) {
    if (fscanf(ifp, "%s", p_token) !=1) {
      break;
    }
    fprintf(stdout, ">%s<\n", p_token);
  }

  fclose(ifp);
  
  printf("======== LINE BY LINE =======\n");
  ifp2 = fopen(argv[1], mode);
  while (!feof(ifp)) {
    /* if (fscanf(ifp2, "%[^\n]s\n", p_line) !=1) { */
    if (fgets(p_line, sizeof(p_line), ifp2) == NULL) {
      break;
    }
    fprintf(stdout, ">%s<\n", p_line);
  }

  fclose(ifp2);

  printf("======== SYSTEM CALLS =======\n");

  if(access(argv[1],F_OK))
  {
               printf("File Exist");
               exit(1);
  }
  if(stat(argv[1],&s)<0)
  {
               printf("Stat ERROR");
               exit(1);
  }
  if(S_ISREG(s.st_mode)<0)
  {
               printf("Not a Regular FILE");
               exit(1);
  }
  if(geteuid()==s.st_uid)
    if(s.st_mode & S_IRUSR)
      f=1;
    else if(getegid()==s.st_gid)
      if(s.st_mode & S_IRGRP)
        f=1;
      else if(s.st_mode & S_IROTH)
               f=1;
  if(!f)
  {
               printf("Permission denied");
               exit(1);
  }
  f=open(argv[1],O_RDONLY);
  while((n=read(f,l,80))>0)
    write(1,l,n);

  
}
