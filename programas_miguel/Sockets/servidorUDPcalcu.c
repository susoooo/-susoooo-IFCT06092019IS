//Servidor UDP
#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <netinet/in.h>
#include <unistd.h>
#include <arpa/inet.h>


#define PORTNUMBER 12543

int main (void)
{
    char buf [1024];
    int s, n, len;
    struct sockaddr_in name;
    int numero1;
    numero1=0;
    

    s= socket(PF_INET, SOCK_DGRAM,0);
    name.sin_family=AF_INET;
    name.sin_port=htons(PORTNUMBER);
    name.sin_addr.s_addr=htonl(INADDR_ANY);
    len= sizeof(struct sockaddr_in);

    bind(s, (struct sockaddr *) &name, len);

    
    printf("Envíame o primeiro número: ");
    scanf("%d", &numero1);
    
    while ((n=recv(s,buf,sizeof(buf),0))>0)
    {
        write(1,buf, n);
    }   
        close(s);
        
}