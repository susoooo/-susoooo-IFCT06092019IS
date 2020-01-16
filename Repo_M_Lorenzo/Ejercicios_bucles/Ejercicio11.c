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


//Inicializacion

numero1=0;
numero2=0;
i=0;
divisor1=0;
divisor2=0;


//Programa

printf("Cálculo de los divisores comunes\n");
printf("Introduzca el primer numero:\n");
scanf("%d",&numero1);
printf("Introduzca el segundo numero:\n");
scanf("%d",&numero2);

	if (numero1=numero2)
	{
		for(i=numero1;i>0;i--)
		{			
			if(numero1%i==0)
			{
				printf("%d es comun a %d y %d\n",i,numero1,numero2);
			}
		}
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
					printf("%d es comun a %d y %d\n",i,numero1,numero2);
				}
			}
		}
		else
		{
			for(i=numero1;i>0;i--)
			{
				divisor1=numero1%i;
				divisor2=numero2%i;
				if(divisor1==divisor2)
				{
					printf("%d es comun a %d y %d\n",i,numero1,numero2);
				}
			}
		}	

	}	

}
