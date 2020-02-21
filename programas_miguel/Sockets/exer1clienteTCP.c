//Cliente TCP
//1-Enviar el mensaje recibido de vuelta.
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
    //char hostname[64];
    //struct hostent *hp;
    struct sockaddr_in name;
   
    //gethostname (hostname, sizeof(hostname));
    //hp=gethostbyname(hostname);

    s=socket(PF_INET, SOCK_STREAM, 0);
    name.sin_family= AF_INET;
    name.sin_port= htons(PORTNUMBER);

    inet_aton("127.0.0.1", &name.sin_addr);

    //memcpy(&name.sin_addr, hp->h_addr_list[0], hp->h_length);
    len=sizeof(struct sockaddr_in);

    connect(s,(struct sockaddr *) &name, len);


    while ((n=read(0,buf, sizeof(buf)))>0)
    {
        send(s, buf, n, 0);
        recv(s,buf,sizeof(buf),0);
        write(1,buf, n);     
    }
    
    close(s);    
}
