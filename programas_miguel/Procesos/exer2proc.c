/*2. Diseña un programa en C que cree la jerarquía de procesos que se muestra en la
siguiente figura, donde el número de hijos que se crean (H1, H2,...) es un valor que
se introduce como argumento al programa.*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main() 
{

int num;
int contador;
num=0;
contador=0;

pid_t num;


printf("Por favor, introduce o número de fillos que queres crear: ");
scanf("%d",num);

for (contador=0; contador<num; contador=contador+1)
{
    num = fork();
}








}