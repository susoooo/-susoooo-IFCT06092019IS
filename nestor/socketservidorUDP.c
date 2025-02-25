#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <string.h>
#define PORTNUMBER 12543

int main(void)

{   int s,n,len;
    char buf[1024];
    struct sockaddr_in name;

    /*se crea el socket*/
    s= socket(PF_INET,SOCK_DGRAM,0);  
    name.sin_family = AF_INET;
    name.sin_port = htons(PORTNUMBER);
    name.sin_addr.s_addr = htons(INADDR_ANY);
    len = sizeof(struct sockaddr_in);
    /* se asigna direcion al socket*/
    bind(s,(struct sockaddr *)&name,len);
    /* se lee el socket hasta el fuinal del fichero*/
    while((n = recv(s,buf,sizeof(buf),0))>0)
    /* se imprimen los datos leidos */
    write(1,buf,n);
    while((n = read(0,buf,sizeof(buf)))>0)
    /* se copian los datos al socket */
    sendto(s,buf,n,0,(struct sockaddr*) &name,len);
    /*se cierra el socket */
    close(s);
}