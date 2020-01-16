#include <stdio.h>
#include <math.h>
#include <string.h>

#define NUMEROS 3

int max=0;
int min=99;

int datos()
{
    int dato;
    dato=0;
    printf("Introduzca el numero:\n");
    scanf("%d",&dato);

    return(dato);
}

int mayor(int numero)
{

    if(numero>max)
    {
        max=numero;
    }
    return(max);
}
int menor(int numero)
{

    if(numero<min)
    {
        min=numero;
    }
    return(min);
}

int main()
{
    int num[NUMEROS];
    int contador1;
    

    for(contador1=0;contador1<NUMEROS;contador1++)
    {
        num[contador1]=datos();
    }

    for(contador1=0;contador1<NUMEROS;contador1++)
    {
        max=mayor(num[contador1]);
        min=menor(num[contador1]);

    }
    printf("El numero mayor es %d y el menor es %d\n",max,min);
	
	
	
	
	return(0);
}