#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void* leer();
FILE*fichero;

int main() 
{
    char *pRuta;
    int num_threads;
    int i;
    pRuta=malloc(sizeof(char)*1024);
    printf("Introduzca la ruta del archivo\n");
    scanf("%s",pRuta);
    pthread_t *thread;


//TO_DO: controlar el error en la aperture del fichero
    fichero=fopen(pRuta,"rt");
    if(fichero==0)
    {
        perror("Ha habido un error\n");
    }

    printf("Introduzca el numero de threads para recorrer el archivo\n");
    scanf("%d",&num_threads);

    thread=(pthread_t*)malloc((sizeof(pthread_t))*num_threads);


    for(i=0;i<num_threads;i++) 
    {
        pthread_create(&thread[i],NULL,leer,NULL);
    }
    for(i=0;i<num_threads;i++) 
    {
        pthread_join(thread[i],NULL);
    }
    free(pRuta);
    free(thread);
    fclose(fichero);
    return(0);
}
void* leer()
{
    void*pDatos;
    pDatos=malloc(sizeof(char));
    do
    {     
        fread(pDatos,sizeof(char),1,fichero);
        printf("%s",(char*)pDatos);
    } while (!feof(fichero));
    rewind(fichero);
    free(pDatos);
}