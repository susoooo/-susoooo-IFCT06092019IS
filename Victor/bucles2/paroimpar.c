#include <stdio.h>

int main()
{
int contador;
int inicio;
int tope;
int error;
int opcion;
int error2;
contador=0;
inicio=0;
tope=0;
error=0;
opcion=0;
error2=0;

	do
	{
		error=0;
		printf("Introduce el número inicial: ");
		scanf("%d", &inicio);
		printf("Introduce el número final: ");
		scanf("%d", &tope);
	
		if (tope>=inicio)
		{
			do
			{
				error2=0;
				printf ("Menú: \n\n1.Mostrar números pares\n2.Mostrar números impares\nSelecciona una opción: ");
				scanf("%d", &opcion);
				if(opcion==1 || opcion==2)
				{
					if (opcion==1)
					{
						printf("Los números pares son:\n");
						for (contador=inicio;contador<tope+1;contador++)
						{	
							if(contador % 2 == 0)
							{
								printf("%d\n",contador);
							}
						
						}
					}
					else
					{
						printf("Los números impares son:\n");
						for (contador=inicio;contador<tope+1;contador++)
						{	
							if(contador % 2 != 0)
							{
								printf("%d\n",contador);
							}
						
						}
					}
					
				}
					
				else
				{
					printf("ERROR: Selecciona una opción correcta\n");
					error2=1;
				}
			}
			while(error2==1);
		}
		else
		{
			printf("ERROR: El número inicial debe ser menor que el número final\n");
			error=1;
	
		}
	}
	while(error==1);
}
