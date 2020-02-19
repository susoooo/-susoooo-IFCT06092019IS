#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <netdb.h>
#include <sys/types.h> 
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#define PORTNUMBER 25

int main(void)
{
    int n,s,m,ns,len;
    char buf[1024];
    char hostname[64];
    struct hostent *hp;
    struct sockaddr_in name;

    /*Nombre del host local*/
    gethostname(hostname,sizeof(hostname));

    /*Direccion de red del host local*/
    hp=gethostbyname("smtp.gmail.com");
    
    /*Se crea el socket*/
    s=socket(PF_INET,SOCK_STREAM,0);
    perror("socket");
    name.sin_family=AF_INET;
    name.sin_port=htons(PORTNUMBER);

    /*Se asigna direccion IP*/
    memcpy(&name.sin_addr,hp->h_addr_list[0],hp->h_length);
    /*Modificacion para contectarse a un servidor en concreto*/
    //inet_aton("172.217.17.3", &name.sin_addr);
    //perror("inet_aton");
    len=sizeof(struct sockaddr_in);

    /*Se conecta al sevidor*/
    connect(s,(struct sockaddr *)&name,len);
    perror("connect");
   
    printf("HELO miequipo.midominio.com");
    while((n=read(0,buf,sizeof(buf)))>0)
    {
        /*Se copian los datos al socket*/
        printf("HELO miequipo.midominio.com");
        send(s,buf,n,0);
        m=recv(s,buf,sizeof(buf),0);
        write(1,buf,m);
        printf("MAIL FROM: <yo@midominio.com>");
        n=read(0,buf,sizeof(buf));
        send(s,buf,n,0);
        m=recv(s,buf,sizeof(buf),0);
        write(1,buf,m);
        printf("RCPT TO: <destinatario@sudominio.com>");
        n=read(0,buf,sizeof(buf));
        send(s,buf,n,0);
        m=recv(s,buf,sizeof(buf),0);
        write(1,buf,m);
        printf("DATA");
        n=read(0,buf,sizeof(buf));
        send(s,buf,n,0);
        m=recv(s,buf,sizeof(buf),0);
        write(1,buf,m);


        
    
    }
  
    
    
    /*Se cierra el socket*/
   
    close(s);

    return(0);
}
