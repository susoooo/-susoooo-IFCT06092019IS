#include <stdio.h>
#include <math.h>

int primo(int parametro1)
{
	int resultado;
	int contador;
	int contador2;
	resultado=0;
	contador=0;
	contador2=0;
	
	printf ("Los números primos que hay hasta %d son: ", parametro1);
	if(parametro1==2)
	{
		printf ("%d ", parametro1);
	}
	else
	{
		for(contador=3;contador<parametro1;contador++)
		{
			for(contador2=parametro1;contador2>2;contador2--)
			{	
				if(contador2%contador==0)
				{
					printf ("%d es primo", contador);
					resultado=0;
				}
				else
				{
					//printf ("%d no es primo", contador2);
					resultado=1;	
				}
			}
		}	
	}
	
	return (0);
}	

int main()
{
	int n1;
	int respuesta;
	
	n1=0;
	respuesta=0;
	do
	{	
		printf ("Introduce un número para saber cuantos números primos hay antes: ");
		scanf("%d", &n1);
		if(n1<=1)
		{
			printf ("Introduce un número mayor de 1\n");
		}
	}
	while(n1<=1);
	
	primo(n1);
	/*if(respuesta==1)
	{
		printf ("El número es primo\n");
	}
	else
	{
		printf ("El número no es primo\n");	
	}*/
	printf ("\n");
	return(0);
}