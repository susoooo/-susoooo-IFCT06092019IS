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
    int n,m,s,len;
    int opcion;
    int numero1, numero2;
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
    //inet_aton("192.168.90.160", &name.sin_addr);
    len=sizeof(struct sockaddr_in);

    /*Se conecta al sevidor*/
    connect(s,(struct sockaddr *)&name,len);
    
    printf("¿Que desea hacer?\n");
    printf("0- Sumar\n1- Factorial\n");
    /*Se lee caracteres del teclado*/
    while((n=read(0,buf,sizeof(buf)))>0)
    {
               
        /*Se copian los datos al socket*/
        sendto(s,buf,n,0,(struct sockaddr*)&name,len);
        
        /*Recibimos la opcion a calcular*/
        m=recvfrom(s,buf,sizeof(buf),0,(struct sockaddr*)&name,&len);
        opcion=atoi(buf);
        
        switch (opcion)
        {
            case 0:
            {
                printf("Introduzca el primer numero\n");
                fflush(stdout);
                m=read(0,buf,sizeof(buf));
                /*enviamos numero1*/
                sendto(s,buf,strlen(buf),0,(struct sockaddr*)&name,len);
                printf("Introduzca el segundo numero\n");
                fflush(stdout);
                m=read(0,buf,sizeof(buf));
                /*Enviamos numero2*/
                sendto(s,buf,strlen(buf),0,(struct sockaddr*)&name,len);

                /*recibimos resultado*/
                m=recvfrom(s,buf,sizeof(buf),0,(struct sockaddr*)&name,&len);
                printf("El resultado es:");
                fflush(stdout);
                write(1,buf,m);


                break;
            }
            
            case 1:
            {
                printf("Introduzca el numero\n");
                fflush(stdout);
                m=read(0,buf,sizeof(buf));
                /*enviamos numero*/
                sendto(s,buf,strlen(buf),0,(struct sockaddr*)&name,len);
                /*recibimos resultado*/
                m=recvfrom(s,buf,sizeof(buf),0,(struct sockaddr*)&name,&len);
                printf("El resultado es:");
                fflush(stdout);
                write(1,buf,m);

                break;
            }
            
        
            default:
            {
                break;
            }
            
        }


        printf("\n¿Que desea hacer?\n");
        printf("0- Sumar\n1- Factorial\n");
        fflush(stdout);
        
    
    }
    
    /*Se cierra el socket*/
   
    close(s);

    return(0);
}