
#include <netinet/in.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <unistd.h>
 #include <string.h>
#include <stdio.h>

#define PORTNUMBER 12543
int main(void)
{
int n,s,len;
char buf [1024];
char hostname [64];
struct hostent *hp;
struct sockaddr_in name;


s = socket(AF_INET, SOCK_DGRAM,0);
    printf ("%d",s);
    perror ("socket");
    fflush (stdout);
name.sin_family = AF_INET;
name.sin_port = htons (PORTNUMBER);

//memcpy(&name.sin_addr, hp-> h_addr_list[0], hp->h_length);
inet_aton("192.168.90.211", &name.sin_addr);

len = sizeof(struct sockaddr_in);

while((n=read(0,buf,sizeof(buf)))>0)
    {
    
    n=sendto(s,buf,n,0,(struct sockaddr*)&name,len);
    printf ("%d",n);
    perror ("sendto");
    fflush (stdout);
    switch(*buf){     
          case 1: 
                sendto(s,buf,n,0,(struct sockaddr*)&name,len);
                printf ("mensaxe recibido\n");
                break;
          case 0: 
                sendto(s,buf,n,0,(struct sockaddr*)&name,len);
                printf ("mensaxe recibido opción 2\n");
                break;
          default: 
                
                printf("Sen éxito \n");
                }
    }          
while((n=read(0,buf,sizeof(buf)))>0)
    {
    
    recvfrom(s,buf,n,0,(struct sockaddr*)&name,&len);
    
    }
close(s);



}