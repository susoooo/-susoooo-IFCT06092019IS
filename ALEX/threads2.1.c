
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>

void * thread_function(void *arg)
{
    int i;
    int contador;
    printf("Introduce numero de threats a crear\n");
    scanf("%d",&contador);
    for (i=0;i < contador;i++)
    {
        FILE * pfich;
        void *pDatos;
        int leidos;

        pfich=fopen("prueba.txt","rt");
        if(pfich==0)
        {
            perror("ERROR\n");
        }
        else
        {
            pDatos=malloc(sizeof(char));
            do
            {
                leidos=fread(pDatos,sizeof(char),1,pfich);
                printf("%s",pDatos);
            } while (!feof(pfich));
            fclose(pfich);
            free(pDatos);
        }

    }
        printf("Thread exists\n");
        return NULL;
}
int main(int argc,char **argv)
{
    pthread_t mythread;
    printf("Launching new thread . . .\n");
    if ( pthread_create(&mythread,NULL,thread_function,NULL) )
    {
        printf("error creating thread.");
        abort();
    }
    pthread_join(mythread,NULL);
    printf("Waiting on join\n");
    exit(0);
}
