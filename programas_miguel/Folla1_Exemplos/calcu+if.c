#include <stdio.h>
#include <math.h>

main()

{
printf("Ola, son o programa CALC+ programado por Miguel Díaz para executar operacións matemáticas\n");

int opcion;
int numero1;
int numero2;
int suma;
int resta;
int multiplica;
double division;


suma=0;
resta=0;
multiplica=0;
division=0;
opcion=0;


printf("Escolle 1 para realizar unha suma\n");
printf("Escolle 2 para realizar unha resta\n");
printf("Escolle 3 para realizar unha multiplicación\n");
printf("Escolle 4 para realizar unha división\n");
scanf("%d",&opcion);

if (opcion<1 || opcion>4)
{
printf("Cometiches un erro ó introducir o número\n\n");
}
else 
{


printf("Introduce o primeiro número: ");
scanf("%d",&numero1);
printf("Introduce o segundo número: ");
scanf("%d",&numero2);

suma=numero1+numero2;
resta=numero1-numero2;
multiplica=numero1*numero2;
division=numero1/numero2;


if (opcion==1)
{
printf("O resultado da suma é = %d\n\n",suma);
}
else 
	{
	if (opcion==2)
	{
	printf("O resultado da resta é = %d\n\n",resta);
	}
	else
	{
		if (opcion==3)
		{
		printf("O resultado da multiplicación é = %d\n\n",multiplica);
		}
		else
			{if (opcion==4)
			{
			printf("O resultado da división é = %f\n\n",division);
			}
			else
			{
			printf("Cometiches un erro ó introducir o número\n\n"); 				}
		}
	}
}
}
printf("Grazas por utilizar Calcu+\n");


}

