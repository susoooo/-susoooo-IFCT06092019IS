#include <stdio.h>
#include <math.h>

main()
{

//Variables

int base;
int exponente;
float resultado;

//Inicializacion

base=0;
exponente=0;
resultado=1;

//Programa

printf("Cálculo de la potencia de un número\n");
printf("Introduzca la base:\n");
scanf("%d",&base);
printf("Introduzca el exponente:\n");
scanf("%d",&exponente);
if(exponente>0)
{
	while(exponente>0)
	{
		resultado=resultado*(float)base;
		exponente--;
	}
}
else
{
	if(exponente==0)
	{
		printf("El resultado es 1");
	}
	else
	{	
		exponente=exponente*(-1);
		while (exponente>0)
		{
			resultado=resultado*(float)base;
			exponente--;	
		}	
	}
	resultado=(1/(float)resultado);
}	
printf("El resultado es %f\n",resultado);



}
