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
    char buf2[1024];
    char insulto[50];
    int s, n, len;
    struct sockaddr_in name;
    struct sockaddr_in *p;
    time_t t;
    struct tm *tm;
    char fechayhora[100];
    int opcion;
    FILE * fichero;
    FILE * fichero2;

    memset(buf2,0,1024);


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

    s=socket(PF_INET,SOCK_DGRAM,0);
    name.sin_family=AF_INET;
    name.sin_port=htons(PORTNUMBER);
    name.sin_addr.s_addr=htonl(INADDR_ANY);
    len=sizeof(struct sockaddr_in);

    bind(s,(struct sockaddr *)&name,len);
    
    while((n=recvfrom(s,buf,sizeof(buf),0,(struct sockaddr*)&name,&len))>0)
    {
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
                if(feof(fichero))
                    {
                        rewind(fichero);
                    }
                    
                fscanf (fichero,"%s",insulto);
                t=time(NULL);
                tm=localtime(&t);
                strftime(fechayhora, 100, "%d/%m/%Y  %H:%M", tm);
                strcat(buf," ");
                strcat(buf,insulto);
                strcat(buf,"\n");

                strcat(buf2,insulto);
                strcat(buf2," ");
                strcat(buf2,inet_ntoa(name.sin_addr));
                               
                sendto(s,buf,strlen(buf),0,(struct sockaddr*)&name,len);
                fwrite(buf,sizeof(char),strlen(buf),fichero2);
                write(1,buf2,1024);
                memset(buf,0,1024);
                memset(buf2,0,1024);

                break;
            }
            
            default:
            {
                break;
            }
        }
        
    }   

    fclose(fichero);
    fclose(fichero2);
    close(s);

    return(0);
}