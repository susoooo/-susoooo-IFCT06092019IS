/*Un proceso (raíz) que solicite un número entero N entre 3 y 21,
y con dicho número genere un arreglo de N elementos en donde el contenido
del arreglo será el número que le corresponde en el arreglo; por ejemplo, 
para N = 10, tendríamos el siguiente arreglo: 0	1 2 3 4	5 6	7 8	9
El proceso raíz deberá crear tres procesos hijos, cada uno de los cuales
tendrá acceso a una parte del arreglo (usted define qué sección del arreglo),
deberá sumar los elementos del arreglo que le corresponden (que desde 
luego son arreglos disjuntos), y enviar el resultado al proceso padre 
para que este finalmente imprima el resultado.*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
//int main(int argc,char *argv[])
//argc = numero de argumentos, argv = argumentos,
int main() 
{
//pid_t h1;
int numarray;
int contador;
int contadorarray;
int array1[21];
int hijo1;
int hijo2;
int hijo3;
int suma1;
int lonxitude;
suma1=0;
hijo1=0;
hijo2=0;
hijo3=0;
contador=0;
contadorarray=0;
lonxitude=0;
numarray =0;
printf("Bienvenido al programa Array+ para hacer Arrays \n¿De cuantos elementos quieres crear el Array, tiene que ser entre 3 y 21? = ");
scanf("%d",&numarray);
do 
  {
      for(contador=0;contador<numarray;contador++)
      {
       array1[contador]=contador;
      }
      lonxitude=numarray/3;

    hijo1 = fork();
    switch (hijo1) 
        {
    case -1:
        printf("No he podido crear el proceso hijo \n");
        break;
    case 0:
        for (numarray=0;numarray=lonxitude;numarray++)
            {
            numtotal1= 
            printf("Soy el %dº hijo, mi PID es %d y mi PPID es %d \n",contador, getpid(), getppid());
            break;
            }
    default:
        printf("Soy el padre, mi PID es %d y el resultado de la suma de los arrays es = \n", getpid(),suma);
        exit(0);
        }
        switch (hijo2) 
            {
            case -1:
            printf("No he podido crear el proceso hijo \n");
            break;
            case 0:
            for (lonxitude+1;lonxitude*2;numarray++)
            {

            }

        {
        printf("Soy el %dº hijo, mi PID es %d y mi PPID es %d \n",contador, getpid(), getppid());
        break;
    }
  }
while(numarray>2 && numarray<21);
printf("El numero introducido es erroneo tiene que ser entre 3 y 21");
return(0);
}


