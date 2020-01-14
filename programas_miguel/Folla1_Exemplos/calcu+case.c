#include <stdio.h>
#include <math.h>

int main()

{
printf("Ola, son o programa CALC+ programado por Miguel Díaz para executar operacións matemáticas\n\n");

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

do 
{
	printf("Escolle 1 para realizar unha suma\n");
	printf("Escolle 2 para realizar unha resta\n");
	printf("Escolle 3 para realizar unha multiplicación\n");
	printf("Escolle 4 para realizar unha división\n");
	printf("Escolle 0 para saír de Calcu+\n");
	scanf("%d",&opcion);
	
	
	
	switch (opcion)
	{
		case 1:
			printf("Introduce o primeiro número: ");
			scanf("%d",&numero1);
			printf("Introduce o segundo número: ");
			scanf("%d",&numero2);
			suma=numero1+numero2;
			printf("O resultado da suma é = %d\n\n",suma);
			break;
			
		case 2:
			printf("Introduce o primeiro número: ");
			scanf("%d",&numero1);
			printf("Introduce o segundo número: ");
			scanf("%d",&numero2);
			resta=numero1-numero2;
			printf("O resultado da resta é = %d\n\n",resta);
			break;
			
		case 3:
			printf("Introduce o primeiro número: ");
			scanf("%d",&numero1);
			printf("Introduce o segundo número: ");
			scanf("%d",&numero2);
			multiplica=numero1*numero2;
			printf("O resultado da multiplicación é = %d\n\n",multiplica);
			break;
			
		case 4:
			printf("Introduce o primeiro número: ");
			scanf("%d",&numero1);
			printf("Introduce o segundo número: ");
			scanf("%d",&numero2);
			division=numero1/numero2;
			printf("O resultado da división é = %f\n\n",division);
			break;
			
		case 0: 
			printf("Grazas por utilizar Calcu+\n");
			break;
		
		default: 
			printf("Cometiches un erro ó introducir o número\n\n"); 
	}

}

while (opcion!=0);

return(0);
}