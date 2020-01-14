//Diseñe un programa, que muestre el mayor y el menor de tres introducidos por el usuario. 
//Desarrolle 2 Funciones, una para calcular el número mayor y otra para calcular el número menor.

#include <stdio.h>
#include <math.h>

	
	
int nummaior(int n1, int n2, int n3)
{
	int maior;
	maior=0;
	
	if (n1 >= n2 && n1 >= n3)
	{
	    maior = n1;	
	}
	else
		{
			if ( n2 > n3 )
			{
				maior=n2;
			}
				else
				{
				maior=n3;
				}
		}
		
		return(maior);
}	

int nummenor(int n1, int n2, int n3)
{
	int menor;
	menor=0;	
	
	if ( n1 <= n2 && n1 <= n3 )
	{
        menor=n1;
	}
	else
		{
			if ( n2 < n3 )
			{
				menor=n2;
			}
			else
			{
			menor=n3;
			}
		}
		
	return(menor);	
}


int main()
{
	int n1;
	int n2;
	int n3;
	int solucion;
	n1=0;
	n2=0;
	n3=0;
	solucion=0;
	
	printf("Introduce o número 1\n");
	scanf("%d",&n1);
	
	printf("Introduce o número 2\n");
	scanf("%d",&n2);
	
	printf("Introduce o numero 3\n");
	scanf("%d",&n3);
	
	solucion=nummaior(n1,n2,n3);
	printf("\nO número maior é o  %d",solucion);
	solucion=nummenor(n1,n2,n3);
	printf("\nO número menor é o  %d",solucion);
	printf("\n");
	
	return(0);
}