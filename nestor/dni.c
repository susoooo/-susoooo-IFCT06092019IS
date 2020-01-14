#include <stdio.h>
#include <math.h>
int main()
{
int contador;
int numero_de_dni[8];
contador=0;
printf("por favor introduce tu numero de D N I\n");
for(contador=0;contador<8;contador++)
{
scanf("%d",&numero_de_dni[contador]);
}


printf("tu numero de DNI es = ");

for(contador=0;contador<8;contador++)
{
	printf("%d\n",numero_de_dni[contador]);
}

printf("Gracias por usar el programa DNI\n\n");
}