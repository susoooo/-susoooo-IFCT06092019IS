#include <unistd.h>
#include <stdlib.h>
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
    int s, n, len;
    int num1;
    int res;
    int contador;
    struct sockaddr_in name;

    s = socket(PF_INET, SOCK_DGRAM, 0);
    name.sin_family = AF_INET;
    name.sin_port = htons(PORTNUMBER);
    name.sin_addr.s_addr = htonl(INADDR_ANY);
    len = sizeof(struct sockaddr_in);

    bind(s, (struct sockaddr *) &name, len);

     while ((n = recvfrom(s, buf, sizeof(buf), 0, (struct sockaddr *)&name, &len)) > 0)
    {
        int num1 = atoi(buf);
        write(1, buf, n);

        contador=num1;
        res=num1;
        while (contador<=num1 && contador>1)
        {
            contador--;
            res=res*contador;
        }
        sprintf(buf, "Factorial: %d\n", res);
        sendto(s, buf, strlen(buf), 0, (struct sockaddr*) &name, len);
    }
    close(s);
}
