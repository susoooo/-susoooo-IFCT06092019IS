#include <stdio.h>
#include <math.h>
#define cambio 1.17


int bienvenida()
{
	printf("Bienvenido a  CONVERTIDOR\n");
	printf("by Alex\n");
	printf("Version 2.0\n");
	printf ("by Alex FerLO");
	return (0);
}
float convertidor()
{
	float EURO;
	EURO = 0.0;
	float DOLAR;
	printf("EURO\n");
	scanf("%f",&EURO);
	DOLAR = EURO * cambio;
	printf ("%f\n",DOLAR);
	printf("DOLAR\n");
	return (DOLAR);
}
int despedida()
{
	printf("Gracias por utilizar  CONVERTIDOR\n");
}
int main()
{	
	bienvenida ();
	while (0==0)
	{
		convertidor();
	}
	despedida();
	return (0);
}
	
	
