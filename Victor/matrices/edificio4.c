#include <stdio.h>

int main()
{
int habitantes [4][6];
int suma [6];
float sumapuertas;
int puertas;
int pisos;
int mayor;
int pisomayor;
float media;

puertas=0;
pisos=0;
mayor=0;
pisomayor=0;
sumapuertas=0.0;
media=0.0;

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
		media=sumapuertas/4;
		printf("La media de habitantes del piso %d es %.2f\n",pisos+1,media);
		sumapuertas= 0.0;
	}
}