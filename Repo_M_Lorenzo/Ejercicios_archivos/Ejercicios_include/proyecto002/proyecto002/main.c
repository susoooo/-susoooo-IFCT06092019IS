#include <stdio.h>
#include <math.h>
#include <string.h>
#include "funciones.h"

int main()
{
	int entero;
    long suma;

    entero=0;
    suma=0;

    printf("Introduzca un numero entero:\n");
    scanf("%d",&entero);

    suma=sumar(entero);

    printf("La suma de los primeros %d enteros es: %ld\n",entero,suma);



	return(0);
}
