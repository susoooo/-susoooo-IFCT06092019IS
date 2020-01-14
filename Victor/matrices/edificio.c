#include <stdio.h>

int main()
{
int habitantes [4][6];
int puertas;
int pisos;
int mayor;
int pisomayor;
int puertamayor;

puertas=0;
pisos=0;
mayor=0;
pisomayor=0;
puertamayor=0;

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
	
	mayor=habitantes[0][0];
	for(pisos=0;pisos<6;pisos++)
	{
		for(puertas=0;puertas<4;puertas++)
		{
			if(mayor < habitantes[puertas][pisos])
			{
				mayor=habitantes[puertas][pisos];
				pisomayor=pisos+1;
				puertamayor=puertas;
			}	
		}
	}

	printf("El piso con más habitantes es el %d", pisomayor);
	if(puertamayor==0)
	{
		printf("A");
	}
	else
	{
		if(puertamayor==1)
		{
			printf("B");
		}
		else
		{
			if(puertamayor==2)
			{
				printf("C");
			}
			else
			{
				if(puertamayor==3)
				{
					printf("D");
				}
			}
		}	
	}	
	printf("\n");
}