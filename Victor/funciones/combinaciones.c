#include <stdio.h>

int factorial(int parametro1)
{

	int resultado;

	resultado=0;
	resultado=parametro1;
	
	if(parametro1!=1)
	{	
		resultado=resultado*factorial(resultado-1);
	}

	return (resultado);
}

int main()
{
int n;
int r;
int resultado1;
int resultado2;
int resultado3;
int resultadof;
n=0;
r=0;
resultado1=0;
resultado2=0;
resultado3=0;
resultadof=0;
	do
	{
		printf("Calcular combinaciones de n y r\nIntroduce n: ");
		scanf("%d", &n);
		printf("Introduce r: ");
		scanf("%d", &r);
		if(n>0 && r>0)
		{
			resultado1=factorial(n);
			printf("%d \n",resultado1);
			resultado2=factorial(r);
			printf("%d \n",resultado2);
			if(n-r>0)
			{	
				resultado3=factorial(n-r);
				printf("%d \n",resultado3);
			}
			else
			{
				resultado3=1;
			}	
			resultadof=resultado1*resultado2*resultado3;
			printf("Resultado = %d \n",resultadof);
			
		}
		else
		{
			printf("Los números deben ser mayores que 0\n");
		}
	}
	while(n<=0 || r<=0);
}
