#include <stdio.h>
#include <math.h>
int main()
{
int piso;
int mayor;
int cont1;
int cont2;
float habitantes[6][4];
char puerta[4]={'A','B','C','D'};


piso=0;
cont1=0;
cont2=0;
mayor=0;

printf("\n Hola soy el programa edificio diseñado para almacenar y calcular los habitantes de cada vivienda\n\n");
printf("por favor introduzca el numero de habitantes de cada vivienda\n\n");
printf("Introduzca los habitantes del:\n");

for(cont1=0;cont1<6;cont1++)	
    {
		int pisomayor;
		pisomayor=0;
		piso=0;
		habitantes[cont1][cont2]=pisomayor[cont1];
		if (pisomayor[cont1]<pisomayor[cont1++])
		{
			pisomayor=mayor;
		} 			
		for(cont2=0;cont2<4;cont2++)
		{ 
	     printf("%d piso puerta %c = ",cont1+1,puerta[cont2]);
	     scanf("%f",&habitantes[cont1][cont2]);

		}
		if (piso>=mayor)
		{
			mayor=piso;
		}
	
	}
	
		printf("La piso con mas habitantes tiene =%d\n\n",mayor);
		return(0);

}
