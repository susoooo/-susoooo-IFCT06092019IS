//Escriba una función llamada “multiplicación” que reciba como argumento 
//cuatro números reales distintos de cero y que regrese el producto de ellos.

#include <stdio.h>
#include <math.h>


int multiplicacion(int n1,int n2,int n3,int n4)
{
	int resultado;
	resultado=0;
	
	resultado=n1*n2*n3*n4;
	return(resultado);
}


int main()
{
	int n1;
	int n2;
	int n3;
	int n4;
	int solucion;
	
    solucion=0;
	n1=0;
	n2=0;
	n3=0;
	n4=0;
	
	printf("Introduce o número 1\n");
	scanf("%d",&n1);
	
	printf("Introduce o número 2\n");
	scanf("%d",&n2);
	
	printf("Introduce o numero 3\n");
	scanf("%d",&n3);
	
	printf("Introduce o numero 4\n");
	scanf("%d",&n4);
	
	if(n1!=0 & n2!=0 & n3!=0 & n4!=0)
	{
	solucion=multiplicacion(n1,n2,n3,n4);
	printf("O resultado da multiplicacion é %d\n", solucion);
	}
	else
	{
		printf("Ningún número pode ser 0\n");
	}
	
	
	return(0);
}