//Servidor UDP
#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <netinet/in.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define LEER 0 
#define ESCRIBIR 1


#define PORTNUMBER 12543

int main (void)
{
    char buf [1024];
    int s, n, len;
    struct sockaddr_in name;

    int descr[2];	/* Descriptores de E y S de la turbería */
    FILE * manejadorarchivo;
    char piropos[30];
    int contador;
    contador=0; 
    
    s = socket(PF_INET, SOCK_DGRAM,0);
    name.sin_family=AF_INET;
    name.sin_port=htons(PORTNUMBER);
    name.sin_addr.s_addr=htonl(INADDR_ANY);
    len= sizeof(struct sockaddr_in);

    bind(s, (struct sockaddr *) &name, len);
    manejadorarchivo=fopen("/home/nestor/Documentos/repositorionestor/IFCT06092019IS/nestor/piropator.txt","rb");
    do  
        {
        fread(&piropos[contador],sizeof(char),1,manejadorarchivo);
        write(descr[ESCRIBIR],&piropos[contador],sizeof(char));
        }
        
    while(!feof(manejadorarchivo));
    do
        {
          read(descr[LEER],&piropos[contador],sizeof (char));
          if (piropos[contador]==',')
             {
             usleep(1000000);
             }
          printf("%c",piropos[contador]);
          fflush(stdout);
          contador++;     
         }
         while (!(piropos[contador-5]=='P' &&\
                 piropos[contador-4]=='a' &&\
                 piropos[contador-3]=='r' &&\
                 piropos[contador-2]=='v' &&\
                 piropos[contador-1]=='o'));
                 
        }
        
return(0);
//rewind(manejadorarchivo);
}
    while ((n=recvfrom(s,buf,sizeof(buf),0,(struct sockadd*)&name, &len))>0)
    {
        write(1,buf, n);
        sendto(s, buf, n, 0, (struct sockaddr*) &name, len);
        
    }  

    close(s);
        
}