#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <math.h>



void *factor(void* num)
{
    int n;
    int i;
    long producto;
    n=num;

    producto = 1;
    for (i = n; i > 1; i--) 
    {
        producto=producto*i;
    }

    pthread_exit(&producto);
 
    
}

int datos()
{
    int dato;
    dato=0;
    printf("Introduzca el numero para calcular el factorial:\n");
    scanf("%d",&dato);

    return(dato);
}

int Nthreads()
{
    int dato;
    dato=0;
    printf("Introduzca el numero de threads para calcular el factorial:\n");
    scanf("%d",&dato);

    return(dato);
}

int main()
{
    int numero;
    int num_threads;
    int i;
    int *reparto;
    long *facto_parcial;
    long factorial;
    numero=datos();
    num_threads=Nthreads();
    pthread_t *thread;
    thread=(pthread_t*)malloc((sizeof(pthread_t))*(num_threads));
    facto_parcial=(long*)malloc((sizeof(long))*(num_threads));
    reparto=(int*)malloc((sizeof(int))*(num_threads));

    reparto[num_threads-1]=numero;
    for(i=0;i<num_threads-1;i++)
    {
        reparto[i]=numero/num_threads;
        reparto[num_threads-1]=reparto[num_threads-1]-reparto[i];
    }

    for(i=0;i<num_threads;i++) 
    {
        pthread_create(&thread[i],NULL,factor,(void*)reparto[i]);
    }
    for(i=0;i<num_threads;i++) 
    {
        pthread_join(thread[i],(void*)facto_parcial[i]);
    }
    factorial=1;
    for(i=0;i<num_threads;i++)
    {
        factorial=factorial*facto_parcial[i];
    }

    printf("El resultado es: %d\n",factorial);

    
    free(reparto);
    free(thread);
    free(facto_parcial);
    
    return(0);
}