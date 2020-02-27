#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/wait.h>
#include <signal.h>
#include <unistd.h>
#include <math.h>

#define PORTNUMBER 12563


char * comandos(char buf[])
{
    int i;
    int caso;
    char * p;
    char *opciones[3];
    char *respuesta;
    respuesta=(char *)malloc(sizeof(char)*100);
    memset(respuesta,0,100);
    i = 0;
    p = strtok(buf," "); 
    while (p != NULL)
    {
        opciones[i++] = p;
        p = strtok (NULL," ");
    }

    if(strcmp(opciones[0],"NAME")==0)
    {
        caso=0;
    }

    if(strcmp(opciones[0],"MESSAGE")==0)
    {
        caso=1;
    }

    if(strcmp(opciones[0],"UPDATE")==0)
    {
        caso=2;
    }
    
    if(strcmp(opciones[0],"GOODBYE")==0)
    {
        caso=3;
    }

    switch (caso)
    {
        case 0:/*REGISTRO*/
        {
            printf("%d",caso);
            strcat(respuesta,"registro");
            //strcat(respuesta,opciones[1]);
            return(respuesta);
            break;
        }

        case 1:/*ENVIO DE MENSAJES*/
        {
            strcat(respuesta,"mensaje");
            return(respuesta);
            break;
        }

        case 2:/*MOSTRAR MENSAJES*/
        {
            strcat(respuesta,"mostrar");
            return(respuesta);
            break;
        }
    
        case 3:/*DESCONEXION*/
        {
            strcat(respuesta,"salir");
            return(respuesta);
            break;
        }

        default:
        {
            strcat(respuesta,"error");
            return(respuesta);
            break;
        }
    }
    

}
int main(void)
{
    char buf[1024];
    char *respuesta;
    int s, s_nc, n, bucle, len;
    struct sockaddr_in my_name;
    struct sockaddr_in their_name;
    pid_t pid;

    respuesta=(char *)malloc(sizeof(char)*100);
    memset(buf,0,1024);
    
    /*Se crea el socket*/

    s=socket(PF_INET,SOCK_STREAM,0);
    perror("socket");
    my_name.sin_family=AF_INET;
    my_name.sin_port=htons(PORTNUMBER);
    my_name.sin_addr.s_addr=htonl(INADDR_ANY);
    len=sizeof(struct sockaddr_in);

    /*Se publica la dirección y el puerto por el que se va a escuchar*/

    bind(s,(struct sockaddr *)&my_name,len);
    perror("bind");

    /*Escucha de peticiones*/

    listen(s,5);
    perror("listen");

    while(1)
    {
        /*Aceptar conexiones*/
        s_nc=accept(s,(struct sockaddr*)&their_name,&len);
        perror("accept");
        printf("Sevidor: %s conectado\n", inet_ntoa(their_name.sin_addr));

        pid=fork();
        switch (pid)
        {
            case -1:
            {
                perror("No he podido crear el proceso hijo \n");
                break;
            }

            case 0:
            {
               send(s_nc, "Bienvenido al chat!\n", 21, 0);
               bucle=1;

               while(bucle==1)
               {
                    printf("Escuchando al cliente...\n"); 
                    n=recv(s_nc,buf,sizeof(buf),0);
                    respuesta=comandos(buf);

                    if (strcmp(respuesta,"REGISTRO"))//REGISTRO
                    {
                        strcat(buf,"OK ");
                        strcat(buf,inet_ntoa(their_name.sin_addr));
                        strcat(buf," ");
                        strcat(buf,respuesta);
                        send(s_nc,buf,strlen(buf),0);
                    }

                    if (strcmp(respuesta,"SALIR"))//SALIR
                    {
                        bucle= 0;
                        
                    }

                    if (strcmp(respuesta,"ERROR"))//ERROR
                    {
                        /* code */
                    }

                    if (strcmp(respuesta,"MENSAJE"))//ESCRIBIR MENSAJE
                    {
                        /* code */
                    }
                    
                    if (strcmp(respuesta,"MOSTRAR"))//MOSTRAR
                    {
                        /* code */
                    }
                }

               break;
            }

            default:
            {
                break;
            }

        }
        memset(buf,0,1024);
        

        
    }

    /*se cierran las conexiones*/
    free(respuesta);
    close(s_nc);
    close(s);

    return(0);
}