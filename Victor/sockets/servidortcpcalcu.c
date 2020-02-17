#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <errno.h>
#include <netdb.h>

#define PORTNUMBER 12543

int main(void)
{
    char buf[1024];
    int s, n, ns, len;
    int num1;
    int num2;
    int res;
    int veces;
    int contador;
    int opt;
    struct sockaddr_in name;

    veces=0;
    s = socket(PF_INET, SOCK_STREAM, 0);
    name.sin_family = AF_INET;
    name.sin_port = htons(PORTNUMBER);
    name.sin_addr.s_addr = htonl(INADDR_ANY);
    len = sizeof(struct sockaddr_in);

    bind(s, (struct sockaddr *) &name, len);

    listen(s, 5);

    ns = accept (s, (struct sockaddr *) &name, &len);

    n = recv(ns, buf, sizeof(buf), 0);
    printf("Saludo del cliente: ");
    fflush(stdout);
    write(1, buf, n);
    strcpy(buf,"Soy el servidor:\nPulsa 0 para sumar.\nPulsa 1 para calcular factorial.\nPulsa 9 para salir\n");
    send(ns, buf, strlen(buf), 0);
    do
    {
        n = recv(ns, buf, sizeof(buf), 0);
        opt = atoi(buf);
        printf("Opcion del cliente: ");
        fflush(stdout);
        write(1, buf, n);
        switch(opt)
        {
            case 0:
            strcpy(buf,"Suma. Introduce el primer número: ");
            send(ns, buf, strlen(buf), 0);

            n = recv(ns, buf, sizeof(buf), 0);

                num1 = atoi(buf);
                printf("Primer número para sumar: ");
                fflush(stdout);
                write(1, buf, n);
                strcpy(buf,"Recibido primer número. Introduzca el segundo: ");
                send(ns, buf, strlen(buf), 0);

            n = recv(ns, buf, sizeof(buf), 0);

                num2 = atoi(buf);
                printf("Segundo número para sumar: ");
                fflush(stdout);
                write(1, buf, n);
                res=num1+num2;
                sprintf(buf, "Suma: %d\n", res);
                send(ns, buf, strlen(buf), 0);

            break;
            case 1:
            strcpy(buf,"Factorial. Introduce el número: ");
            send(ns, buf, strlen(buf), 0);
            n = recv(ns, buf, sizeof(buf), 0);

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
                send(ns, buf, strlen(buf), 0);

            break;
            case 9: break;
			default:
            strcpy(buf,"No entiendo la orden\n");
            send(ns, buf, strlen(buf), 0);
        }
    }
    while(opt!=9);
    strcpy(buf,"Servidor apagado\n");
    send(ns, buf, strlen(buf), 0);
    close(ns);
    close(s);
}
