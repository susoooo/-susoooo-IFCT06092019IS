#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

void *leer(void *arg)
{
    FILE * pfich;
    void * pDatos;
    int leidos;

    leidos=0;

    pfich=fopen("fichero.txt", "rt");
    pDatos=malloc(sizeof(char));
    do
    {
        leidos=fread(pDatos,sizeof(char),1,pfich);
        printf("%c", *(char *)pDatos);
    }
    while (!feof(pfich));

    fclose(pfich);
    free(pDatos);
    return(0);
}

int main()
{
    pthread_t th[50];
    int i;
    int num;
    do
    {
        printf("¿Cuantos threads quieres ejecutar? ");
        scanf("%d", &num);
        if(num>50 || num<1)
        {
            printf("Introduce un número entre 1 y 50\n");
        }
    }
    while (num>50 || num<1);

    for (i=0;i<num;i++)
    {
        pthread_create(&th[i], NULL, leer, NULL);
        pthread_join(th[i], NULL);
    }
}
