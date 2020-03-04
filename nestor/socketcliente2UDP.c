#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <netdb.h>
#include <string.h>
#include <unistd.h> 
#define PORTNUMBER 12543

int main(void)

{   int s,n,len;
    char buf[1024];
    char hostname[64];
    struct hostent *hp;
    struct sockaddr_in name;
    
    /* nombre del host local.*/
    gethostname(hostname,sizeof(hostname));
    /* direciion del la rfed del host local*/
    hp = gethostbyname(hostname);
    /*se crea el socket*/
    s= socket(PF_INET,SOCK_DGRAM,0);  
    name.sin_family = AF_INET;
    name.sin_port = htons(PORTNUMBER);
    /*se asigna la direcion IP */
    memcpy(&name.sin_addr,hp->h_addr_list[0],hp->h_length);
    len = sizeof(struct sockaddr_in);
    while((n = read(0,buf,sizeof(buf)))>0)
    {   
        printf ("enviando\n");
        fflush(stdout);
    sendto(s,buf,n,0,(struct sockaddr*) &hostname,len);
        printf ("esperando\n");
        fflush(stdout);    
    recvfrom(s,buf,sizeof(buf),0,(struct sockaddr*) &name,&len);
    write(1,buf,n);
    }
    close(s);
}