#include <stdio.h>
#include <math.h>

#define OPSUMA 1
#define OPRESTA 2
#define OPMULTIPLICACION 3
#define OPDIVISION 4
int bienvenida()
{
	printf ("Bienvenido a Calcu+\n");
	return(0);
}

int menu()
{
	int operacion;
	operacion=0;
	printf ("\nMenú: \n\n1.Suma\n2.Resta\n3.Multiplicación\n4.División\n0.Salir\nSelecciona una opción: ");
	scanf("%d", &operacion);
	return(operacion);
}

int suma()
{
	float suma;
	float numero1;
	float numero2;
	suma=0;
	numero1=0;
	numero2=0;
	printf ("Escribe el primer número: ");
	scanf("%f", &numero1);
	printf ("Escribe el segundo número: ");
	scanf("%f", &numero2);
	suma=numero1+numero2;
	printf ("%.2f + %.2f = ", numero1, numero2);
	return(suma);
}

int resta()
{
	float resta;
	float numero1;
	float numero2;
	resta=0;
	numero1=0;
	numero2=0;
	printf ("Escribe el primer número: ");
	scanf("%f", &numero1);
	printf ("Escribe el segundo número: ");
	scanf("%f", &numero2);
	resta=numero1-numero2;
	printf ("%.2f - %.2f = ", numero1, numero2);
	return(resta);
}

int multiplicacion()
{
	float multiplicacion;
	float numero1;
	float numero2;
	multiplicacion=0;
	numero1=0;
	numero2=0;
	printf ("Escribe el primer número: ");
	scanf("%f", &numero1);
	printf ("Escribe el segundo número: ");
	scanf("%f", &numero2);
	multiplicacion=numero1*numero2;
	printf ("%.2f x %.2f = ", numero1, numero2);
	return(multiplicacion);
}

int division()
{
	float division;
	float numero1;
	float numero2;
	division=0;
	numero1=0;
	numero2=0;
	printf ("Escribe el primer número: ");
	scanf("%f", &numero1);
	printf ("Escribe el segundo número: ");
	scanf("%f", &numero2);
	division=numero1/numero2;
	printf ("%.2f / %.2f = ", numero1, numero2);
	return(division);
}

int error()
{
	printf ("Opción incorrecta\n");
	return(0);
}

int despedida()
{
	printf ("Gracias por usar Calcu+\n");
	return(0);
}

int main()
{
	int opcion;
	float rsuma;
	opcion=0;

	bienvenida();
	do
	{
		opcion=menu();
		switch(opcion)
		{
			case OPSUMA: printf ("%d",suma());
									break;
			case OPRESTA: printf ("%d",resta());
									break;
			case OPMULTIPLICACION: printf ("%d",multiplicacion());
						break;
			case OPDIVISION: printf ("%d",division());
						break;
			case 0: break;
			default: error();
		}
	}
	while(opcion!=0);
	despedida();
	return(0);
}