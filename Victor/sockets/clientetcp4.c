#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <netdb.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <errno.h>
#include <arpa/inet.h>

#define PORTNUMBER 587

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

    //memcpy(&name.sin_addr, hp->h_addr_list[0], hp->h_length);
    len = sizeof(struct sockaddr_in);
    inet_aton("85.91.64.104", &name.sin_addr);

    connect(s, (struct sockaddr *) &name, len);

    while ((n = read(0, buf, sizeof(buf))) > 0)
    {
        send(s, buf, n, 0);
        n = recv(s, buf, sizeof(buf), 0);
        write(1, buf, n);
    }
    close(s);
}
