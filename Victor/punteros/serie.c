#include <stdio.h>
#include <math.h>

double calcularserie(double x, int n)
{
	int contador;
	double resultado;
	double temp;
	resultado=0;
	contador=0;
	temp=0;
	
	for(contador=1;contador<n;contador=contador+2)
	{	
		temp= 1/(pow(x,contador))-1/(pow(x,contador+1));
		resultado =resultado+temp;
	}
	return(resultado);
}

void calcularseriepunt(double x, int n, double * resultado)
{
	int contador;
	double temp;
	contador=0;
	temp=0;
	*resultado=0;
	
	for(contador=1;contador<n;contador=contador+2)
	{	
		temp= 1/(pow(x,contador))-1/(pow(x,contador+1));
		*resultado=*resultado+temp;
	}
}

int main()
{
	double * punt;
	int contador;
	int x;
	int n;
	double resultado1;
	contador=0;
	x=0;
	n=0;
	resultado1=0;

	printf("Introduce un número x: ");
	scanf("%d", &x);
	printf("Introduce el número de elementos de la serie n: ");
	scanf("%d", &n);

	resultado1=calcularserie(x, n);
	printf("Resultado1= %lf\n",resultado1);
	
	calcularseriepunt(x, n, punt);
	printf("Resultado2= %lf\n", *punt);
}
