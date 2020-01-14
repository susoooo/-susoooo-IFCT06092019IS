#include <stdio.h>
#include <math.h>
#define C_Radianes (3.1416/180)

main()
{
//VARIABLES
int operacion;
int numero1;
int numero2;
int suma;
int resta;
int multiplicacion;
float division;
float raiz;
float potencia;
float seno;
float coseno;
float tangente;
float logaritmo_b10;

//Inicializacion
operacion=0;
numero1=0;
numero2=0;
suma=0;
resta=0;
multiplicacion=0;
division=0;
raiz=0;
seno=0;
coseno=0;
tangente=0;
logaritmo_b10=0;


//Programa

do
{

printf("CALCU+ V0.4\n");
printf("PROGRAMADO POR MANUEL ANGEL LORENZO\n");
printf("Seleccione la operación:\n");
printf("1-Suma\n");
printf("2-Resta\n");
printf("3-Multiplicación\n");
printf("4-División\n");
printf("5-Raíz Cuadrada\n");
printf("6-Potencia\n");
printf("7-Seno\n");
printf("8-Coseno\n");
printf("9-Tangente\n");
printf("10-Logaritmo (Base 10)\n");
printf("11-Salir\n");
scanf("%d",&operacion);


switch(operacion)
{
	case 1:
		printf("Va a realizar una suma\n");
		printf("Introduzca el primer numero:\n");
		scanf("%d",&numero1);
		printf("Introduzca el segundo numero:\n");
		scanf("%d",&numero2);
		suma=numero1+numero2;
		printf("El resultado es: %d\n",suma);
		break;


	case 2:
		printf("Va a realizar una resta\n");
		printf("Introduzca el primer numero:\n");
		scanf("%d",&numero1);
		printf("Introduzca el segundo numero:\n");
		scanf("%d",&numero2);
		resta=numero1-numero2;
		printf("El resultado es: %d\n",resta);
		break;

	case 3:
		printf("Va a realizar una multiplicación\n");
		printf("Introduzca el primer numero:\n");
		scanf("%d",&numero1);
		printf("Introduzca el segundo numero:\n");
		scanf("%d",&numero2);
		multiplicacion=numero1*numero2;
		printf("El resultado es: %d\n",multiplicacion);
		break;

	case 4:
		printf("Va a realizar una división\n");
		printf("Introduzca el primer numero:\n");
		scanf("%d",&numero1);
		printf("Introduzca el segundo numero:\n");
		scanf("%d",&numero2);
		if (numero2==0)
		{
			printf("Error  división por 0\n");
		}
		else
		{
		division=(float)numero1/(float)numero2;
		printf("El resultado es: %f\n",division);
		}
		break;

	case 5:
		printf("Va a realizar una raíz cuadrada\n");
		printf("Introduzca el numero:\n");
		scanf("%d",&numero1);
		if(numero1>=0)
		{
		raiz=sqrt((float)numero1);
		printf("El resultado es: %f\n",raiz);
		}
		else
		{
			printf("El numero es negativo, está fuera del campo de los numeros reales\n");
		}
		break;

	case 6:
		printf("Va a realizar una potencia\n");
		printf("Introduzca la base:\n");
		scanf("%d",&numero1);
		printf("Introduzca el exponente:\n");
		scanf("%d",&numero2);
		potencia=pow((float)numero1,(float)numero2);		
		printf("El resultado es: %f\n",potencia);
		break;

	case 7:
		printf("Va a calcular un seno\n");
		printf("Introduzca el valor del águlo(en º):\n");
		scanf("%d",&numero1);
		seno=sin((float)numero1*C_Radianes);		
		printf("El resultado es: %f\n",seno);
		break;

	case 8:
		printf("Va a calcular un coseno\n");
		printf("Introduzca el valor del águlo(en º):\n");
		scanf("%d",&numero1);
		coseno=cos((float)numero1*C_Radianes);		
		printf("El resultado es: %f\n",coseno);
		break;

	case 9:
		printf("Va a calcular una tangente\n");
		printf("Introduzca el valor del águlo(en º):\n");
		scanf("%d",&numero1);
		if(numero1==90 || numero1==270)
		{
			printf("La tangente es infinito\n");
		}
		else
		{
		tangente=tan((float)numero1*C_Radianes);		
		printf("El resultado es: %f\n",tangente);
		}
		break;

	case 10:
		printf("Va a realizar un logaritmo en base 10\n");
		printf("Introduzca el valor del número:\n");
		scanf("%d",&numero1);
		if(numero1<0)
		{
			printf("Error, no se puede calcular el logaritmo de un número negativo\n");
		}
		else
		{		
		logaritmo_b10=log10((float)numero1);		
		printf("El resultado es: %f\n",logaritmo_b10);
		}
		break;

	case 11:
		printf("Gracias por usar mi calculadora\n");
		printf("Hasta la próxima\n");
}

}while (operacion!=11);

			
}
