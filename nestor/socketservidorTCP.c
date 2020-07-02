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
    char buf [1024];
    int s, n, ns, len;
    struct sockaddr_in name;

    s= socket(AF_INET, SOCK_STREAM,0);
    name.sin_family=AF_INET;
    name.sin_port=htons(PORTNUMBER);
    name.sin_addr.s_addr=htonl(INADDR_ANY);
    len= sizeof(struct sockaddr_in);
    n=bind(s, (struct sockaddr *) &name, len);
    printf("%d",n);
    perror("Bind");
    fflush(stdout);
    n=listen(s,5);
    printf("%d",n);
    perror("Listen");
    fflush(stdout);
    ns = accept(s,(struct sockaddr *)&name, &len);
    printf("%d",ns);
    perror("Accept");
    fflush(stdout);

    while ((n=recv(ns,buf,sizeof(buf),0))>0) //recvfrom recibe mensaxes do socket.
    {
        write(1,buf,n);
        //sleep(1);
        //sendto(s, buf, n, 0, (struct sockaddr*) &name, len);
        //sleep(1);
   } 
   close(ns); 
   close(s);        
}