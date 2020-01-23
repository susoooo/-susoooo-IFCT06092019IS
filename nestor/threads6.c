/*Utilizando threads acceder a un archivo e imprimir varias veces 
por pantalla el contenido del mismo de forma simultanea. Antes de 
imprimir el contenido del archivo por pantalla, preguntar al usuario 
cuantos threads se quieren lanzar para recorrer el archivo.*/

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void *funcionprint(void *rango); // necesitamos declarar funcionsuma antes do main, e sempre usamos (void *) con threads
int main()
  {
  pthread_t threadprint;