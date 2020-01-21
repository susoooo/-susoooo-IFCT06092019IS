#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void *suma(void *rango);

int *sumas;



int main()
{
    pthread_attr_t attr;
    pthread_t thread;

    int rango[]={1,2,3,4,5,6,7,8,9,10};
    int *resultado;
    sumas=(int *)malloc(sizeof(int));

    pthread_attr_init(&attr);

    pthread_create(&thread,NULL,suma,(void*)rango);
    pthread_join(thread,NULL);

    printf("\nSuma en Prog. Principal: %d\n",*sumas);

    free(sumas);
    return(0);
}

void *suma(void *rango) 
{
    int i=0, *valores;
    //int *sumas;
    valores=(int*)rango;

    //sumas=(int *)malloc(sizeof(int)); debe estar no main para que dure todo o programa

    *sumas=0;
    for(i=0;i<10;i++) 
    {
        *sumas=*sumas+valores[i];
    }
    
    printf("\tThread Suma : %d\n",*sumas);

    pthread_exit(sumas);

    
}