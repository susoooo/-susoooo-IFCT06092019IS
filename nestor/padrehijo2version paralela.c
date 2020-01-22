/*Diseña un programa en C que cree la jerarquía de procesos que
se muestra en la siguiente figura, donde el número de hijos
que se crean (H1, H2,...) es un valor que se introduce como
argumento al programa.*/
/*Cada uno de los procesos hijos ejecutará un programa distinto
cuyo nombre se introduce al programa como argumento y que
se supone que está almacenado en el directorio de trabajo
o en un directorio incluído en la variable $PATH. 
Como ejemplo, si la ejecución del programa se realiza de la
siguiente forma:
$ programa 4 prog1 prog2 prog3 prog4
el primero en ejecutarse será el programa prog1, después prog2,
prog3 y prog4. Las salidas de los programas no deben mezclarse.
Y el proceso padre será el último que finaliza la ejecución. 
El código de cada uno de estos programas podría ser, por ejemplo:

#include <stdlib.h>
#include <stdio.h>
#define N 15
main()
{
  int i;
  for (i=0;i<N;i++)
  {
    printf("prog1 i=%d\n",i);
  }
  exit(0);
}
El código de los restantes programas podría ser similar a este
variando el valor de N y la palabra prog1. Recuerda que las llamadas
al sistema del tipo exec permiten que un proceso ejecute un código
diferente al que estaba ejecutando hasta entonces.*/
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int main() 
{
pid_t h1;
int numhijos;
int contador;
int n1;
int n2;
int seleccion;
int suma;
int resta;
int multiplicacion;
double division;
n1=0;
n2=0;
suma=0;
resta=0;
multiplicacion=0;
division=0;
seleccion=1;
contador=0;
numhijos =0;
suma=n1+n2;
resta=n1-n2;
multiplicacion=n1*n2;
division=(float)n1/n2;
printf("Bienvenido al programa fork creado para ejecutar procesos en paralelo ¿cuantos procesos quieres crear? = ");
scanf("%d",&numhijos);
printf("\nPor favor introduce el 1º numero para realizar calculos");
scanf("%d",&n1);
printf("\nPor favor introduce el 2º numero para realizar calculos");
scanf("%d",&n2);
for(contador=0;contador<numhijos;contador++)
    {
h1 = fork();
switch (h1)
        {
        case -1:
        printf("No he podido crear el proceso hijo \n");
        break;
        case 0:
        printf("Hola papa, son o teu %dº fillo.\n",contador+1);
        exit(0);
        break;
        default:  
        printf("Son papa, hola %dº fillo\n",contador+1);
        }
    }
printf("!JODER QUE PILA DE PEQUENOS!\n\n");

printf("por favor introduzca el primer numero %d");
scanf("%d",&n1);
printf("por favor introduzca el segundo numero %d");
scanf("%d",&n2);
printf("\nLa suma de %d y %d es = %d\n",n1,n2,suma);
printf("La resta de %d y %d es = %d\n",n1,n2,resta);
printf("La multiplicación de %d y %d es = %d\n",n1,n2,multiplicacion);
printf("La división entre %d y %d es = %f6\n\n",n1,n2,division);
printf("                           GRACIAS POR USAR EL PROGRAMA CALCUPLUSPRO\n\n");
}