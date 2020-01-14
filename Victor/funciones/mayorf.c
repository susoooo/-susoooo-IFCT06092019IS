#include <stdio.h>

int fmayor(int parametro1, int parametro2, int parametro3)
{
	int resultado;
	resultado=0;
	 if (parametro1 > parametro2 && parametro1 > parametro3)
	{
		resultado=parametro1;
	}
	else
	{
		if (parametro2 > parametro1 && parametro2 > parametro3)
		{
			resultado=parametro2;
		}
		else
		{
			resultado=parametro3;
		}	
	}
	return (resultado);
}	

int fmenor(int parametro1, int parametro2, int parametro3)
{
	int resultado;
	resultado=0;
	 if (parametro1 < parametro2 && parametro1 < parametro3)
	{
		resultado=parametro1;
	}
	else
	{
		if (parametro2 < parametro1 && parametro2 < parametro3)
		{
			resultado=parametro2;
		}
		else
		{
			resultado=parametro3;
		}	
	}
	return (resultado);
}	

int main()
{
	int n1;
	int n2;
	int n3;
	int mayor;
	int menor;
	
	n1=0;
	n2=0;
	n3=0;
	mayor=0;
	menor=0;
	
	printf ("Calcular mayor y menor de tres números\nIntroduce el primer número: ");
	scanf("%d", &n1);
	printf ("Introduce el segundo número: ");
	scanf("%d", &n2);
	printf ("Introduce el tercer número: ");
	scanf("%d", &n3);
	mayor=fmayor(n1,n2,n3);
	printf ("El número mayor es: %d\n", mayor);
	menor=fmenor(n1,n2,n3);
	printf ("El número menor es: %d\n", menor);
	return(0);
}