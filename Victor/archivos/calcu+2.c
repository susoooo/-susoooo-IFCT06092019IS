#include <stdio.h>
#include <math.h>
int main()
{

	float numero1;
	float numero2;
	float suma;
	float resta;
	float multiplicacion;
	float division;
	int operacion;

	numero1=0;
	numero2=0;
	suma=0;
	resta=0;
	multiplicacion=0;
	division=0;
	operacion=0;
	
	while (operacion!=5)
	{
		printf ("CALCULADORA\nEscribe el primer número: ");
		
		scanf("%f", &numero1);
		
		printf ("Escribe el segundo número: ");
		
		scanf("%f", &numero2);
		
		printf ("Menú: \n\n1.Suma\n2.Resta\n3.Multiplicación\n4.División\n5.Salir\nSelecciona una opción: ");
		
		scanf("%d", &operacion);
	
		printf("\n");
		
		if(operacion==1)
		{
			suma=numero1+numero2;
			printf ("%.2f + %.2f = %.2f", numero1, numero2, suma);
		}
		else
		{
			if(operacion==2)
			{
				resta=numero1-numero2;
				printf ("%.2f - %.2f = %.2f", numero1, numero2, resta);
			}
			else
			{
				if(operacion==3)
				{
					multiplicacion=numero1*numero2;
					printf ("%.2f x %.2f = %.2f", numero1, numero2, multiplicacion);
				}
				else
				{
					if(operacion==4)
					{
						division=numero1/numero2;
						printf ("%.2f / %.2f = %.2f", numero1, numero2, division);
					}
					else
					{
						if(operacion==5)
						{
							operacion=5;
						}
						else
						{
							printf ("ERROR");
						}	
					}
				}
			}
		}
		printf ("\n\n");	
	}
		
printf ("FIN\n");
	
}
