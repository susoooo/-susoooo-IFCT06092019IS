#include <stdio.h>
#include <math.h>

float calculo(float parametro1)
{
	float resultado;
	resultado=0.0;
	resultado=parametro1*1.17;
	return (resultado);
}	

int main()
{
	float n1;
	float respuesta;
	
	n1=0.0;
	respuesta=0.0;
	
	printf ("Conversor de Euros a dólares\nIntroduce los Euros: ");
	scanf("%f", &n1);
	respuesta=calculo(n1);
	printf ("%.2f Euros = %.2f Dólares\n", n1, respuesta);
	return(0);
}