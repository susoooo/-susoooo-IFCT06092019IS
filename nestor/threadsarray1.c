/*Dado un array de 100 enteros, tras inicializarlo con valores
aleatorios crea dos threas que simultaneamente lo recorran, 
uno de ellos de principio a fin y otro de ellos de fin a 
principio. Conforme lo van recorriendo, los threads deberán 
imprimir quienes son (su ID) el número del elemento en el que 
están y el valor que tiene ese elemento. Utiliza una variable 
global para el array y otras dos variables globales para cada 
uno de los manejadores de los threads.
...
ID:1232 Pos:12 Val:6
ID:1432 Pos:84 Val:23
ID:1232 Pos:13 Val:43
ID:1432 Pos:83 Val:2
ID:1232 Pos:14 Val:18
ID:1432 Pos:82 Val:36*/

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void * funcionarray1(void * parametro);
void * funcionarray2(void * parametro);

int arraynumeros[100];
contador  =0;
contador1 =0;
contador2 =0;  
pthread_t threadarray1;
pthread_t threadarray2;
 
int main()
  {

  int contador;
  int contador1;
  int contador2;
  int numeroaleatorio;

  for (contador=0;contador<100;contador++)
    {
        arraynumeros[contador] = rand() % 101;
    }

  printf("Bienvenido al programa thread array creado parra recorrer un array de 100 enteros con dos threads y imprimir informacion sobre ellos");

    pthread_create(&threadarray1,NULL,funcionarray1,NULL);
    pthread_create(&threadarray2,NULL,funcionarray2,NULL);
    pthread_join(threadarray1,NULL);
    pthread_join(threadarray2,NULL);
   
    return(0);
  }

void * funcionarray1(void * parametro)
    {
    for (contador1=0;contador1<=99;contador1++)
        {
        printf("ID:%ld POSICION:%d VALOR:%d\n", threadarray1,contador1,arraynumeros[contador1]);
        fflush(stdout);
        }
    }
void * funcionarray2(void * parametro)
    {
    for (contador2=99;contador2>=0;contador2--)
        {
        printf("ID:%ld POSICION:%d VALOR:%d\n", threadarray2,contador2,arraynumeros[contador2]);
        fflush(stdout);
        }  
    }
    