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
    int n,s,len,m;
    char buf[1024];
    char hostname[64];
    struct hostent *hp;
    struct sockaddr_in name;

    /*Nombre del host local*/
    gethostname(hostname,sizeof(hostname));

    /*Direccion de red del host local*/
    hp=gethostbyname(hostname);
    
    /*Se crea el socket*/
    s=socket(PF_INET,SOCK_STREAM,0);
    name.sin_family=AF_INET;
    name.sin_port=htons(PORTNUMBER);

    /*Se asigna direccion IP*/
    memcpy(&name.sin_addr,hp->h_addr_list[0],hp->h_length);
    /*Modificacion para contectarse a un servidor en concreto*/
    //inet_aton("192.168.90.129", &name.sin_addr);
    len=sizeof(struct sockaddr_in);

    /*Se conecta al sevidor*/
    connect(s,(struct sockaddr *)&name,len);
    perror("connect");
    
    /*Se lee caracteres del teclado*/
    while((n=read(0,buf,sizeof(buf)))>0)
    {
        perror("leer");
        fflush(stdout);
        /*Se copian los datos al socket*/
        send(s,buf,n,0);
        //sendto(s,buf,n,0,(struct sockaddr*)&name,len);
        perror("envio");
        //m=recvfrom(s,buf,sizeof(buf),0,(struct sockaddr*)&name,&len);
        //write(1,buf,m);
    
    }
    
    /*Se cierra el socket*/
   
    close(s);

    return(0);
}
