#include <stdio.h>

int main()
{

int contador;
int opcion;
int alumnos;
float suma;
float media;
float menor;
float mayor;
float notas [100];

contador=0;
opcion=0;
alumnos=0;
suma=0.0;
media=0.0;
menor=0.0;
mayor=0.0;

	do
	{
		printf("Introduzca el número de alumnos: ");
		scanf("%d", &alumnos);
		if(alumnos<=0 || alumnos >100)
		{
			printf("Introduzca un número entre 1 y 100\n");
		}	
	}
	while(alumnos<0 || alumnos >100);

	for (contador=0;contador<alumnos;contador++)
	{
		printf("Introduzca la nota del alumno %d: ",contador+1);
		scanf("%f", &notas[contador]);
	}

	do
	{
		printf("\n1-Notas\n2-Media\n3-Menor\n4-Mayor\n0-Salir\n");
		scanf("%d", &opcion);
		printf("\n");
		
		switch(opcion)
		{
			case 1:
				for (contador=0;contador<alumnos;contador++)
				{
				printf("%.2f ", notas[contador]);
				}
				printf("\n");
				break;
			case 2:
				for(contador=0;contador<alumnos;contador++)	
				{
					suma=suma+notas[contador];
				}
				media=suma/alumnos;
				printf("Media= %.2f\n", media);
				break;
			case 3:
						menor=notas[0];
						for(contador=0;contador<alumnos;contador++)
						{
							if(menor > notas[contador])
							{
								menor=notas[contador];
							}	
						}
						printf("La menor nota es: %.2f\n", menor);
						break;
			case 4:
						mayor=notas[0];
						for(contador=0;contador<alumnos;contador++)
						{
							if(mayor < notas[contador])
							{
								mayor=notas[contador];
							}	
						}
						printf("La mayor nota es: %.2f\n", mayor);
						break;
			case 0: break;
			default: printf("Opción no válida\n");
		}
				
	}
	while(opcion!=0);
}