#include <netinet/in.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#define PORTNUMBER  12563
int main (void)
{
int n,s,len;
int bufi;
char buf[1024];
char hostname[64];
struct hostent *hp;
struct sockaddr_in name;

/*nombre del host local*/
gethostname(hostname, sizeof (hostname));

/*Dirección de red del host local*/
hp = gethostbyname(hostname);

/*Se crea el socket*/
s = socket(PF_INET,SOCK_STREAM,0);
perror("socket");
name.sin_family = AF_INET;
name.sin_port = htons (PORTNUMBER);

/*Se asigna dirección IP*/
memcpy(&name.sin_addr,hp-> h_addr_list[0],hp-> h_length);
len = sizeof (struct sockaddr_in);

/*Se conecta al servidor*/
connect(s,(struct sockaddr*)&name,len);
perror("Connect");
     printf ("Para hacer tus operaciones con calcoplus dispones de dos opciones, para calcular una suma\ 
         introduce un 0 y posteriormente introduce uno por uno los números a sumar, te comunicaremos\ 
         el resultado; Si quieres calcular el factorial introduce en primer lugar un uno, y luego\ 
         el número para calcular el factorial, te comunicaremos el resultado.");
         fflush (stdout);
/*Se leen caracteres del teclado*/
memset(&bufi,0,sizeof(int));
while((n=read(0,&bufi,sizeof(bufi)))>0)
{  
     bufi = bufi-2608;
     printf ("%d\n ", bufi);
     fflush (stdout);
    n=sendto(s,&bufi,n,0,(struct sockaddr*)&name,len);
       switch(bufi)
        {
          case 0:
                
                n=read(0,buf,sizeof(buf));
                sendto(s,buf,n,0,(struct sockaddr*)&name,len);
                perror("segundo envio");
                n=read(0,buf,sizeof(buf));
                sendto(s,buf,n,0,(struct sockaddr*)&name,len);
                perror("segundo envio");
                recv(s,&len,sizeof(int),0);
                printf ("Recibido:%d", len);
                 break;
          case 1: 
                printf ("introduce el número para calcular su factorial");
                n=read(0,buf,sizeof(buf));
                sendto(s,buf,n,0,(struct sockaddr*)&name,len);
                recv(s,buf,n,0);
                printf("%s", buf);
                
        
                break;
          default: 
                
                printf("Error \n"); 
        }            
send(s,buf,n,0);
recv (s,buf,n,0);
printf ("%s",buf);
fflush (stdout);
  }
close(s);
}
