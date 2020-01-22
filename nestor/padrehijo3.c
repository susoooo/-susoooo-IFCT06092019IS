/*3. Diseña un programa en C que cree la jerarquía de procesos
que se muestra en la siguiente figura, donde el número de
hijos que se crean (H1, H2,...) vendrá dado por el número
de argumentos que se introducen al programa.*/
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int main() 
{
pid_t h1;
int numhijos;
int contador;
contador=0;
numhijos =0;
printf("Bienvenido al programa Hijo+ para hacer hijos, !No guarrete no va por ahi!\n¿cuantos hijos quieres crear? = ");
scanf("%d",&numhijos);
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
}