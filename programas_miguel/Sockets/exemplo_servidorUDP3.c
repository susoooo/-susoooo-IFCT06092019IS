//Servidor UDP
#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <netinet/in.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <sys/wait.h>

#define PORTNUMBER 12543

int main (void)
{
    char buf [1024];
    int s, n, len;
    struct sockaddr_in name;
    

    s= socket(PF_INET, SOCK_DGRAM,0);
    name.sin_family=AF_INET;
    name.sin_port=htons(PORTNUMBER);
    name.sin_addr.s_addr=htonl(INADDR_ANY);
    len= sizeof(struct sockaddr_in);

    bind(s, (struct sockaddr *) &name, len);
    
    while ((n=recvfrom(s,buf,sizeof(buf),0,(struct sockadd*)&name, &len))>0) //recvfrom recibe mensaxes do socket.
    {
        write(1,buf, n);
        
        n=read(0,buf, sizeof(buf));
        sendto(s, buf, n, 0, (struct sockaddr*) &name, len);
    }  

    close(s);        
}