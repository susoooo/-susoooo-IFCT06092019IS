#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <netdb.h>
#include <sys/types.h> 
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#define PORTNUMBER 12543


int main(void)
{
    char buf[1024];
    int s;
	int resultado;
	int longitud;
    struct sockaddr_in name;
	

    s = socket(PF_INET,SOCK_DGRAM,0);
    name.sin_family = AF_INET;
    name.sin_port = htons(PORTNUMBER);
    name.sin_addr.s_addr = htonl(INADDR_ANY);
    longitud = sizeof(struct sockaddr_in);
	


    bind(s,(struct sockaddr *)&name,longitud);

   
    while((resultado = recv(s,buf,sizeof(buf),0))>0)
   
        write(stdout, buf, resultado);
      
    close(s);

}