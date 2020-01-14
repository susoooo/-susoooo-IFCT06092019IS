#include <stdio.h>

int main()
{
int contador;
int numero;
int numero2;
contador=1;
numero=0;
numero2=0;

printf("Vamos a calcular el máximo común divisor entre dos números:\n");
printf("Introduce el primer número: ");
scanf("%d",&numero);
printf("Introduce el segundo número: ");
scanf("%d",&numero2);
printf("El máximo común divisor de %d y %d es: ", numero, numero2);

contador=numero;
	while (contador<=numero && contador>=1)
	{
		if(numero%contador==0 && numero2%contador==0)
		{
			printf(" %d ",contador);
			contador=0;
		}
		else
		{
			contador--;
		}
	}

printf("\n");			
}
