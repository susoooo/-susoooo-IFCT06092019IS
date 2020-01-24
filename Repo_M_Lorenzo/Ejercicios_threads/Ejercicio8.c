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



void *relleno(void *elementos)
{
    struct margen marg=*((struct margen*)elementos);
    int i;

    printf("%d",marg.m_inf);
    //printf("%d",marg.m_sup);
    printf("proba");
    fflush(stdout);
    
    for(i=marg.m_inf;i<=marg.m_sup;i++)
    {
        
        array[i]=rand()%11;
    }

}


int main()
{
    int num_elementos; 
    int i;
    int *array;

    struct margen *m_relleno[2];

    printf("Introduzca el numero de elementos del array:\n");
    scanf("%d",&num_elementos);  

    pthread_t *thread_relleno;
    pthread_t *thread_suma;

    thread_relleno=(pthread_t*)malloc(sizeof(pthread_t)*2);
    thread_suma=(pthread_t*)malloc(sizeof(pthread_t)*10);
    array=(int*)malloc(sizeof(int)*num_elementos);
    //m_relleno=(struct margen*)malloc(sizeof(struct margen)*2);

    (m_relleno[0]->m_inf)=0;
    (m_relleno[0]->m_sup)=(num_elementos/2)-1;
    (m_relleno[1]->m_inf)=(num_elementos/2);
    (m_relleno[1]->m_sup)=(num_elementos-1);
  
     

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
        printf("%d",array[i]);
    }
    
    free(array);
    free(thread_relleno);
    free(thread_suma);
    
    return(0);
}
