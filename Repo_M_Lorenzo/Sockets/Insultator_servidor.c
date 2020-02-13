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
#include <time.h>

#define PORTNUMBER 12543

int main(void)
{
    char buf[1024];
    char insulto[50];
    int s, n, len;
    struct sockaddr_in name;
    time_t t;
    struct tm *tm;
    char fechayhora[100];
    int opcion;
    FILE * fichero;
    FILE * fichero2;

    fichero=fopen("insultator.txt","rt");
    if (fichero==NULL)
    {
        perror("No hay archivo");
    }

    fichero2=fopen("Reg_insultator.txt","at");
    if (fichero2==NULL)
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
                fclose(fichero);
                fclose(fichero2);
                exit(0);
                               
            }
            
            case 1:
            {
                /*Pedimos el numero*/
                if(feof(fichero))
                    {
                        rewind(fichero);
                    }
                    
                fscanf (fichero,"%s",insulto);
                t=time(NULL);
                tm=localtime(&t);
                strftime(fechayhora, 100, "%d/%m/%Y  %H:%M", tm);

                strcat(buf,"Insultator_Manel ");
                strcat(buf,fechayhora);
                strcat(buf," ");
                strcat(buf,insulto);
                strcat(buf,"\n");
                               
                sendto(s,buf,strlen(buf),0,(struct sockaddr*)&name,len);
                fwrite(buf,sizeof(char),strlen(buf),fichero2);
                memset(buf,0,1024);
                break;
            }
            
        
            default:
            {
                break;
            }
        }
        
    }   
    /*se cierra el socket*/

    fclose(fichero);
    fclose(fichero2);
    close(s);

    return(0);
}