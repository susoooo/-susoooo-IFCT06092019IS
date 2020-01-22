/*eserva dinámica memoria
malloc
free
---------------*/
#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
int n;
int  * memoria01;
float * memoria02;
struct xogador
    {
     char nome[30];
     char apellido1[30];
     char apellido2[30];
     int edad;
     float altura;
    };   
struct xogador * pXogador;
pirntf("¿Cuantos elementos quieres en el array?");
scanf("%d",n);
int * memoria01 = (int *) malloc(sizeof(int)*n);
//memoria01 = malloc(16*n);seria lo mismo 16 es el num de bits de un int
memoria01 = realloc (memoria01,sizeof(int)*(n+20));
//al igualar memoria01 en caso de que el nuevo tamaño de realloc necesitase un nuevo puntero lo reecogeria en memoria01 y no se perderia
//memoria01=array[0]; si por error se diera un nuevo puntero a memoria1 se perderia el punetro de memoria anterior
free(memoria01);
// acontinuacion se muestra como seria si en vez de int fuese float o una struct
float * memoria02 = (float *) malloc(sizeof(float)*n);
struct xogador * pXogador = (struct xogador *) malloc(sizeof(struct xogador));
//printf("%d",sizeof(int));size of(int)me daria el numero de bits que tiene un entero
//prueba para repositorio
}
