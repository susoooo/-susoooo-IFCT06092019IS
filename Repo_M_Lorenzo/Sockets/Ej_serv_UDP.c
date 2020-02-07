#include <netinet/in.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#define PORTNUMBER 12543


int main(void)
{
    char buf[1024];
    int s, n, len;
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

    while((n=recv(s,buf,sizeof(buf),0))>0)
    /*se imprimen los datos leidos*/
        write(stdout,buf,n);

    
    /*se cierra el socket*/

    close(s);

    return(0);
}