#include <stdio.h>
#include <math.h>
#include <stdlib.h>

precio()
{
	float pvp;
	pvp = 0.0;
	int descuento;
	descuento = 20;
	float preciofinal;
	preciofinal = 0.0;
	float descontado;
	descontado = 0.0;
	printf ("Intrduzca PVP\n");
	scanf ("%f",&pvp);
	printf ("Intrduzca descuento\n");
	scanf ("%d",&descuento);
	
	descontado = pvp * descuento/100;
	preciofinal = pvp - descontado;
	printf ("\n,%f",preciofinal);
	return (preciofinal);
}
main()
{
	precio();
	return (0);
}
