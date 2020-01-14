#include <stdio.h>

int main()
{
int contador;
int base;
int potencia;
int resultado;
contador=1;
base=0;
potencia=0;
resultado=0;


printf("Introduce un número para calcular su potencia: ");
scanf("%d", &base);
printf("Introduce la potencia: ");
scanf("%d", &potencia);
printf("%d elevado a %d es: ", base, potencia);	
resultado=base;
	while (contador<potencia)
	{
		resultado=resultado*base;
		contador++;	
	}
	printf("%d \n",resultado);
	
	
	
}
