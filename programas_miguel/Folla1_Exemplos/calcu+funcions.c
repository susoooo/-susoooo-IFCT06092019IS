#include <stdio.h>
#include <math.h>

int mensaxeBenvida()
{
	printf("Ola, son o programa CALC+ programado por Miguel Díaz para executar operacións matemáticas\n\n");
	
	return(0);
}

int suma()
{
	int numero1;
	int numero2;
	int suma;
	suma=0;
	printf("Introduce o primeiro número: ");
	scanf("%d",&numero1);
	printf("Introduce o segundo número: ");
	scanf("%d",&numero2);
	suma=numero1+numero2;
	printf("O resultado da suma é = %d\n\n",suma);
		
	return(0);
}

int resta()
{
	int resta;
	int numero1;
	int numero2;
	resta=0;
	
	printf("Introduce o primeiro número: ");
	scanf("%d",&numero1);
	printf("Introduce o segundo número: ");
	scanf("%d",&numero2);
	resta=numero1-numero2;
	printf("O resultado da resta é = %d\n\n",resta);
		
	return(0);
}

int multiplica()
{
	int numero1;
	int numero2;
	int multiplica;
	multiplica=0;
	printf("Introduce o primeiro número: ");
	scanf("%d",&numero1);
	printf("Introduce o segundo número: ");
	scanf("%d",&numero2);
	multiplica=numero1*numero2;
	printf("O resultado da multiplicación é = %d\n\n",multiplica);
			
return(0);
}

int division()
{
	int numero1;
	int numero2;
	double division;
	division=0;
	printf("Introduce o primeiro número: ");
	scanf("%d",&numero1);
	printf("Introduce o segundo número: ");
	scanf("%d",&numero2);
	division=numero1/numero2;
	printf("O resultado da división é = %f\n\n",division);
	
	return(0);
}

int erro()
{
	printf("Cometiches un erro ó introducir o número\n\n"); 
	return(0);	
}

int despedida()
{
	printf("Grazas por utilizar Calcu+\n");
	return(0);
}

int main()

{

int opcion;
opcion=0;

mensaxeBenvida();

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
		
		
		case 1: suma();
		break;
			
		case 2: resta();
		break;
			
		case 3:multiplica();
		break;
			
		case 4:division();
		break;
			
		case 0: despedida();
		break;
		
		default: erro(); 
		
	}

}

while (opcion!=0);

return(0);
}