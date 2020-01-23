/*Realizar un programa que cree un thread que suma los valores que se le 
pasan como parámetro en un array de 10 enteros y cuando termina devuelve 
el valor calculado.*/

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void *funcionsuma(void *rango); // necesitamos declarar funcionsuma antes do main, e sempre usamos (void *) con threads
int main()
  {
  //pthread_attr_t attr;
  pthread_t thread;
  int rango[]={1,2,3,4,5,6,7,8,9,10};
  int *resultado;
    //pthread_attr_init(&attr);
    pthread_create(&thread,NULL,funcionsuma,(void *)rango);
    pthread_join(thread,(void *)&resultado);//se carga en resultado sumatotal
    printf("\nSuma  en Prog. Principal: %d\n",*resultado);
    return(0);
  }

void *funcionsuma(void *rango) 
  {
   int contador; 
   int *valores; 
   int *sumatotal;

   valores= (int *)rango;
   sumatotal=(int *)malloc(sizeof(int));//en este caso no seria necesario ya que suma solo tiene un valor que se va modificando maloc se usa cuando no sabemos cuntos numeros contiene el array
   *sumatotal=0;
   for(contador=0;contador<10;contador++) 
     {   
     *sumatotal=*sumatotal+valores[contador];
     }
   printf("\tThread Suma : %d\n",*sumatotal);
   pthread_exit(sumatotal);
  }
  //pthread_join ey phread_exit estan vinculados y le pasamos el puntero de suma total que lo cargara en (void *)&resultado