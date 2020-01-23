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
int main(int argc,char *argv[])
//argc = numero de argumentos, argv = argumentos, 
{
pid_t h1;
int numhijos;
int contador;
contador=0;
numhijos =0;
//printf("Bienvenido al programa Hijo+ para hacer hijos, !No guarrete no va por ahi!\n¿cuantos hijos quieres crear? = ");
//scanf("%d",&numhijos);

printf("pasaronme %d parametros\n",argc);
for(numhijos=0;numhijos<argc;numhijos++)
{
  printf("o argumento %d é %s\n",numhijos,argv[numhijos]);
}
numhijos = argc-2;
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
        printf("vou executar %s",argv[contador+2]);
        fflush(stdout);
        execv(argv[contador+2],NULL);
        
        //exit(0);
        break;
        default:  
        printf("Son papa, hola %dº fillo\n",contador+1);
        }
    }
printf("!JODER QUE PILA DE PEQUENOS!\n\n");
}