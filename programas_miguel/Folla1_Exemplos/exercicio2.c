#include <stdio.h>
#include <math.h>

char main()
{

int numero1;
int numero2;
int numero3;
numero1=0;
numero2=0;
numero3=0;

printf("Benvido ó programa de comprobación de números pares e impares\n");
printf("Por favor, introduce os tres números que queres comprobar:\n");
scanf("%d",&numero1);
scanf("%d",&numero2);
scanf("%d",&numero3);


if (numero1 %2==0)
	{
        printf("\nO número %d é par",numero1);
	}
else
	{
        printf("\nO número %d é impar",numero1);
	}


if(numero2 % 2 == 0 )
	{
        printf("\nO número %d é par",numero2);
	}
else
	{
        printf( "\nO número %d é impar",numero2);
	}


if (numero3 % 2 == 0 )
	{
        printf("\nO número %d é par",numero3);
	}
else
	{
        printf( "\nO número %d é impar",numero3);
	}

printf("\n");

return(0);
}
