#include <netinet/in.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <unistd.h>
 #include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define PORTNUMBER 12563
int main (void)
{
  char buf [1024];
  servichat [10][80][300];
  int s,n,ns,len;
  struct sockaddr_in name;

  /*Se crea el socket.*/
  s=socket(PF_INET,SOCK_STREAM,0);
  name.sin_family = AF_INET;
  name.sin_port= htons(PORTNUMBER);
  name.sin_addr.s_addr= htonl(INADDR_ANY);
  len = sizeof (struct sockaddr_in);

  /*se pública la dirección y el puerto por el que se va 
  a escuchar*/
  bind(s,(struct sockaddr *)&name,len);

  /*Escucha de peticiones*/

  listen(s,10);
  
  /* Aceptar conexiones*/
  ns= accept (s,(struct sockaddr*) &name,&len);
  
  /*Se lee del socket hasta el final de fichero*/
  while((n= recv(ns,&n1,sizeof(n1),0))>0)
   /*Se imprime lo que se va leyendo*/
       {
         printf ("%d\n",n1);
         fflush(stdout);
      switch(n1){     
          case 0: 
                recv (ns,buf,n,0);
                n1=atoi(buf);
                recv (ns,buf,n,0);
                n2=atoi(buf);
                suma=0;               
                suma=n1+n2;
                sendto(ns,&suma,n,0,(struct sockaddr*)&name,len);
                printf("el resultado es = %d\n",suma);
                break;
          case 1: 
                recv(s,buf,n,0);
                nb=atoi(buf);
                fac=1;
                    for(contador=1;contador<=nb;contador++)
                      {
                     fac = fac*contador;
                      }
                   sendto(s,buf,n,0,(struct sockaddr*)&name,len);
                   printf ("el factorial del número enviado es= f%d\n");
                 
                break;
          default: 
                printf("Sen éxito \n");      
             }

       }  
                /*Se cierran conexiones*/
                close(ns);
                close(s);
}