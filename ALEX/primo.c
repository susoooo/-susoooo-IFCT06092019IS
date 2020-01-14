#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int primo()
{	
	int a;
	a = 0;
	int numero1;
	numero1 = 2;
	int divisor;
	divisor = 0;
	int valor;
	valor = 0;
	printf ("Escribe un numero\n");
	scanf ("%d",&numero1);
	for(divisor=1;divisor<=numero1;divisor++)
	{
		
		if(numero1%divisor == 0)
		{
			a = a +1;
		}
		
	}	
	
			if (a==2)
			{
				printf ("El numero  es primo\n");
			}	
			else
			{
			printf ("El numero no es primo\n");
			}
		
	

	
	
	return (0);
}
main()
{
	primo();
	return(0);
}
		
	