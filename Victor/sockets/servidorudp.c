//#include <Socket_Servidor.h>
//#include <Socket.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/types.h>

#define PORTNUMBER 12543

int main(void)
{
    char buf[1024];
    int s, n, len;
    struct sockaddr_in name;

    s = socket(PF_INET, SOCK_DGRAM, 0);
    name.sin_family = AF_INET;
    name.sin_port = htons(PORTNUMBER);
    name.sin_addr.s_addr = htonl(INADDR_ANY);
    len = sizeof(struct sockaddr_in);

    bind(s, (struct sockaddr *) &name, len);
   // while (1)
   // {

        while((n = recv(s, buf, sizeof(buf), 0)) > 0)
        {
            write(1, buf, n);
        }
   // }
    close(s);
}
