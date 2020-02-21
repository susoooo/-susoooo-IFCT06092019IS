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
name.sin_family = AF_INET;
name.sin_port = htons (PORTNUMBER);

/*Se asigna dirección IP*/
memcpy(&name.sin_addr,hp-> h_addr_list[0],hp-> h_length);
len = sizeof (struct sockaddr_in);

/*Se conecta al servidor*/
connect(s,(struct sockaddr*)&name,len);

/*Se leen caracteres del teclado*/
while((n=read(0,buf,sizeof(buf)))>0)

  {
send(s,buf,n,0);
recv (s,buf,n,0);
printf ("%s",buf);
fflush (stdout);
  }
close(s);
}