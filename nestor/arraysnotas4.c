#include <stdio.h>
#include <math.h>
 main()
{

int numnotas;
float notas[numnotas];
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
//printf("indique el cantidad de notas sobre las que quiere realizar operacines basicas");
//scanf("%d"&numnotas)
printf("por favor introduce las notas 1 por 1 hasta %d\n", numnotas);
for(contador=0;contador<numnotas;contador++)

    {
    scanf("%.2f",&notas[contador]);
    }
            do
				{
printf("1 Notas\n");
printf("2 Media\n");
printf("3 Menor\n");
printf("4 Mayor\n");
printf("0 Salir\n");
scanf("%d",&eleccion);

  if(eleccion==1)
    {
	for(contador=0;contador<numnotas;contador++)
        {
        printf("%f.2",notas[contador]);
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
media = suma/4;
printf("%.2f",media);
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
               
		printf("%f.2",menor); 
		}
	}
		}
else
	{
	if(eleccion==4)
	  {
	// codigo de maior
for(contador=0;contador<numnotas;contador++)
	{
if(mayor<notas[contador])
{
mayor=notas[contador]; 
} 
     }  
printf("%f.2",mayor);
	
     }
else
	{
printf("Opcion no valida\n");
	}
	}
		}
			}
				}
			while(eleccion!=0)
				
	   }