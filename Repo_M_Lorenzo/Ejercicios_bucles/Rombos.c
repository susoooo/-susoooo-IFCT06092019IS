#include <stdio.h>
#include <math.h>

main()
{

//Variables

int ancho;
int alto;
int i;
int j;
int k;
int h;

//Inicializacion

ancho=0;
alto=0;
i=0;
j=0;


//Programa

printf("ROMBOS\n");
printf("Introduzca el ancho:\n");
scanf("%d",&ancho);
printf("Introduzca el alto:\n");
scanf("%d",&alto);

	for(i=0;i<=alto;i++)
	{
	for(k=alto;k>i;k--)
		{
   		printf(" ");
		}
   	for(j=0;j<i;j++)
		{
   		printf(" *");
		}
  	printf("\n");
 	}

	for(i=alto;i>=0;i--)
	{
	for(k=i;k<alto;k++)
		{
   		printf(" ");
		}
   	for(j=0;j<i;j++)
		{
		printf(" *");
		}
  	printf("\n");
 	}
}
		
