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

#define PORTNUMBER 12563

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

int sumar(int n1,int n2)
{
	int suma;
	suma =0;
	suma = n1+n2;
	return(suma);
}
	
	
	int main(void)
{
	char buf[1024];
    int s, n,ns, len;
    struct sockaddr_in name;
    int numero1, numero2;
    int opcion;
    long res_factorial;
    int res_suma;
	
	s=socket(PF_INET,SOCK_STREAM,0);
    name.sin_family=AF_INET;
    name.sin_port=htons(PORTNUMBER);
    name.sin_addr.s_addr=htonl(INADDR_ANY);
    len=sizeof(struct sockaddr_in);
	
	 bind(s,(struct sockaddr *)&name,len);

    listen(s,5);

    ns=accept(s,(struct sockaddr*)&name,&len);
	
	 while((n=recv(ns,buf,sizeof(buf),0))>0)
    {
    
        opcion=atoi(buf);

        switch (opcion)
        {
            case 0:
            {
                
                sprintf(buf,"0");
                send(ns,buf,strlen(buf),0);
              
                recv(ns,buf,sizeof(buf),0);
                numero1=atoi(buf);
              
                recv(ns,buf,sizeof(buf),0);
                numero2=atoi(buf);

                printf("Suma de: %d y %d\n",numero1, numero2);
                fflush(stdout);
                res_suma=sumar(numero1,numero2);
                printf("Resultado: %d\n",res_suma);
                fflush(stdout);
                sprintf(buf,"%d",res_suma);
                send(ns,buf,strlen(buf),0);
                break; 
                
            }
            
            case 1:
            {
                sprintf(buf,"1");
                send(ns,buf,strlen(buf),0);
                        
                recv(ns,buf,sizeof(buf),0);
                numero1=atoi(buf);
                printf("Factorial de: %d\n",numero1);
                fflush(stdout);
                res_factorial=factorial(numero1);
                printf("Resultado: %ld\n",res_factorial);
                fflush(stdout);
                sprintf(buf,"%ld",res_factorial);
                send(s,buf,strlen(buf),0);
                break;
            }
            
        
            default:
            {
                break;
            }
        }
        
    }   
    close(s);

    return(0);
}
    

	