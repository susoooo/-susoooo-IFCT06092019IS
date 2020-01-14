//Diseñe un programa, que muestre el mayor y el menor de tres introducidos por el usuario. 
//Desarrolle 2 Funciones, una para calcular el número mayor y otra para calcular el número menor.

#include <stdio.h>
#include <math.h>

int nummaior(int n1, int n2, int n3)
{
	if ( n1 >= n2 && n1 >= n3 )
	{
        printf( "\n%d é o maior.", n1 );
	}
	else
		{
			if ( n2 > n3 )
			{
				printf( "\n%d é o maior.", n2 );
			}
				else
				{
				printf( "\n%d é o maior.", n3 );
				}
		}
		return(0);
}	

int nummenor(int n1, int n2, int n3)
{
	if ( n1 <= n2 && n1 <= n3 )
	{
        printf( "\n%d é o menor.", n1 );
	}
	else
		{
			if ( n2 < n3 )
			{
				printf( "\n%d é o menor.", n2 );
			}
			else
			{
			printf( "\n%d é o menor.", n3 );
			}
		}
		
	return(0);	
}


int main()
{
	int n1;
	int n2;
	int n3;
	n1=0;
	n2=0;
	n3=0;
	
	printf("Introduce o número 1\n");
	scanf("%d",&n1);
	
	printf("Introduce o número 2\n");
	scanf("%d",&n2);
	
	printf("Introduce o numero 3\n");
	scanf("%d",&n3);
	
	nummaior(n1,n2,n3);
	nummenor(n1,n2,n3);
	printf("\n");
	
	return(0);
}