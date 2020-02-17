#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <netdb.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <errno.h>

#define PORTNUMBER 12543

int main(void)
{
    int s, n, len;
    char buf[1024];
    char hostname[64];
    struct hostent *hp;
    struct sockaddr_in name;

    gethostname(hostname, sizeof(hostname));
    hp = gethostbyname(hostname);
    s = socket(PF_INET, SOCK_STREAM, 0);
    name.sin_family = AF_INET;
    name.sin_port = htons(PORTNUMBER);

    memcpy(&name.sin_addr, hp->h_addr_list[0], hp->h_length);
    len = sizeof(struct sockaddr_in);

    connect(s, (struct sockaddr *) &name, len);

    printf("Cliente, envía cualquier mensaje al servidor para ver sus opciones:\n");

    while ((n = read(0, buf, sizeof(buf))) > 0)
    {
        send(s, buf, n, 0);
        n = recv(s, buf, sizeof(buf), 0);
        write(1, buf, n);
    }
    close(s);
}
