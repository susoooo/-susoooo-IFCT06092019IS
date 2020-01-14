#include <stdio.h>
#include <math.h>
#include <string.h>

long sumar(int num)
{
    if (num==0)
    {
        return (0);
    }
    else if(num==1)
    {
        return(1);
    }
    else
    {
        return (num+sumar(num-1));
    }
    
}

int datos()
{
    int dato;
    dato=0;
    printf("Introduzca un numero:\n");
    scanf("%d",&dato);

    return(dato);
}

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