/*Realizar un programa que cree un thread que suma los valores que se le pasan como parámetro en
un array de 10 enteros y cuando termina devuelve el valor calculado.*/

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void *fsuma(void *rango); //Cando a función vai declarada despois do main necesitamos pasarlla antes do main

int main()
{
//pthread_attr_t attr; É un atributo do thread, non o necesitamos neste caso
pthread_t thread;
int rango[]={1,2,3,4,5,6,7,8,9,10};
int *resultado;
//pthread_attr_init(&attr); É un atributo do thread, non o necesitamos neste caso
pthread_create(&thread , NULL , fsuma , (void *)rango); // (void *) vai entre parénteses para forzarlle o tipo
pthread_join(thread,(void *)&resultado);
printf("\nSuma en Prog. Principal: %d\n",*resultado);
return(0);
}

void *fsuma(void *rango) 
{
int contador;
int *valores;
int *suma;
valores= (int *)rango;
suma=(int *)malloc (sizeof (int)); //malloc: necesitámolo se non sabemos os números que nos van pasar
*suma=0;
for(contador=0;contador<10;contador++) {
*suma=*suma+valores[contador];
}
printf("\tThread Suma : %d\n",*suma);
pthread_exit((void*)suma); //neste caso non sería necesario (void *)
}

//phread_join e phread_exit están vinculados. phread_exit recolle suma e phread_join recólleo en resultado

