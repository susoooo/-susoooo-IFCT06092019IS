#include <stdio.h>

int main()
{
int habitantes [4][6];
int suma [6];
int sumapuertas;
int puertas;
int pisos;
int mayor;
int puertamayor;

puertas=0;
pisos=0;
mayor=0;
puertamayor=0;
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
	
	for(puertas=0;puertas<4;puertas++) 
	{
		for(pisos=0;pisos<6;pisos++)
		{
			sumapuertas=sumapuertas+habitantes[puertas][pisos];
		}
		suma[puertas]=sumapuertas;
		//printf("La puerta %d tiene %d habitantes\n",puertas+1,suma[puertas]);
		sumapuertas= 0;
	}
	
	mayor=suma[0];
	for(puertas=0;puertas<4;puertas++)
	{
		if(mayor < suma[puertas])
		{
			mayor=suma[puertas];
			puertamayor=puertas;
		}	
	}
	
	printf("\nLa puerta con más habitantes es la ");
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