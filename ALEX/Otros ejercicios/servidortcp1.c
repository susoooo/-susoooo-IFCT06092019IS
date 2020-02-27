#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <netdb.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/types.h>

#define PORTNUMBER 12543

int main(void)
{
    char buf[1024];
    int s, n,ns,len;
    struct sockaddr_in name;
	
	s = socket(PF_INET, SOCK_STREAM, 0);
    name.sin_family = AF_INET;
    name.sin_port = htons(PORTNUMBER);
    name.sin_addr.s_addr = htonl(INADDR_ANY);
    len = sizeof(struct sockaddr_in);
	
	bind(s, (struct sockaddr *) &name, len);
	
	listen(s,5);
	
	ns = accept (s,(struct sockaddr *) &name,&len);
	
	 while ((n = recv(ns, buf, sizeof(buf), 0)) > 0)
    {
		write(1, buf,n);
		fflush;
        send(ns,buf,strlen(buf),0);
	}
	
	close(ns);
	close(s);
}
	