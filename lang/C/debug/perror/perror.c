nclude <arpa/inet.h>
#include <netinet/in.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#define SRV_IP "127.0.0.1"
#define BUFLEN 512
#define PORT 9930
#define NPACK 10

void diep(char *s)
{
  perror(s);
  exit(1);
}

/* diep(), #includes and #defines like in the server */

int main(void)
{
  struct sockaddr_in si_other;
  int s, i, slen=sizeof(si_other);
  char buf[BUFLEN];

  if ((s=socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP))==-1)
    diep("socket");

}


