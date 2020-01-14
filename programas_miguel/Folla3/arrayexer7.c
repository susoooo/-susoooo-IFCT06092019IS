#include <stdio.h>
#include <math.h>

int main()
{

float notas[100];
int eleccion;
int contador;
float suma;
float media;
float menor;
float maior;
int numero;


eleccion = 0;
contador=0;
suma=0.0;
media=0.0;
menor=10.0;
maior=0.0;
numero=-1;


while(numero<0||numero>100)
{
	printf("Introduce o número que desexas de alumnos:\n");
	scanf("%d", &numero);	
	printf("Seleccionaches %d alumnos. Introduce as notas a continuación:\n", numero);
	
	if(numero<0||numero>100)
	{
		printf("Introduce un número inferior a 100 e maior ou igual a 0\n");
	}
}	

for(contador=0;contador<numero;contador++)
{
 scanf("%f",&notas[contador]);
}

	
do
{
printf("\nSelecciona a opción que desexas:\n");
printf("1 Listar notas\n");
printf("2 Calcular a media\n");
printf("3 Calcular o menor\n");
printf("4 Calcular o maior\n");
printf("5 Agregar nota\n");
printf("0 Saír\n");
scanf("%d",&eleccion);


if(eleccion==1)
{
printf("\nEscolliches listar as notas:\n");
 for(contador=0;contador<numero;contador++)
 {
   printf("%f\n",notas[contador]);
 }
}
else
{
	if(eleccion==2)
	{
	printf("\nEscolliches facer a media:\n");
	for(contador=0;contador<numero;contador++)
	{
		suma=suma+notas[contador];
	}		
	media=suma/numero;
	printf("%f\n",media);
	}
	else
	{
		if(eleccion==3)
		{
			printf("\nEscolliches ver a nota menor:\n");
			for(contador=0;contador<numero;contador++)
			{
				if(menor>notas[contador])
				{
					menor=notas[contador]; 
				}
				
			}
			printf("%f\n",menor);
		}
		else
		{
			if(eleccion==4)
			{
				printf("\nEscolliches ver a nota maior:\n");
				for(contador=0;contador<numero;contador++)
				{
					if(maior<notas[contador])
					{
						maior=notas[contador];
					}
					
				}
				printf("%f\n",maior);
				
			}
			
			else
			{
				if(eleccion==5)
					{
						int notanova;
						notanova=0;
						printf("Introduce a nova nota que queres incluír:\n");
						scanf("%d",&notanova);
						notas[numero]=notanova;
						numero++;
					
				}
				else
				{
					if(eleccion==0)
					{
						printf("\nEscolliches saír\n");
					}
					else
					{
					printf("ERRO na elección\n");
					}
				}
			}
		}
	
			
	}
}

}

while (eleccion!=0);







return (0);
}