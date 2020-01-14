#include <stdio.h>

float multiplicacion(float parametro1, float parametro2, float parametro3, float parametro4)
{
	float resultado;
	resultado=0;
	resultado=parametro1*parametro2*parametro3*parametro4;
	return (resultado);
}	


int main()
{
	float n1;
	float n2;
	float n3;
	float n4;
	float multi;
	
	
	n1=0.0;
	n2=0.0;
	n3=0.0;
	n4=0.0;
	multi=0.0;
	
	printf ("Producto de cuatro números.\n");
	do
	{
		printf ("Introduce el primer número: ");
		scanf("%f", &n1);
		if(n1==0)
		{	
			printf ("Introduce un número distinto de 0\n");
		}
	}
	while(n1==0); 
	do
	{
		printf ("Introduce el segundo número: ");
		scanf("%f", &n2);
		if(n2==0)
		{	
			printf ("Introduce un número distinto de 0\n");
		}
	}
	while(n2==0); 
	do
	{
		printf ("Introduce el tercer número: ");
		scanf("%f", &n3);
		if(n3==0)
		{	
			printf ("Introduce un número distinto de 0\n");
		}
	}
	while(n3==0); 
	do
	{
		printf ("Introduce el cuarto número: ");
		scanf("%f", &n4);
		if(n4==0)
		{	
			printf ("Introduce un número distinto de 0\n");
		}
	}
	while(n4==0); 

	multi=multiplicacion(n1,n2,n3,n4);
	printf ("El producto de los cuatro números es: %.2f\n", multi);

	return(0);
}