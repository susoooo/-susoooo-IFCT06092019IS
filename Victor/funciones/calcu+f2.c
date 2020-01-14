#include <stdio.h>
#include <math.h>
int cod_error;

float suma(float parametro1, float parametro2)
{
	float resultado;
	resultado=0.0;
	resultado=parametro1+parametro2;
	return (resultado);		
}
float resta(float parametro1, float parametro2)
{
	float resultado;
	resultado=0.0;
	resultado=parametro1-parametro2;
	return (resultado);		
}
float multi(float parametro1, float parametro2)
{
	float resultado;
	resultado=0.0;
	resultado=parametro1*parametro2;
	return (resultado);		
}
float divi(float parametro1, float parametro2)
{
	float resultado;
	resultado=0.0;
	if(parametro2!=0)
	{
		resultado=parametro1/parametro2;
	}
	else
	{
		cod_error=-1000;
	}	
	return (resultado);		
}

int main()
{
	float n1;
	float n2;
	int operacion;
	float respuesta;
	
	n1=0.0;
	n2=0.0;
	operacion=0;
	respuesta =0.0;
	cod_error=0;
	do
	{
		printf ("CALCULADORA\nEscribe el primer número: ");
		scanf("%f", &n1);
		printf ("Escribe el segundo número: ");
		scanf("%f", &n2);
		printf ("Menú: \n\n1.Suma\n2.Resta\n3.Multiplicación\n4.División\n0.Salir\nSelecciona una opción: ");
		scanf("%d", &operacion);
		switch(operacion)
		{
			case 1: respuesta=suma(n1,n2);
						printf ("%.2f + %.2f = %.2f", n1, n2, respuesta);
						break;
			case 2: respuesta=resta(n1,n2);
						printf ("%.2f - %.2f = %.2f", n1, n2, respuesta);
						break;
			case 3: respuesta=multi(n1,n2);
						printf ("%.2f x %.2f = %.2f", n1, n2, respuesta);
						break;
			case 4: respuesta=divi(n1,n2);
						if(respuesta==0 && n1!=0)
						{
							printf("ERROR num. %d",cod_error);
						}
						else
						{
							printf ("%.2f / %.2f = %.2f", n1, n2, respuesta);
						}
						break; 
			case 0: break;
			default: printf("Opción no válida\n");
		}
		printf ("\n\n");
	}
	while(operacion!=0);
	printf ("FIN\n");
}

