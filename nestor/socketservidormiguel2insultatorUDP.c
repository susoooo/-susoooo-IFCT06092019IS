/*Crea un servidor insultator. El servidor tendrá una lista de insultos
que servirá cada vez que reciba una conexión de un cliente.
El servidor enviará el insulto precedido por el nombre del 
servidor para que los clientes puedan identificar que el insulto 
ha sido generado por él. Si es posible, haz que el servidor lea 
los insultos de un archivo de texto en donde estarán todos los 
archivos de texto. Para nota sería que en otro archivo guardase 
los insultos que va mandando, a quien se los manda, y la fecha y 
hora en que los manda.*/
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
#define PORTNUMBER 12543

int main (void)
{
    FILE * manejadorarchivo;
    int s,len;
    struct sockaddr_in name;
    char insultos[30000];
    int contador;
    contador=0; 
    
    s = socket(PF_INET, SOCK_DGRAM,0);
    name.sin_family=AF_INET;
    name.sin_port=htons(PORTNUMBER);
    name.sin_addr.s_addr=htonl(INADDR_ANY);
    len= sizeof(struct sockaddr_in);

    bind(s, (struct sockaddr *) &name, len);
    manejadorarchivo=fopen("/home/nestor/Documentos/repositorionestor/IFCT06092019IS/nestor/insultator.txt","rb");
    do  
    {
    for (contador=0;contador<3000;contador++ )
        {
        fread(&insultos[contador],sizeof(char),1,manejadorarchivo);
        sendto(s,insultos[contador], 1, 0, (struct sockaddr*) &name, len);
        }   
    }
    while(!feof(manejadorarchivo));
    close(s);   
}
        

//rewind(manejadorarchivo) 
