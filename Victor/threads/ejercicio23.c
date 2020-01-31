#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

int *memoria1;
int n;

void *calcular(void *arg)
{
    int contador;
    int *control;
    contador=0;
    control=(int*)arg;

    if(*control==0)
    {
        for (contador=(n/2)-1;contador>=0;contador--)
        {
            memoria1[contador]=rand()%300;
        }
    }
    else
    {
         for (contador=(n/2);contador<=n;contador++)
        {
            memoria1[contador]=rand()%300;
        }
    }
}

void *leer(void *arg)
{
    int *contador;
    int *resultado;
    int i;
    contador=(int*)arg;
    resultado=(int *)malloc (sizeof (int));
    *resultado=0;

    for (i=(*contador)*n;i<((*contador)*n)+n;i++)
    {
        printf("+%d", memoria1[i]);
        *resultado=(*resultado)+memoria1[i];

    }
    pthread_exit(resultado);
}

int main()
{
    pthread_t th1;
    pthread_t th2;
    pthread_t th3[10];
    int *resultado;
    int total;
    int contador;
    int control;

    total=0;

    printf("Introduzca el número de elementos: ");
    scanf("%d", &n);

    memoria1 = (int*) malloc(sizeof(int)*n);
    control=0;
    pthread_create(&th1, NULL, calcular, (void *) &control);
    pthread_join(th1, NULL);
    control=1;
    pthread_create(&th2, NULL, calcular, (void *) &control);
    pthread_join(th2, NULL);

    n=n/10;

	for (contador=0;contador<10;contador++)
    {
        pthread_create(&th3[contador], NULL, leer, (void *) &contador);
        pthread_join(th3[contador], (void *)&resultado);
        printf(" -> Resultado %d = %d \n",contador+1,*resultado);
        total=total+(*resultado);
    }
    printf("Total = %d \n",total);
	free(memoria1);
}
