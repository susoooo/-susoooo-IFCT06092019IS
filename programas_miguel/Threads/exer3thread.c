/*Realizar un programa que declare una función multiplicar y que le pase como parámetros 2
números. A continuación el programa principal debe preparar los parámetros del thread y lanzar 1
thread con multiplicar y terminar.*/

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>



struct datos
	{
	   int dato1;
	   int dato2;      
	};

void *fmultiplicar (void *recibido)
{
int a;
int b;
struct datos *p;

a=0;
b=0;

p = (struct datos *) (recibido);

a=(p->dato1);
b=(p->dato2);

printf("Son o thread 1 e vou multiplicar \n");
printf("A multiplicación é %d\n",a*b);
printf("Son o thread 1 e acabei de multiplicar \n");

pthread_exit (NULL);
}


int main()
{

pthread_t thread1;

	struct datos recoller;
			printf("Introduce o número 1: \n");
			scanf("%d",&recoller.dato1);
			printf("Introduce o número 2: \n");
			scanf("%d",&recoller.dato2);


printf("Son a función main e vou lanzar o thread \n");
pthread_create (&thread1 , NULL , fmultiplicar , (void *)&recoller);
printf("Son main: lancei o thread e remato\n");
pthread_exit (NULL);

}
