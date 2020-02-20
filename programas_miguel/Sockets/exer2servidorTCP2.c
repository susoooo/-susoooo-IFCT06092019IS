
/*2-Adapta el ejercício de la calculadora remota, implementándola usando sockets TCP. 
	0 -> hago una suma
		me enviar el primer número
		me envia el segundo número
		devuelvo el resultado
	1 -> hago un factorial
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
#include <string.h>

#define PORTNUMBER 12543

int main (void)
{
    char buf [1024];
    int s, n, ns, len;
	int opcionserv;
	int sum1;
	int sum2;
	int resulSuma;
    struct sockaddr_in name;
    opcionserv=0;
	sum1=0;
	sum2=0;
	resulSuma=0;

    s= socket(PF_INET, SOCK_STREAM,0);
    name.sin_family=AF_INET;
    name.sin_port=htons(PORTNUMBER);
    name.sin_addr.s_addr=htonl(INADDR_ANY);
    len= sizeof(struct sockaddr_in);

    bind(s, (struct sockaddr *) &name, len);

    
    listen(s,5);
	ns=accept(s,(struct sockaddr *)&name, &len);
	
	recv(ns,&opcionserv,sizeof(int),0);
        
    
    
	switch (opcionserv)
              
        {
                   
            case 0:  
				write(ns,"Seleccionaches facer unha suma. Envía o número 1", 49 );
				recv(ns,&sum1,sizeof(int),0);
				write(ns,"Recibido o número 1. Envía o número 2", 38 );
				recv(ns,&sum2,sizeof(int),0);
				resulSuma=sum1+sum2;
                printf("%d\n",resulSuma);
                memset(buf,0,sizeof(buf)); //o que recolle en sizeof méteo en ceros no buf (1º parámetro)
                sprintf(buf, "O resultado é: %d\n", resulSuma);
				write (ns, buf,strlen(buf));
				
                break;
                
            case 1:
                break;  

            default: 
                printf("Rompeu!");   
                       
        }
    
    close (ns);
    close(s);
}




        