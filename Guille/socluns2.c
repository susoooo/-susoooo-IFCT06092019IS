#include <netinet/in.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <stdio.h>
#define PORTNUMBER 12543
int main(void)
{
int n,s,len;
char buf [1024];
char hostname [64];
struct hostent *hp;
struct sockaddr_in name;
gethostname(hostname,sizeof(hostname));

hp = gethostbyname(hostname);

s = socket(PF_INET, SOCK_DGRAM,0);
name.sin_family = AF_INET;
name.sin_port = htons (PORTNUMBER);

memcpy(&name.sin_addr, hp-> h_addr_list[0], hp->h_length);
len = sizeof(struct sockaddr_in);

while((n=read(0,buf,sizeof(buf)))>0)
    {
    sendto(s,buf,n,0,(struct sockaddr*)&name,len);
    
    recvfrom(s,buf,n,0,(struct sockaddr*)&name,len);
    
    }
close(s);



}