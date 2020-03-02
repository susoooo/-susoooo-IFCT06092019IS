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
    char  hostname[64];
    struct hostent *hp;
    struct sockaddr_in name;

    gethostname (hostname, sizeof(hostname));

    hp=gethostbyname(hostname);

    s=socket(PF_INET, SOCK_DGRAM, 0);
    name.sin_family= AF_INET;
    name.sin_port= htons(PORTNUMBER);

    memcpy(&name.sin_addr, hp->h_addr_list[0], hp->h_length);
    len=sizeof(struct sockaddr_in);
    do 
    {
        while (n = recvfrom(s,buf,sizeof(buf),0,(struct sockaddr*) &name, &len)>0)
        { 
        if (buf!=',')
            {
            write(1,buf, n);
            }
            else
                printf(",");
                usleep(1000000);
        }
    }
    while (!(buf-5=='P' &&\
             buf-4=='a' &&\
             buf-3=='r' &&\
             buf-2=='v' &&\
             buf-1=='o'));//sendto(s, buf, n, 0, (struct sockaddr*) &name, len); 
    close(s);
}