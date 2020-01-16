#include <stdio.h>
#include <math.h>

main()
{

//VARIABLES

float numero;

//INICIALIZACION

numero=0;

//PROGRAMA

printf("CLASIFICADOR DE NOTAS\n");
printf("Introduzca un numero\n");
scanf("%f",&numero);

	if(numero<5)
	{	
	printf("Insuficiente\n");
	}

	if(numero>=5 && numero<6)
	{	
	printf("Suficiente\n");
	}

	if(numero>=6 && numero<7)
	{	
	printf("Bien\n");
	}

	if(numero>=7 && numero<8)
	{	
	printf("Notable\n");
	}

	if(numero>=8 && numero<9)
	{	
	printf("Sobresaliente\n");
	}

	if(numero>=9 && numero<10)
	{	
	printf("Matrícula de honor\n");
	}

}
