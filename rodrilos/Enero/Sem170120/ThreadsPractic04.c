#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>
#include <sys/types.h>

#define NUMTH 10
int suma_total = 0;

void sumar()
{
    int i;
    int suma=suma_total;
    suma=suma+100;
    sleep(1);
    printf("Pthread=%d despierta \n", (int)pthread_self());
    suma_total=suma;
}

int main()
{
    pthread_t th[NUMTH];
    int i;
    for(i=0;i<NUMTH;i++)
    {
        pthread_create(TO_DO: introducir parámetros del hilo);
    }
    TO_DO: crear un bucle que haga JOIN con todos los hilos
}
printf("Suma total=%d\n",suma_total);
}
