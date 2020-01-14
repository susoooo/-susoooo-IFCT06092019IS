#include <stdio.h>
#include <math.h>

main()
{

//Variables

int numero1;
int numero2;
int i;
int divisor1;
int divisor2;
int p_divisor;


//Inicializacion

numero1=0;
numero2=0;
i=0;
divisor1=0;
divisor2=0;
p_divisor=0;


//Programa

printf("Cálculo del máximo comun divisor\n");
printf("Introduzca el primer numero:\n");
scanf("%d",&numero1);
printf("Introduzca el segundo numero:\n");
scanf("%d",&numero2);

	if (numero1==numero2)
	{
		printf("El MCD es %d\n",numero1);
	}
	
	else
	{
		if (numero1>numero2)
		{
			for(i=numero2;i>0;i--)
			{
				divisor1=numero1%i;
				divisor2=numero2%i;
				if(divisor1==divisor2)
				{
					if(i>p_divisor)
					{
						p_divisor=i;
					}
				}	
			}
			 printf("El MCD es %d\n",p_divisor);
		}
		else
		{
			for(i=numero1;i>0;i--)
			{
				divisor1=numero1%i;
				divisor2=numero2%i;
				if(divisor1==divisor2)
				{
					if(i>p_divisor)
					{
						p_divisor=i;
					}
				}	
			}
			 printf("El MCD es %d\n",p_divisor);
		}

	}	

}
