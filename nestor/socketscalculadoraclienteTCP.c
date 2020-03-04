/*Adapta el ejercício de la calculadora remota, implementándola usando sockets TCP. 
0 - hago una suma
	me enviar el primer número
	me envia el segundo número
	devuelvo el resultado
1 - hago un factorial
	me envio el primer número
	devuelvo el resultado*/
//Servidor TCP
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
    int s, n,num1,num2,opcion,numfact,resultadofactorial,suma, ns, len;
    struct sockaddr_in name;
    opcion =0;
    num1 =0;
    num2 =0;
    numfact =0;
    suma =0;
    resultadofactorial =0;

    s= socket(AF_INET, SOCK_STREAM,0);
    name.sin_family=AF_INET;
    name.sin_port=htons(PORTNUMBER);
    inet_aton("127.0.0.1", &name.sin_addr);
    len= sizeof(struct sockaddr_in);
    ns=0;
    connect(s, (struct sockaddr *)&name, len);
    perror("ns");

    do
      {
    printf("Calcusocket Programa de creacion de socket para realizar calculos\n");
    printf("Que operacion desea realizar \n\n-0 para la suma \n-1 para calcular el factorial \n-Cualquier otro num para salir\n");
    scanf("%d",&opcion);
    num1=send(s, &opcion,sizeof(int), 0);
    printf("sendto:%d\n",num1);
    perror("Sendto");
    fflush(stdout);
    switch (opcion)
        {
        case 0:
            printf("por favor introduce el primer numero =");
            scanf("%d",&num1);
            //read(0,&num1, sizeof(int)>0);  
            sendto(s, &num1,sizeof(int), 0, (struct sockaddr*) &name, len);
            printf("por favor introduce el segundo numero =");
            scanf("%d",&num2);
            //read(0,&num2, sizeof(int)>0);
            sendto(s, &num2,sizeof(int), 0, (struct sockaddr*) &name, len);
            n =recv(s,&suma,sizeof(int),0); //recvfrom recibe mensaxes do socket.
            printf("El resultado de la suma es = %d\n\n",suma);
        break;
        case 1:
            printf("por favor introduce el numero para calcular el factorial=");
            scanf("%d",&numfact);
            sendto(s, &numfact,sizeof(int), 0, (struct sockaddr*) &name, len);
            n=recv(s,&resultadofactorial,sizeof(int),0);
            printf("El resultado del factorial de %d es = %d\n\n",numfact,resultadofactorial);
        break;        
        default:
            //printf("error numero erroneo introducido");
        break;
        }
      }
    while(opcion <=1 && opcion>=0);
   
   close(s);        
}