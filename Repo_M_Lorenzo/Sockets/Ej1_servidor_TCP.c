#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <netdb.h>
#include <sys/types.h> 
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#define PORTNUMBER 12563


int main(void)
{
    char buf[1024];
    int s, n, ns, len;
    struct sockaddr_in name;

    /*Se crea el socket*/

    s=socket(PF_INET,SOCK_STREAM,0);
    name.sin_family=AF_INET;
    name.sin_port=htons(PORTNUMBER);
    name.sin_addr.s_addr=htonl(INADDR_ANY);
    len=sizeof(struct sockaddr_in);

    /*Se publica la dirección y el puerto por el que se va a escuchar*/

    bind(s,(struct sockaddr *)&name,len);
    

    /*Escucha de peticiones*/

    listen(s,5);

    /*Aceptar conexiones*/

    ns=accept(s,(struct sockaddr*)&name,&len);


    /*Se lee del socket hasta el final del fichero*/

    while((n=recv(ns,buf,sizeof(buf),0))>0)
    {

        /*se imprime lo que va leyendo*/
        write(1,buf,n);
        fflush;
        send(ns,buf,strlen(buf),0);

    }

    /*se cierran las conexiones*/
    close(ns);
    close(s);

    return(0);
}