#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

pthread_t thread1, thmain;
pthread_attr_t attr;

struct datos{
    int dato1;
    int dato2;
};

void *multiplicar (void *arg)
{
    int a,b;
    struct datos *p= (struct datos*)(arg);
    pthread_t tid = pthread_self();
    a=(p->dato1);
    b=(p->dato2);
    printf("Soy el thread %ld y voy a multiplicar \n",tid);
    printf("La multiplicación es %d\n",a*b);
    printf("Soy el thread %ld y he terminado de multiplicar \n",tid);
    pthread_exit (NULL);
}
int main(int argc, char* argv[])
{
    struct datos *param;

    param=(struct datos*)malloc(sizeof(struct datos));

    param->dato1=atoi(argv[2]);
    param->dato2=atoi(argv[3]);
    
    thmain = pthread_self();

    pthread_attr_init (&attr);
    printf("Soy la función main y voy a lanzar el thread \n");
    pthread_create (&thmain,NULL,multiplicar,(void*)param);
    printf("Soy main: he lanzado el thread y termino\n");
    pthread_join(thmain,NULL);
    pthread_exit (NULL);

    free(param);

}