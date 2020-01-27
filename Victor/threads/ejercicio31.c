#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

int array[100];
pthread_t th1;
pthread_t th2;

void *recorre(void *arg)
{
    int contador;
    int *control;
    contador=0;
    control=(int*)arg;


    if(*control==1)
    {
        for (contador=0;contador<100;contador++)
        {
            printf("ID: %ld Pos: %d Val: %d\n", th1,contador,array[contador]);
        }
    }
    else
    {
         for (contador=99;contador>=0;contador--)
        {
            printf("ID: %ld Pos: %d Val: %d\n", th2,contador,array[contador]);
        }
    }

}

int main()
{
    int contador;
    int derecho;
    int reves;

    contador=0;
    derecho=1;
    reves=0;

    for (contador=0;contador<100;contador++)
    {
        array[contador]=rand()%100;
    }
    pthread_create(&th1, NULL, recorre, (void *) &derecho);
    pthread_create(&th2, NULL, recorre, (void *) &reves);
    pthread_join(th1, NULL);
    pthread_join(th2, NULL);

}
/*Para array de 100000000: más de 10 minutos
Para array de 1000000000 no compila*/
