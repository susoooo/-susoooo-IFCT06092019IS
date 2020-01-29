/*Crea un programa que calcule el factorial de un número usando threads. 
El programa pedirá el número del que se quiere calcular el factorial, 
y el número de threads que se desean utilizar para el cálculo. Creará 
tantos threads como se le indiquen y dividirá el calculo del factorial 
entre los threads indicados.*/
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

pthread_t threads;
void * funcionthread(void * total);
int forzartipo;
int contador;
int contador1;
int numero;
int total;
int numerothreads;

total =0;
numero =0;
forzartipo =0;
contador =1;
contador1 =0;

int main()
{
printf("Por favor introduce el numero para calcularle el factorial = ");
scanf("%d",&numero);
printf("Por favor introduce el numero de threads que quieres utilizar para el calculo = ");
scanf("%d",&numerothreads);


 for (contador=0;contador<numerothreads;contador++)
      {
       pthread_create(&threads,NULL,funcionthread,(void *)&total);
       pthread_join(threads,NULL);
       printf("%dº thread calculando el factorial de %d \n",contador+1,numero);
       fflush(stdout);
      }
  return(0);
}
void * funcionthread(void *total)
{     
      int forzartipo;
      int *punteiroforzartipo;
      punteiroforzartipo = (int *)total;
      forzartipo = *punteiroforzartipo;
      //printf("%d",numero);

for (contador1=numero;contador1>=1;contador1--)
      {
      forzartipo = forzartipo *contador1; 
      }
      printf("\nEl resultado del factorial indicado es: %d\n",total);
      //printf("Ha sido calculado %d veces con %d threads\n",numerothreads,numerothreads);
}