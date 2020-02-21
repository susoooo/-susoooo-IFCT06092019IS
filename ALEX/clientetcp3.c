#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <netdb.h>
#include <sys/types.h> 
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#define PORTNUMBER 80

int main(void)
{
    int n,s,m,ns,len;
    char buf[1024];
    char hostname[64];
    struct hostent *hp;
    struct sockaddr_in name;

    gethostname(hostname,sizeof(hostname));
  
    hp=gethostbyname(hostname);
    
    s=socket(PF_INET,SOCK_STREAM,0);
    perror("socket");
    name.sin_family=AF_INET;
    name.sin_port=htons(PORTNUMBER);

    memcpy(&name.sin_addr,hp->h_addr_list[0],hp->h_length);
    inet_aton("marca.com", &name.sin_addr);
    perror("inet_aton");
    len=sizeof(struct sockaddr_in);

    connect(s,(struct sockaddr *)&name,len);
    perror("connect");
   
    while((n=read(0,buf,sizeof(buf)))>0)
    {

        send(s,buf,n,0);
        m=recv(s,buf,sizeof(buf),0);
        write(1,buf,m);
    
    }
  
    close(s);

    return(0);
}
