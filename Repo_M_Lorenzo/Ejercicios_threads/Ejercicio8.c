#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <math.h>

struct margen
{
    int m_inf;
    int m_sup;
};
 int *array;
 int suma;
 

void *relleno(void *elementos)
{
    struct margen marg=*((struct margen*)elementos);
    int i;
    
    for(i=(int)marg.m_inf;i<=(int)marg.m_sup;i++)
    {
        
        array[i]=rand()%10;
    }

    pthread_exit(array);

}

void *sumar(void *elementos)
{
    struct margen mrg=*((struct margen*)elementos);
    int i;
   
    for(i=(int)mrg.m_inf;i<=(int)mrg.m_sup;i++)
    {
        suma=suma+array[i];
        
    }

    pthread_exit(&suma);

}


int main()
{
    int num_elementos; 
    int i;
    
    struct margen *m_relleno;
    struct margen *m_reparto;
    
    printf("Introduzca el numero de elementos del array:\n");
    scanf("%d",&num_elementos);

    pthread_t *thread_relleno;
    pthread_t *thread_suma;

    thread_relleno=(pthread_t*)malloc(sizeof(pthread_t)*2);
    thread_suma=(pthread_t*)malloc(sizeof(pthread_t)*10);
    array=(int*)malloc(sizeof(int)*num_elementos);
    m_relleno=(struct margen*)malloc(sizeof(struct margen)*2);
    m_reparto=(struct margen*)malloc(sizeof(struct margen)*10);

    suma=0;   

    (m_relleno[0].m_inf)=0;
    (m_relleno[0].m_sup)=(num_elementos/2)-1;
    (m_relleno[1].m_inf)=(num_elementos/2);
    (m_relleno[1].m_sup)=(num_elementos-1);
   

    for(i=0;i<2;i++)
    {
        pthread_create(&thread_relleno[i],NULL,relleno,(void*)&m_relleno[i]);
        
    }

    for(i=0;i<2;i++)
    {
        pthread_join(thread_relleno[i],NULL);
        
    }

    
    for(i=0;i<10;i++)
    {
        m_reparto[i].m_inf=((num_elementos/10)*i);
        m_reparto[i].m_sup=(((i*(num_elementos/10))-1)+(num_elementos/10));
    }

        for(i=0;i<10;i++)
    {
        pthread_create(&thread_suma[i],NULL,sumar,(void*)&m_reparto[i]);
        
    }

    for(i=0;i<10;i++)
    {
        pthread_join(thread_suma[i],NULL);
        
    }

    printf("\n\tEl resultado de la suma es: %d",suma);
    
    free(m_relleno);
    free(m_reparto);
    free(array);
    free(thread_relleno);
    free(thread_suma);
    
    return(0);
}
