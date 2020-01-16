#include <stdio.h>
#include <math.h>

main()
{

//VARIABLES

int numero1;
int numero2;
int resto;


//INICIALIZACION

numero1=0;
numero2=0;
resto=0;


//PROGRAMA

printf("¿MÚLTIPLO O NO?\n");
printf("Introduzca el primer número\n");
scanf("%d",&numero1);
printf("Introduzca el segundo número\n");
scanf("%d",&numero2);

	if(numero1>numero2)
	{		
	resto=numero1%numero2;
		if (resto==0)
		{	
		printf("%d ES múltiplo de %d\n", numero1,numero2);
		}	
		else
		{
		printf("%d NO ES múltiplo de %d\n", numero1,numero2);
		}
	}
	else
	{
	resto=numero2%numero1;
		if (resto==0)
		{	
		printf("%d ES múltiplo de %d\n", numero2,numero1);
		}	
		else
		{
		printf("%d NO ES múltiplo de %d\n", numero2,numero1);
		}
	}

}	
		
