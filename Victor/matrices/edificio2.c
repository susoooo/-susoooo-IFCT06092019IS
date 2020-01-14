#include <stdio.h>

int main()
{
int habitantes [4][6];
int suma [6];
int sumapuertas;
int puertas;
int pisos;
int mayor;
int pisomayor;

puertas=0;
pisos=0;
mayor=0;
pisomayor=0;
sumapuertas=0;

	for (pisos=0;pisos<6;pisos++)
	{
		for(puertas=0;puertas<4;puertas++)
		{	
			printf("Introduzca el número de habitantes del %d",pisos+1);
			if(puertas==0)
			{
				printf("A: ");
			}
			else
			{
				if(puertas==1)
				{
					printf("B: ");
				}
				else
				{
					if(puertas==2)
					{
						printf("C: ");
					}
					else
					{
						if(puertas==3)
						{
							printf("D: ");
						}
					}
				}	
			}
			scanf("%d", &habitantes[puertas][pisos]);
		}
	}
	
	for(pisos=0;pisos<6;pisos++)
	{
		for(puertas=0;puertas<4;puertas++)
		{
			sumapuertas=sumapuertas+habitantes[puertas][pisos];
		}
		suma[pisos]=sumapuertas;
		printf("el piso %d tiene %d habitantes\n",pisos+1,suma[pisos]);
		sumapuertas= 0;
	}
	
	mayor=suma[0];
	for(pisos=0;pisos<6;pisos++)
	{
		if(mayor < suma[pisos])
		{
			mayor=suma[pisos];
			pisomayor=pisos;
		}	
	}
	printf("El piso con más habitantes es el %d\n", pisomayor+1);
}