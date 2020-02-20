
/*2-Adapta el ejercício de la calculadora remota, implementándola usando sockets TCP. 
	0 -> hago una suma
		me enviar el primer número
		me envia el segundo número
		devuelvo el resultado
	1 -> hago un factorial
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
#include <string.h>

#define PORTNUMBER 12543

int main (void)
{
    int n, s, len;
    int opcion;
    int num1;
    int num2;
    int numf;
    int operacionsuma;
    char buf[1024];
    struct sockaddr_in name;
    
    opcion=0;
    num1=0;
    num2=0;
    numf=0;
    operacionsuma=0;

    


    s=socket(PF_INET, SOCK_STREAM, 0);
    name.sin_family= AF_INET;
    name.sin_port= htons(PORTNUMBER);

    inet_aton("127.0.0.1", &name.sin_addr);

    len=sizeof(struct sockaddr_in);

    connect(s,(struct sockaddr *) &name, len);
    

    do 
    {
        printf("Escolle 0 para calcular unha suma\n");
        printf("Escolle 1 para calcular un factorial\n");
        printf("Escolle 9 para saír\n");
        scanf("%d",&opcion);
            
        switch (opcion)
        {
            case 0:
                printf("Escolliches calcular unha suma\n");
                send(s, &operacionsuma, 1, 0);
                recv(s,buf,sizeof(buf),0);
                

                printf("Introduce o primeiro número: ");
                scanf("%d", &num1);
                send(s, &num1, sizeof(int), 0);
                recv(s,buf,sizeof(buf),0);
                

                printf("Introduce o segundo número: ");
                scanf("%d", &num2);

                send(s, &num2, sizeof(int), 0);
                memset(buf,0,sizeof(buf));
                recv(s,buf,sizeof(buf),0); 
                write(1,buf,sizeof(buf));
               
                break;
                
            case 1:
                printf("Escolliches calcular un factorial\n");
                send(s, "1", 1, 0);

                printf("Introduce o número do que queres calcular o factorial: ");
                scanf("%d", &numf);
                send(s, &numf, sizeof(int), 0);
                break;

            case 9:
                printf("Escolliches saír\n");
                break;  

            default: 
                printf("Cometiches un erro ó introducir o número\n\n"); 
        }
    }    
    while (opcion!=9);
    
    close(s);    
}

