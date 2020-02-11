#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <netdb.h>
#include <sys/types.h> 
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <pthread.h>
#include <math.h>

#define PORTNUMBER 12543

int main(void)
{
    char buf[1024];
    int s, n, len;
    struct sockaddr_in name;
    FILE * fichero;
    void *pDatos;
    int opcion;

    fichero=fopen("insultator.txt","rt");
    if (fichero==NULL)
    {
        perror("No hay archivo");
    }
    
            
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
        opcion=atoi(buf);

        switch (opcion)
        {
            case 0:
            {
                close(s);
                exit(0);
                break; 
                
            }
            
            case 1:
            {
                /*Leemos el insulto*/
                if(feof(fichero))
                    {
                        rewind(fichero);
                        
                    }
                    
                    fscanf (fichero,"%s",buf);

                /*Enviamos insulto*/                
                               
                sendto(s,buf,strlen(buf),0,(struct sockaddr*)&name,len);
                break;
            }
            
        
            default:
            {
                break;
            }
        }
        
    }   
    /*se cierra el socket*/

    close(s);

    return(0);
}