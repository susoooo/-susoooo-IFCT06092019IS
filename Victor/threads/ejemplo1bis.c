# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <pthread.h>

void *hola(void *arg)
{
    char *msg = "Hola";
    int i;

    for (i=0; i<strlen(msg); i++)
    {
        printf ("%c" ,msg[i]);
        fflush(stdout);
        usleep(100000);
    }
    return NULL;
}

void *mundo(void *arg)
{
    char *msg = " mundo";
    int i;
    usleep(500000);
    for (i=0; i<strlen(msg); i++)
    {
        printf ("%c" ,msg[i]);
        fflush(stdout);
        usleep(100000);
    }
    return NULL;
}

void *adios(void *arg)
{
    char *msg = " Adios";
    int i;
    usleep(1100000);
    for (i=0; i<strlen(msg); i++)
    {
        printf ("%c" ,msg[i]);
        fflush(stdout);
        usleep(100000);
    }
    return NULL;
}

int main (int argc, char *argv[])
{
    pthread_t h1;
    pthread_t h2;
    pthread_t h3;

    pthread_create(&h1, NULL, hola, NULL);
    pthread_create(&h2, NULL, mundo, NULL);
    pthread_create(&h3, NULL, adios, NULL);
    pthread_join(h1, NULL);
    pthread_join(h2, NULL);
    pthread_join(h3, NULL);
    pthread_create(&h2, NULL, mundo, NULL);
    pthread_join(h2, NULL);
    printf (" Fin\n");
}
