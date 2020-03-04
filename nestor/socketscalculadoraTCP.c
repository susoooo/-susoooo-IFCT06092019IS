/*Adapta el ejercício de la calculadora remota, implementándola usando sockets TCP. 
0 - hago una suma
	me enviar el primer número
	me envia el segundo número
	devuelvo el resultado
1 - hago un factorial
	me envio el primer número
	devuelvo el resultado*/
//Cliente TCP
#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <netinet/in.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <sys/wait.h>
#include <string.h>

#define PORTNUMBER 12543

int main (void)
{
    int n, s, len;
    char buf[1024];
    struct sockaddr_in name;
  

    s=socket(AF_INET, SOCK_STREAM, 0);
    name.sin_family= AF_INET;
    name.sin_port= htons(PORTNUMBER);
    inet_aton("127.0.0.1", &name.sin_addr);
    len=sizeof(struct sockaddr_in);
    connect(s, (struct sockaddr *)&name, len);
    while ((n=read(0,buf, sizeof(buf)))>0)
    {   
        sendto(s, buf, n, 0, (struct sockaddr*) &name, len);
        //sleep(1);
    }
    close(s);
}