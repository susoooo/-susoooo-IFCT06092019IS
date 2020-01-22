#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>
#include <sys/types.h>

#define NUMTH 10

int suma_total;


void *sumar() 
{
    int i;
    int suma=0;
    suma = suma + 100;
    sleep(1);
    printf("Pthread =%d despierta \n", (int)pthread_self());
    suma_total=suma_total+suma;


       
}

int main() 
{
    pthread_t thread[NUMTH];
    int i;
    int *retorno[NUMTH];
    int total;
    retorno[NUMTH]=(int*)malloc(sizeof(int)*NUMTH);



    for (i=0;i<NUMTH;i++) 
    {
    pthread_create(&thread[i],NULL,sumar,NULL);
    }
    
    for(i=0;i<NUMTH;i++)
    {
        pthread_join(thread[i],NULL);
    }

    printf("Suma total = %d\n",suma_total);

    return(0);
}