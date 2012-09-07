#include <arpa/inet.h>
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

  memset((char *) &si_other, 0, sizeof(si_other));
  si_other.sin_family = AF_INET;
  si_other.sin_port = htons(PORT);
  if (inet_aton(SRV_IP, &si_other.sin_addr)==0) {
    fprintf(stderr, "inet_aton() failed\n");
    exit(1);
  }

  for (i=0; i<NPACK; i++) {
    printf("Sending packet %d\n", i);
    sprintf(buf, "This is packet %d\n", i);
    if (sendto(s, buf, BUFLEN, 0, (struct sockaddr*)&si_other, slen)==-1)
      diep("sendto()");
  }

  close(s);
  return 0;
}

/*

Note: The client is quite similar to the server. Only the differences will be discussed.

    1: You need to know the IP address of the machine where the server runs. If you run the client and the server on the same machine, try 127.0.0.1. "999.999.999.999" is not a legal IP address; you need to substitute your own server's address.
    12: You may call bind() after the call to socket(), if you wish to specify which port and interface that should be used for the client socket. However, this is almost never necessary. The system will decide what port and interface to use.
    13-19: Here, we set up a sockaddr_in corresponding to the socket address where the server is listening. inet_aton() is used to convert a string in dotted-decimal ASCII notation to a binary address.
    24: Send BUFLEN bytes from buf to s, with no flags (0). The receiver is specified in si_other, which contains slen byte. 



*/
