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

    gethostname(hostname,sizeof(hostname));

    hp=gethostbyname(hostname);
    
    s=socket(PF_INET,SOCK_STREAM,0);
    name.sin_family=AF_INET;
    name.sin_port=htons(PORTNUMBER);

    memcpy(&name.sin_addr,hp->h_addr_list[0],hp->h_length);

    len=sizeof(struct sockaddr_in);

    connect(s,(struct sockaddr *)&name,len);
    
    printf("Escoja una opcion\n");
    printf("0- Sumar\n1- Factorial\n");
    while((n=read(0,buf,sizeof(buf)))>0)
    {
        send(s,buf,n,0);
        
        m=recv(s,buf,sizeof(buf),0);
        opcion=atoi(buf);
        
        switch (opcion)
        {
            case 0:
            {
                printf("Introduzca el primer numero\n");
                fflush(stdout);
                m=read(0,buf,sizeof(buf));
                send(s,buf,strlen(buf),0);
                printf("Introduzca el segundo numero\n");
                fflush(stdout);
                m=read(0,buf,sizeof(buf));
                send(s,buf,strlen(buf),0);

                m=recv(s,buf,sizeof(buf),0);
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
                send(s,buf,strlen(buf),0);
                m=recv(s,buf,sizeof(buf),0);
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


        printf("\nEscoja una opcion\n");
        printf("0- Sumar\n1- Factorial\n");
        fflush(stdout);
        
    
    }
   
    close(s);

    return(0);
}