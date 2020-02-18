#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <netdb.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <errno.h>
#include <arpa/inet.h>

#define PORTNUMBER 80

int main(void)
{
    int s, n, len;
    int conta;
    char buf[100024];
    char *temp;
    char *temp2;
    char hostname[64];
    struct hostent *hp;
    struct sockaddr_in name;

    conta=0;
    gethostname(hostname, sizeof(hostname));
    hp = gethostbyname(hostname);
    s = socket(PF_INET, SOCK_STREAM, 0);
    name.sin_family = AF_INET;
    name.sin_port = htons(PORTNUMBER);

    //memcpy(&name.sin_addr, hp->h_addr_list[0], hp->h_length);
    len = sizeof(struct sockaddr_in);
    inet_aton("216.58.201.163", &name.sin_addr);

    connect(s, (struct sockaddr *) &name, len);

    while ((n = read(0, buf, sizeof(buf))) > 0)
    {
        send(s, buf, n, 0);
        n = recv(s, buf, sizeof(buf), 0);
        write(1, buf, n);
        printf("\n\n\n%d\n\n\n",n);
        fflush(stdout);
        temp=strstr(buf, "http");
        while(temp!=NULL)
        {
            conta++;
            printf("***********");
            fflush(stdout);
            temp2=strstr(temp, "http");
            temp=temp2;
            if(temp2!=NULL)
            {
               temp++;
               //printf("%s",temp2);
            }
        }
        printf("%d",conta);
        fflush(stdout);
    }
    close(s);
}
