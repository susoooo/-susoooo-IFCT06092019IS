#include <stdio.h>
#include <math.h>

int main()
{

float notas[10];
int eleccion;
int contador;
float suma;
float media;
float menor;
float maior;

eleccion = 0;
contador=0;
suma=0.0;
media=0.0;
menor=10.0;
maior=0.0;

for(contador=0;contador<10;contador++)
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
printf("0 Saír\n");
scanf("%d",&eleccion);



if(eleccion==1)
{
printf("\nEscolliches listar as notas:\n");
 for(contador=0;contador<10;contador++)
 {
   printf("%f\n",notas[contador]);
 }
}
else
{
	if(eleccion==2)
	{
	printf("\nEscolliches facer a media:\n");
	for(contador=0;contador<10;contador++)
	{
		suma=suma+notas[contador];
	}		
	media=suma/10;
	printf("%f\n",media);
	}
	else
	{
		if(eleccion==3)
		{
			printf("\nEscolliches ver a nota menor:\n");
			for(contador=0;contador<10;contador++)
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
				for(contador=0;contador<10;contador++)
				{
					if(maior<notas[contador])
					{
						maior=notas[contador];
					}
					
				}
				printf("%f\n",maior);
			}
			else
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

while (eleccion!=0);
	
return 0;
}