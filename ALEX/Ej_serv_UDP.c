#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <netdb.h>
#include <sys/types.h> 
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#define PORTNUMBER 12543


int main(void)
{
    char buf[1024];
    int s, n, m, len;
    struct sockaddr_in name;

    /*Se crea el socket*/

    s=socket(PF_INET,SOCK_DGRAM,0);
    name.sin_family=AF_INET;
    name.sin_port=htons(PORTNUMBER);
    name.sin_addr.s_addr=htonl(INADDR_ANY);
    len=sizeof(struct sockaddr_in);

    /*Se asigna una direccion al socket*/

    bind(s,(struct sockaddr *)&name,len);

    /*Se lee del socket hasta el final del  fichero*/
    while((n=recvfrom(s,buf,sizeof(buf),0,(struct sockaddr*)&name,&len))>0)
    {
    /*se imprimen los datos leidos*/
        write(1,buf,n);
        fflush;
        sendto(s,buf,n,0,(struct sockaddr*)&name,len);
    }   
    /*se cierra el socket*/

    close(s);

    return(0);
}