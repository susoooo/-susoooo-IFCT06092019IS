#include <stdio.h>
#include <math.h>
int main()
{

int numnotas;
float notas[100];
int eleccion;
float suma;
float media;
float menor;
float mayor;
int contador;


numnotas=0;
eleccion=0;
suma=0.0;
media=0.0;
menor=10.0;
mayor=0.0;
contador=0;
printf("\n Indique la cantidad de notas sobre las que quiere realizar operacines basicas, como maximo  100 \n");
scanf("%d",&numnotas);
if (numnotas >100&&numnotas<0)
{
printf("cantidad de notas erronea no puede ser mayor de 100\n");	
}
	printf("por favor introduce las notas 1 por 1 hasta %d\n",numnotas);
	for(contador=0;contador<numnotas;contador++)

    {
    scanf("%f",&notas[contador]);
    }
            do
				{
printf("\n1 Notas\n");
printf("2 Media\n");
printf("3 Menor\n");
printf("4 Mayor\n");
printf("0 Salir\n");
scanf("%d",&eleccion);

  if(eleccion==1)
    {
	for(contador=0;contador<numnotas;contador++)
        {
        printf("%f\n",notas[contador]);
        }
    }
    else 
            {
            if (eleccion==2)
            {
 //calculamos media
     for(contador=0;contador<numnotas;contador++)
	    {
          suma=suma+notas[contador];
		}
media = suma/numnotas;
printf("%f\n\n",media);
            }
else
		{
		if(eleccion==3)
		{
//Calculamos el menor

for(contador=0;contador<numnotas;contador++)
	{
	 if(menor>notas[contador])
       {
        menor=notas[contador]; 
               
		printf("%f\n\n",menor); 
		}
	}
		}
else
	{
	if(eleccion==4)
	  {
//calculamos el mayor
for(contador=0;contador<numnotas;contador++)
	{
if(mayor<notas[contador])
{
mayor=notas[contador]; 
} 
     }  
printf("%f\n\n",mayor);
	
     }
else
	{
		if (eleccion!=0)
		{
printf("Opcion no valida\n\n");
		}
	}
	}
		}
			}
				}
				
			    while(eleccion!=0);
				
	return (0);		
}