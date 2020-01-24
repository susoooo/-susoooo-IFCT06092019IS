#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <math.h>

void *factor(void* num);

long factorial (long n)
{
    int i;
    long producto;

    producto=1;
    i=1;
    while(i<=(int)n)
    {
        producto=producto*i;
        i=i+1;
            
    }
    
    return (producto);
}

void *factor(void* num)
{
    long n;
    long *resultado;

    resultado=(long*)malloc(sizeof(long));

    n=*((long*)num);


    *resultado=factorial(n);

    pthread_exit((void*)*resultado);
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
    long res_factorial;
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
        pthread_create(&thread[i],NULL,factor,((void*)&reparto[i]));
    }
    for(i=0;i<num_threads;i++) 
    {
        pthread_join(thread[i],(void*)&facto_parcial[i]);
        
    }


    res_factorial=1;
    for(i=0;i<num_threads;i++)
    {
        res_factorial=res_factorial*(facto_parcial[i]);
        printf("%d",facto_parcial[i]);
        fflush(stdout);
    }

    printf("El resultado es: %ld\n",res_factorial);

    
    free(reparto);
    free(thread);
    free(facto_parcial);
    
    return(0);
}