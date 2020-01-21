/*Realizar un programa que cree un thread llamado “imprimir” que imprime 3 veces el mensaje:
“Thread says hi!”, duerme 1 segundo entre cada mensaje y luego indica que termina. El programa
padre del thread debe esperar hasta que termine el thread hijo.*/


#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

void * funcion (void *arg) 
{
int contador;
for ( contador=0 ; contador < 3 ; contador++ ) 
    {
    printf("Thread di Ola!\n");
    sleep(1);
    }
printf("Thread existe\n");
return NULL;
}

int main(int argc, char ** argv) 
{

    int resultado;
    resultado=0;
    
    pthread_t imprimir;
    printf("Lanzando novo thread . . .\n");
    resultado = pthread_create (&imprimir , NULL , funcion , NULL );
    //( TO_DO: introducir parámetros del hilo) )
     if (resultado!=0)
     {
     printf("Erro creando thread.");
     abort();
     }
    
    printf("Esperando join\n");

    //TO_DO: controlar el error con el JOIN
    pthread_join(imprimir,NULL);
    
    exit(0);
}
