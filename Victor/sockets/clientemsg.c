#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <netdb.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <arpa/inet.h>

#define PORTNUMBER 12543

int main(void)
{
    int s, n, len;
    char buf[1024];
    char temp[1024];
    char hostname[64];
    struct hostent *hp;
    struct sockaddr_in name;

    gethostname(hostname, sizeof(hostname));
    hp = gethostbyname(hostname);
    s = socket(PF_INET, SOCK_DGRAM, 0);
    name.sin_family = AF_INET;
    name.sin_port = htons(PORTNUMBER);

    //memcpy(&name.sin_addr, hp->h_addr_list[0], hp->h_length);
    len = sizeof(struct sockaddr_in);
    inet_aton("192.168.90.208", &name.sin_addr);
    memset(buf, 0, sizeof(buf));
    while ((n = read(0, buf, sizeof(buf))) > 0)
    {
        strcpy(temp, "<Victor> ");
        strcat(temp, buf);
        sendto(s, temp, strlen(temp), 0, (struct sockaddr*) &name, len);
        n = recvfrom(s, buf, sizeof(buf), 0, (struct sockaddr *)&name, &len);
        write(1, buf, n);
        memset(buf, 0, sizeof(buf));
    }
    close(s);
}
