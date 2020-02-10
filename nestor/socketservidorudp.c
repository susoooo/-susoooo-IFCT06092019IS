#include <sys/types.h>
#include <sys/socket.h>
#define PORTNUMBER 12543
int main(void)
{
    char buf[1024]
    int s,n,len;
    struct sockaddr_in name;
    /*se crea el socket*/
    s= socket(PF_INET,SOCK_DGRAM,O);  
    name.sin_family = AF_INET;
    name.sin_port = htons(PORTNUMBER);
    name.sin_addr.s_addr = hton1(INADDR_ANY);
    len = size of(struct sockaddr_in);
    /* se asigna direcion al socket*/
    bind((s,(struct sock *)&name,len);
    /* se lee el socket hasta el fuinal del fichero*/
    while((n = recv(s,buf,sizeof(buf),0))>0)
    /* se imprimen los datos leidos */
    write(stdout,buf,n);
    /*se cierra el socket */
    close(s);
}