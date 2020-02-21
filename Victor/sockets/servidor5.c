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
    int contador;
    int opt;
    int s, n, len;
    struct sockaddr_in name;

    veces=0;
    s = socket(PF_INET, SOCK_DGRAM, 0);
    name.sin_family = AF_INET;
    name.sin_port = htons(PORTNUMBER);
    name.sin_addr.s_addr = htonl(INADDR_ANY);
    len = sizeof(struct sockaddr_in);

    bind(s, (struct sockaddr *) &name, len);

    n = recvfrom(s, buf, sizeof(buf), 0, (struct sockaddr *)&name, &len);
    printf("Saludo del cliente: ");
    fflush(stdout);
    write(1, buf, n);
    strcpy(buf,"Soy el servidor:\nPulsa 0 para sumar.\nPulsa 1 para calcular factorial.\nPulsa 9 para salir\n");
    sendto(s, buf, strlen(buf), 0, (struct sockaddr*) &name, len);
    do
    {
        n = recvfrom(s, buf, sizeof(buf), 0, (struct sockaddr *)&name, &len);
        opt = atoi(buf);
        printf("Opcion del cliente: ");
        fflush(stdout);
        write(1, buf, n);
        switch(opt)
        {
            case 0:
            strcpy(buf,"Suma. Introduce el primer número: ");
            sendto(s, buf, strlen(buf), 0, (struct sockaddr*) &name, len);

            n = recvfrom(s, buf, sizeof(buf), 0, (struct sockaddr *)&name, &len);

                num1 = atoi(buf);
                printf("Primer número para sumar: ");
                fflush(stdout);
                write(1, buf, n);
                strcpy(buf,"Recibido primer número. Introduzca el segundo: ");
                sendto(s, buf, strlen(buf), 0, (struct sockaddr*) &name, len);

            n = recvfrom(s, buf, sizeof(buf), 0, (struct sockaddr *)&name, &len);

                num2 = atoi(buf);
                printf("Segundo número para sumar: ");
                fflush(stdout);
                write(1, buf, n);
                res=num1+num2;
                sprintf(buf, "Suma: %d\n", res);
                sendto(s, buf, strlen(buf), 0, (struct sockaddr*) &name, len);

            break;
            case 1:
            strcpy(buf,"Factorial. Introduce el número: ");
            sendto(s, buf, strlen(buf), 0, (struct sockaddr*) &name, len);
            n = recvfrom(s, buf, sizeof(buf), 0, (struct sockaddr *)&name, &len);

                int num1 = atoi(buf);
                printf("Número para factorial: ");
                fflush(stdout);
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

            break;
            case 9: break;
			default:
            strcpy(buf,"No entiendo la orden\n");
            sendto(s, buf, strlen(buf), 0, (struct sockaddr*) &name, len);
        }
    }
    while(opt!=9);
    strcpy(buf,"Servidor apagado\n");
    sendto(s, buf, strlen(buf), 0, (struct sockaddr*) &name, len);
    close(s);
}
