#include <stdio.h>

int main()
{
int contador;
int numero;
int numero2;
contador=1;
numero=0;
numero2=0;

printf("Vamos a calcular los divisores comunes entre dos números:\n");
printf("Introduce el primer número: ");
scanf("%d",&numero);
printf("Introduce el segundo número: ");
scanf("%d",&numero2);
printf("Los divisores comunes entre %d y %d son: ", numero, numero2);

	while (contador<=numero)
	{
		if(numero%contador==0 && numero2%contador==0)
		{
			printf(" %d ",contador);
			contador++;
		}
		else
		{
			contador++;
		}
	}

printf("\n");			
}
