#include <stdio.h>
#include <math.h>
#include <string.h>

int datos()
{
    int dato;
    dato=0;
    printf("Introduzca el numero:\n");
    scanf("%d",&dato);

    return(dato);
}
int media2(int num1, int num2)
{
    int resultado;
    resultado=0;

    resultado=(num1+num2)/2;

    return(resultado);
}

int main()
{
	int numero1;
    int numero2;
    int media;

    media=0;

    numero1=datos();
    numero2=datos();

    media=media2(numero1,numero2);
	
	printf("La media de %d y %d es: %d\n",numero1,numero2,media);
	
	
	
	
	return(0);
}