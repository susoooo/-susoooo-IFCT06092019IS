#include <stdio.h>
#include <math.h>
int main()
{

int mayor;
int cont1;
int cont2;
float habitantes[6][4];
char puerta[4]={'A','B','C','D'};

cont1=0;
cont2=0;
mayor=0;

printf("\n Hola soy el programa edificio diseñado para almacenar y calcular los habitantes de cada vivienda\n\n");
printf("por favor introduzca el numero de habitantes de cada vivienda\n\n");
printf("Introduzca los habitantes del:\n");

for(cont1=0;cont1<6;cont1++)	
    {
		for(cont2=0;cont2<4;cont2++)
		{
	     printf("%d piso puerta %c = ",cont1+1,puerta[cont2]);
	     scanf("%f",&habitantes[cont1][cont2]);
		 
		if (habitantes[cont1][cont2]>mayor)
			mayor=habitantes[cont1][cont2];		
		
		}
	
	}
		printf("La vivienda con mas habitantes es =%d\n\n",mayor);

}
