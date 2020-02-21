//Cliente UDP
#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <netinet/in.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <string.h>

#define PORTNUMBER 12543

int main (void)
{
    int n, s, len;
    char buf[1024];
   
    struct sockaddr_in name;
   
    s=socket(PF_INET, SOCK_DGRAM, 0);
    name.sin_family= AF_INET;
    name.sin_port= htons(PORTNUMBER);

    inet_aton("192.168.90.211", &name.sin_addr);
    len=sizeof(struct sockaddr_in);

    while ((n=read(0,buf, sizeof(buf)))>0)
    {
        sendto(s, buf, n, 0, (struct sockaddr*) &name, len);
        sleep(1);
              
    }
    
    close(s);
}
