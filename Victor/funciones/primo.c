#include <stdio.h>
#include <math.h>

int primo(int parametro1)
{
	int resultado;
	int contador;
	resultado=0;
	contador=2;
	
	if(parametro1==2)
	{
		resultado=1;	
	}
	else
	{
		while (contador<parametro1)
		{
			if(parametro1%contador==0)
			{
				resultado=0;
				contador=parametro1;
			}
			else
			{
				resultado=1;	
				contador++;
			}
		}
	}
	
	return (resultado);
}	

int main()
{
	int n1;
	int respuesta;
	
	n1=0;
	respuesta=0;
	do
	{	
		printf ("Introduce un número para saber si es primo: ");
		scanf("%d", &n1);
		if(n1<=1)
		{
			printf ("Introduce un número mayor de 1\n");
		}
	}
	while(n1<=1);
	
	respuesta=primo(n1);
	if(respuesta==1)
	{
		printf ("El número es primo\n");
	}
	else
	{
		printf ("El número no es primo\n");	
	}
	return(0);
}