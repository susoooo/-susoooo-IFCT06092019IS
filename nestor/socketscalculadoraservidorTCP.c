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
    int n,b, s, ns,num1,num2,numfact,suma,opcion,len,resultadofactorial; 
    struct sockaddr_in name;
    //num1 =1;
    //num2 =1;
    //numfact =1;
    //suma =0;
    resultadofactorial =1;
    //opcion=1;

    s=socket(AF_INET, SOCK_STREAM, 0);
    name.sin_family= AF_INET;
    name.sin_port= htons(PORTNUMBER);
    name.sin_addr.s_addr=htonl(INADDR_ANY);
    len=sizeof(struct sockaddr_in);
    bind(s, (struct sockaddr *) &name, len);
    perror("s");
    listen(s,5);
    perror("s");
    ns = accept(s,(struct sockaddr *)&name, &len);
    perror("despois do accept");
    fflush(stdout);
    do
        {
        recv(ns,&opcion,sizeof(int),0);
        //recvfrom(ns,&opcion,sizeof(int),0,(struct sockaddr*) &name,&len);
        printf("opcion:%d\n",opcion);
        fflush(stdout);
    switch (opcion)
        {
        case 0:
        printf("entrando en suma\n");
        fflush(stdout);
            recv(ns,&num1,sizeof(int),0);
            recv(ns,&num2,sizeof(int),0); 
            suma = num1 + num2;
            printf("suma = %d\n",suma);
            fflush(stdout);
            sendto(ns,&suma,sizeof(int), 0, (struct sockaddr*) &name, len);
        break;
        case 1:
            printf("entrando en factorial\n");
            recv(ns,&numfact,sizeof(int),0);
            for (b = numfact; b > 1; b--)
                {
                resultadofactorial = resultadofactorial * b;
                }
            printf("resultadofactorial:%d",resultadofactorial);
            fflush(stdout);
            sendto(ns,&resultadofactorial,sizeof(int), 0, (struct sockaddr*) &name, len);
        break;
        default:
        break; 
        }
    }    
    while(opcion <=1 && opcion>=0);
    close(s);
}