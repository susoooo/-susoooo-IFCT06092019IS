#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int contador;
int seleccion;
seleccion = 0;



int menu ()
{
	printf("1 NOMBRE JUGADORES,2 EDADES,3 ALTURAS,4 BUSCAR,5 OTROS DATOS\n");
	scanf("%d",&seleccion);
	return(seleccion);
}
struct jugadores
{
	char nombre [50];
	char apellido1[50];
	char apellido2[50];
	int edad;
	float altura;
	char nombreA [50];
	char apellido1A[50];
	char apellido2A[50];
};


 int main()
{	
	float alturas;
	alturas= 5.0;
	struct jugadores busqueda;
	struct jugadores array[10];
	
		for(contador=0;contador<10;contador++)
		{

			printf ("INTRODUZCA NOMBRE\n");
			gets (array[contador].nombre);
			printf ("INTRODUZCA APELLIDO1\n");
			gets (array[contador].apellido1);
			printf ("INTRODUZCA APELLIDO2\n");
			gets (array[contador].apellido2);
			printf ("INTRODUZCA EDAD\n");
			scanf("%d",&array[contador].edad);
			printf ("INTRODUZCA ALTURA\n");
			scanf("%f",&array[contador].altura);
			getchar();
		}
	do
	{
		menu();
		if (seleccion==1)
		{
			for (contador=0;contador<10;contador++)
			{
			puts(array[contador].nombre);
			puts(array[contador].apellido1);
			puts(array[contador].apellido2);
			}
		}
		else
		{
			if (seleccion==2)
			{
				for (contador=0;contador<10;contador++)
				{
				printf("%d\n",array[contador].edad);
				}
			}
			else
			{
				if (seleccion==3)
				{
					for (contador=0;contador<10;contador++)
					{
						printf("%f\n",array[contador].altura);
					}
				}
				else
				{
					if (seleccion==4)
					{
						printf("INTRODUCE JUGADOR A BUSCAR\n");
						getchar ();
						gets (busqueda.nombreA);
						gets (busqueda.apellido1A);
						gets (busqueda.apellido2A);
						for (contador=0;contador<10;contador++)
						{	
								if  (strcmp(array[contador].nombre,busqueda.nombreA)==0)
								{
									if  (strcmp(array[contador].apellido1,busqueda.apellido1A)==0)
									{
										if (strcmp(array[contador].apellido2,busqueda.apellido2A)==0)
										{
											printf("%d\n",array[contador].edad);
											printf("%f\n",array[contador].altura);
										}
									}
								}
								
								
								printf ("JUGADOR NO ENCONTRADO\n");
								
						}
						
					}
					else
					{
						if(seleccion==5)
						{
							for (contador=0;contador<10;contador++)
							{
									if(array[contador].altura < alturas)
									{
										alturas=array[contador].altura;
									}
										
							}	printf("%d\n",array[contador].edad);
								printf("%d\n",array[contador].nombre);
								printf("%d\n",array[contador].apellido1);
								printf("%d\n",array[contador].apellido2);
						}
						else
						{
							printf("OPCION NO VALIDA, ESCOJA UNA OPCION CORRECTA\n");
						}
					}
				}
			}
		}
				
				
				
		
		
	}
	while(seleccion != 0);
	return(0);
}
	
		
  


		