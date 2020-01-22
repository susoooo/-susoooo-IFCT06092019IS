/*Realizar un programa que cree un thread llamado “imprimir” que imprime
3 veces el mensaje: “Thread says hi!”, duerme 1 segundo entre cada
mensaje y luego indica que termina.
El programa padre del thread debe esperar hasta que termine el thread hijo.*/
#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

void * function(void *arg) 
    {
    int contador;
    contador=0;
    for (contador=0;contador<300;contador++) 
        {
        printf("%dº Thread says hi!\n",contador+1);
        sleep(1);
        }
        printf("Thread exists\n");
    return NULL;
    }

int main(int argc,char **argv) 
    {
    int resultado;
    resultado=0;
    pthread_t imprimir;
    printf("Launching new thread . . .\n");
    resultado=pthread_create(&imprimir,NULL,function,NULL);// a thread sempre se crea inda que este igualada a algo, e si se creou sen problemas vai dar sempre resultado 0 enton recollemolo en resultado para facer un if que nos imprimira un erro se non e 0 polo que non se creou
    if (resultado!=0) 
        {
        printf("error creating thread.");
        abort();
        }
    printf("Waiting on join\n");
    pthread_join(imprimir,NULL);  
    exit(0); 
    }
