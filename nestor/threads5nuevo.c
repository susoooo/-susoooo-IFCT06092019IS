/*Realizar un programa que declare una función multiplicar y que le pase
como parámetros 2 números. A continuación el programa principal debe 
preparar los parámetros del thread y lanzar 1 thread con multiplicar, 
escribir su propiedad identidad y terminar.*/


#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>


pthread_t thread1, thmain;
pthread_attr_t attr;

int *datos;

void *multiplicar(void *argumento)
{
  int a,b;
  
  *datos = (datos *) (argumento);
  pthread_t tid = pthread_self();

  a=(datos->dato1);
  b=(datos->dato2);
  printf("Soy el thread 1 y voy a multiplicar \n");
  printf("La multiplicación es %d\n",a*b);
  printf("Soy el thread 1 y he terminado de multiplicar \n");
  pthread_exit (NULL);
}

int main(int argc,char* argv[])
{
  datos param;
  param.dato1=atoi(argv[1]);
  param.dato2=atoi(argv[2]);

  thmain = pthread_self();

  pthread_attr_init (&attr);
  printf("Soy la función main y voy a lanzar el thread \n");
  pthread_create (TO_DO: introducir parámetros del hilo);
  printf("Soy main: he lanzado el thread y termino\n");
  pthread_exit (NULL);
}