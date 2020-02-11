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

#define PORTNUMBER 12543


long factorial (int n)
{
    int i;
    long producto;

    producto=1;
    i=1;
    while(i<=(int)n)
    {
        producto=producto*i;
        i=i+1;
            
    }
    
    return (producto);
}

int sumar (int n1,int n2)
{
    int suma;
    suma=n1+n2;

    return(suma);
}


int main(void)
{
    char buf[1024];
    int s, n, len;
    struct sockaddr_in name;
    int numero1, numero2;
    int opcion;
    long res_factorial;
    int res_suma;
   
    /*Se crea el socket*/

    s=socket(PF_INET,SOCK_DGRAM,0);
    name.sin_family=AF_INET;
    name.sin_port=htons(PORTNUMBER);
    name.sin_addr.s_addr=htonl(INADDR_ANY);
    len=sizeof(struct sockaddr_in);

    /*Se asigna una direccion al socket*/

    bind(s,(struct sockaddr *)&name,len);
    
    /*Se lee del socket hasta el final del  fichero*/
    while((n=recvfrom(s,buf,sizeof(buf),0,(struct sockaddr*)&name,&len))>0)
    {
    /*se imprimen los datos leidos*/
        opcion=atoi(buf);

        switch (opcion)
        {
            case 0:
            {
                /*Pedimos el numero*/
                sprintf(buf,"0");
                sendto(s,buf,strlen(buf),0,(struct sockaddr*)&name,len);

                /*Recibimos numero1*/                
                recvfrom(s,buf,sizeof(buf),0,(struct sockaddr*)&name,&len);
                numero1=atoi(buf);
                /*Recibimos numero2*/
                recvfrom(s,buf,sizeof(buf),0,(struct sockaddr*)&name,&len);
                numero2=atoi(buf);

                /*Calculamos resultado y lo enviamos*/

                printf("Suma de: %d y %d\n",numero1, numero2);
                fflush(stdout);
                res_suma=sumar(numero1,numero2);
                printf("Resultado: %d\n",res_suma);
                fflush(stdout);
                sprintf(buf,"%d",res_suma);
                sendto(s,buf,strlen(buf),0,(struct sockaddr*)&name,len);
                break; 
                
            }
            
            case 1:
            {
                /*Pedimos el numero*/
                sprintf(buf,"1");
                sendto(s,buf,strlen(buf),0,(struct sockaddr*)&name,len);

                /*Recibimos numero,calculamos resultado y lo enviamos*/                
                recvfrom(s,buf,sizeof(buf),0,(struct sockaddr*)&name,&len);
                numero1=atoi(buf);
                printf("Factorial de: %d\n",numero1);
                fflush(stdout);
                res_factorial=factorial(numero1);
                printf("Resultado: %ld\n",res_factorial);
                fflush(stdout);
                sprintf(buf,"%ld",res_factorial);
                sendto(s,buf,strlen(buf),0,(struct sockaddr*)&name,len);
                break;
            }
            
        
            default:
            {
                break;
            }
        }
        
    }   
    /*se cierra el socket*/

    close(s);

    return(0);
}