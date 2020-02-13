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
    int num1;
    int num2;
    int res;
    int veces;
    int s, n, len;
    struct sockaddr_in name;

    veces=0;
    s = socket(PF_INET, SOCK_DGRAM, 0);
    name.sin_family = AF_INET;
    name.sin_port = htons(PORTNUMBER);
    name.sin_addr.s_addr = htonl(INADDR_ANY);
    len = sizeof(struct sockaddr_in);

    bind(s, (struct sockaddr *) &name, len);

     while ((n = recvfrom(s, buf, sizeof(buf), 0, (struct sockaddr *)&name, &len)) > 0)
    {
        veces++;
        if (veces==1)
        {
            num1 = atoi(buf);
            write(1, buf, n);
            strcpy(buf,"Recibido primer número. Introduzca el segundo: ");
            sendto(s, buf, strlen(buf), 0, (struct sockaddr*) &name, len);
            printf("%d",veces);
        }
        else
        {
            if (veces==2)
            {
                num2 = atoi(buf);
                write(1, buf, n);
                res=num1+num2;
                sprintf(buf, "Suma: %d\n", res);
                sendto(s, buf, strlen(buf), 0, (struct sockaddr*) &name, len);
                veces=0;
            }
        }

    }
    close(s);
}
