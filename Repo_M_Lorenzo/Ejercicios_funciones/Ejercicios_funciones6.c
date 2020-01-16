#include <stdio.h>
#include <math.h>
#include <string.h>

long resultado=1;

long facto(int num)
{
    resultado=resultado*num;
    num--;

    if(num>0)
    {
        facto(num);
    }

    return(resultado);
}
int main()
{
	int numero;
    long factorial;

    numero=0;
    factorial=0;

    printf("Introduzca un numero positivo:\n");
    scanf("%d",&numero);

    factorial=facto(numero);

    printf("El factorial de %d es %ld\n",numero,factorial);	
	
	
	return(0);
}