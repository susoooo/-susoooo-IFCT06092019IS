#include <stdio.h>
#include <math.h>

main()
{

//VARIABLES

int numero1;
int numero2;
int numero3;
int resto1;
int resto2;
int resto3;

//INICIALIZACION

numero1=0;
numero2=0;
numero3=0;
resto1=0;
resto2=0;
resto3=0;

//PROGRAMA

printf("NÚMERO PAR O IMPAR\n");
printf("Introduzca el primer número\n");
scanf("%d",&numero1);
printf("Introduzca el segundo número\n");
scanf("%d",&numero2);
printf("Introduzca el tercer número\n");
scanf("%d",&numero3);

resto1=numero1%2;
resto2=numero2%2;
resto3=numero3%2;

	if(resto1==1)
	{
	printf("El primer número es impar\n");
	}	
	else
	{
	printf("El primer número es par\n");
	}	
	
	if(resto2==1)
	{
	printf("El segundo número es impar\n");
	}	
	else
	{
	printf("El segundo número es par\n");
	}	

	if(resto3==1)
	{
	printf("El tercer número es impar\n");
	}	
	else
	{
	printf("El tercer número es par\n");
	}	



}
