#include <arpa/inet.h>
#include <netinet/in.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

#define BUFLEN 512
#define NPACK 10
#define PORT 9930

void diep(char *s)
{
  perror(s);
  exit(1);
}

int main(void)
{
  struct sockaddr_in si_me, si_other;
  int s, i, slen=sizeof(si_other);
  char buf[BUFLEN];

  if ((s=socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP))==-1)		/* UDP */
    diep("socket");

  memset((char *) &si_me, 0, sizeof(si_me));
  si_me.sin_family = AF_INET;
  si_me.sin_port = htons(PORT);
  si_me.sin_addr.s_addr = htonl(INADDR_ANY);
  if (bind(s, (struct sockaddr*)&si_me, sizeof(si_me))==-1)
    diep("bind");

  for (i=0; i<NPACK; i++) {
    if (recvfrom(s, buf, BUFLEN, 0, (struct sockaddr*)&si_other, &slen)==-1)
      diep("recvfrom()");
    printf("Received packet from %s:%d\nData: %s\n\n", 
    inet_ntoa(si_other.sin_addr), ntohs(si_other.sin_port), buf);
  }

  close(s);
  return 0;
}

/*
http://www.abc.se/~m6695/udp.html

Comments

    Lines 8-10 define the buffer size (quite arbitrary), the number of packets to receive and the UDP port number to listen at. You could use any port number above 1023, although bind() will fail if someone else is using the same port simultaneously.
    The function diep() is used for error handling.
    21: Declare receive buffer.
    22: sockaddr_in is a structure containing an Internet socket address. Basically, it contains:
        an address family (always AF_INET for our purposes)
        a port number
        an IP address 
    si_me defines the socket where the server will listen. si_other defines the socket at the other end of the link (that is, the client).
    24: Create a socket. AF_INET says that it will be an Internet socket. SOCK_DGRAM says that it will use datagram delivery instead of virtual circuits. IPPROTO_UDP says that it will use the UDP protocol (the standard transport layer protocol for datagrams in IP networks). Generally you can use zero for the last parameter; the kernel will figure out what protocol to use (in this case, it would choose IPPROTO_UDP anyway).
    27: We need to initialize the si_me structure. The first step is to fill it with binary zeroes, which is done on this line. (I doubt this step is actually necessary in modern Unix implementations, but better safe than sorry.)
    28: We will use Internet addresses.
    29: Here, the port number is defined. htons() ensures that the byte order is correct (Host TO Network order/Short integer).
    30: This line is used to tell what IP address we want to bind to. Most machines have more than one network interface (for example, 127.0.0.1 for the loopback interface and some other address for the network card; there may be more than one network card). In the general case, you want to accept packets from any interface, so you use INADDR_ANY instead of a specific address.
    31: Now we are ready to bind the socket to the address we created above. This line tells the system that the socket s should be bound to the address in si_me.
    35: This call says that we want to receive a packet from s, that the data should be put info buf, and that buf can store at most BUFLEN characters. The zero parameter says that no special flags should be used. Data about the sender should be stored in si_other, which has room for slen byte. Note that recvfrom() will set slen to the number of bytes actually stored. If you want to play safe, set slen to sizeof(si_other) after each call to recvfrom().
    37: The information about the sender we got from recvfrom() is displayed (IP:port), along with the data in the packet. inet_ntoa() takes a struct in_addr and converts it to a string in dot notation, which is rather useful if you want to display the address in a legible form. 



*/
