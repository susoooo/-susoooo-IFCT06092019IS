#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define DATOS float base;float altura;base=0.0;altura=0.0;printf ("Introduzca base en cm\n");scanf ("%f",&base);printf ("Introduzca altura en cm\n");scanf ("%f",&altura);

area()
{	
	DATOS
	float area;
	area = 0.0;
	area = base * altura;
	printf ("%f",area);
	printf("\n");
	return (area);
}
perimetro()
{
	DATOS
	float perimetro;
	perimetro = 0.0;
	perimetro = 2*base + 2* altura;
	printf ("%f",perimetro);
	printf("\n");
	return (perimetro);
}
main()
{
	area();
	perimetro();
	return(0);
}