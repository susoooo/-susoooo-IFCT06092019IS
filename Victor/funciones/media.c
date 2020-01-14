#include <stdio.h>
#include <math.h>

float media2(float parametro1,float parametro2)
{
	float resultado;
	resultado=0.0;
	resultado=(parametro1+parametro2)/2;
	return (resultado);
}	

int main()
{
	float n1;
	float n2;
	float respuesta;
	
	n1=0.0;
	n2=0.0;
	respuesta=0.0;
	
	printf ("Calcula la media de dos números\nIntroduce el primer número: ");
	scanf("%f", &n1);
	printf ("Introduce el segundo número: ");
	scanf("%f", &n2);
	respuesta=media2(n1,n2);
	printf ("Media = %.2f\n",respuesta);
	return(0);
}