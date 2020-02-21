//Servidor TCP
//1-Enviar el mensaje recibido de vuelta.

#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <netinet/in.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <sys/wait.h>

#define PORTNUMBER 12543

int main (void)
{
    char buf [1024];
    int s, n, ns, len;
    struct sockaddr_in name;
    

    s= socket(PF_INET, SOCK_STREAM,0);
    name.sin_family=AF_INET;
    name.sin_port=htons(PORTNUMBER);
    name.sin_addr.s_addr=htonl(INADDR_ANY);
    len= sizeof(struct sockaddr_in);

    bind(s, (struct sockaddr *) &name, len);

    listen(s,5);

    ns=accept(s,(struct sockaddr *)&name, &len);

    
    while ((n=recv(ns,buf,sizeof(buf),0))>0)
    {
        write(1,buf, n);
        sendto(ns, buf, n, 0, (struct sockaddr*) &name, len); //sendto necesita que se lle pase a dirección
        // Tamén se podería usar: write(ns, buf, n); en sustitución da liña anterior
    }  

    close (ns);
    close(s);

}
