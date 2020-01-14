#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int seleccion;
seleccion = 0;
int contador;

int menu()
{
	printf("1 AÑADIR JUGADORES,2 NOMBRE JUGADORES,3 ALTURAS,4 EDADES,5 BUSCAR,6 MAS EDAD,7 MAS ALTURA,8 MENOS EDAD,9 MENOS ALTURA,10 ELIMINAR JUGADOR\n");
	scanf("%d",&seleccion);
	return(seleccion);
}
	
struct jugadores
{
	char nombre [50];
	int edad;
	float altura;
	char nombreA [50];
};

int main()
{	
	FILE * pfich;
	void * pDatos;
	pfich=fopen("equipo.txt","a+");
	pDatos=malloc(sizeof(struct jugadores));
	
	int leidos;
	int edades2;
	edades2=0;
	int edades;
	edades=999;
	float alturas;
	alturas=5.0;
	float alturas2;
	alturas2=0.0;
	struct jugadores busqueda;
	menu();
	if (seleccion==1)
	{
			printf ("INTRODUZCA NOMBRE\n");
			gets (pDatos->nombre);
			printf ("INTRODUZCA EDAD\n");
			scanf(pDatos->edad);
			printf ("INTRODUZCA ALTURA\n");
			scanf(pDatos->altura);
			getchar();
		
	}  
	fwrite(pDatos,sizeof(struct jugadores),1,pfich);
	else
	{
		if (seleccion==2)
		{
			do
			{
				leidos=fread(pDatos,sizeof(struct jugadores),1,pfich);	
				puts(pDatos.nombre);	
			}
			while(!feof(pfich));
		}
		else
		{
			if (seleccion==3)
			{
				leidos=fread(pDatos,sizeof(struct jugadores),1,pfich);	
				puts(pDatos.edad);	
			}
			else
			{
				if (seleccion==4)
				{
					leidos=fread(pDatos,sizeof(struct jugadores),1,pfich);	
					puts(pDatos.altura);	
				}
				else
				{
					if (seleccion==5)
					{
						printf("INTRODUCE JUGADOR A BUSCAR\n");
						getchar ();
						gets (busqueda.nombreA);
						
						for (contador=0;contador<n;contador++)
						{	
							if  (strcmp(array[contador].nombre,busqueda.nombreA)==0)
							{
								printf("%d\n",array[contador].edad);
								printf("%f\n",array[contador].altura);
							}
								printf ("JUGADOR NO ENCONTRADO\n");	
						}
					}
					else
					{
						if(seleccion==6)
						{
							for (contador=0;contador<n;contador++)
							{
								if(array[contador].edad < edades)
								{
									edades=array[contador].edad;
								}
							}	
								printf("%d\n",array[contador].edad);
								printf("%d\n",array[contador].nombre);
						}
						else
						{
							if(seleccion==7)
							{
								for (contador=0;contador<n;contador++)
								{
									if(array[contador].edad < alturas)
									{
										alturas=array[contador].altura;
									}
								}	
									printf("%d\n",array[contador].altura);
									printf("%d\n",array[contador].nombre);
							}
							else
							{
								if(seleccion==8)
								{
									for (contador=0;contador<n;contador++)
									{
										if(array[contador].edad > edades2)
										{
											edades=array[contador].edad;
										}
									}	
										printf("%d\n",array[contador].edad);
										printf("%d\n",array[contador].nombre);
								}
								else
								{
									if(seleccion==9)
									{
										for (contador=0;contador<n;contador++)
										{
											if(array[contador].altura < alturas2)
											{
											alturas=array[contador].altura;
											}
										}
									}										
										printf("%d\n",array[contador].altura);
										printf("%d\n",array[contador].nombre);
									else
									{
										if (seleccion==10)
										{
											printf("INTRODUCE JUGADOR A BORRAR\n");
											getchar ();
											gets (busqueda.nombreA);
											for (contador=0;contador<n;contador++)
											{	
												if  (strcmp(array[contador].nombre,busqueda.nombreA)==0)
												{
									
												}
								
								
									
									
										
							
						