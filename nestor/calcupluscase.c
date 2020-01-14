#include <stdio.h>
#include <math.h>
#define MSG1 "por favor introduce el primer numero   =  "
#define MSG2 "por favor introduce el segundo numero  =  "
int main()
{
int seleccion;
int numero1;
int numero2;
int suma;
int resta;
int multiplicacion;
double division;

 
seleccion=0;
suma=0;
resta=0;
multiplicacion=0;
division=0;


//presentacion 
	printf("\n     - Hola soy el programa Calcu+ diseñado por Nestor Rois para hacer calculos matematicos - \n");
do
{
	{

	printf("\n          POR FAVOR INDIQUE QUE OPERACION QUIERE REALIZAR \n");
	printf("\nSi desea realizar la suma introduce			1 \n");
	printf("Si desea realizar la resta introduce			2\n");
	printf("Si desea realizar la multiplicacion introduce		3 \n");
	printf("Si desea realizar la division introduce			4 \n");
	printf("Si no desea realizar mas operaciones introduce		0 \n");
	scanf("%d",&seleccion);
	}
//selecion o entrada de datos

switch(seleccion)
		{
	case 1:
	
		printf(MSG1);
		scanf("%d",&numero1);
		printf(MSG2);
		scanf("%d",&numero2);
		suma=numero1+numero2;
		printf("\n La suma de los numeros es = %d\n",suma);
		break;
		
	case 2:
		
		printf(MSG1);
		scanf("%d",&numero1);
		printf(MSG2);
		scanf("%d",&numero2);
		resta=numero1-numero2;
		printf("\n la resta de los numeros es = %d\n",resta);
		break;
		
	case 3:
		
		printf(MSG1);
		scanf("%d",&numero1);
		printf(MSG2);
		scanf("%d",&numero2);
		multiplicacion=numero1*numero2;
		printf("\n la multiplicación de los numeros es = %d\n",multiplicacion);
		break;
		
	case 4:
		
		division=numero1/numero2;
		printf("\n la división de los numeros es = %f\n",division);
		printf(MSG1);
		scanf("%d",&numero1);
		printf(MSG2);
		scanf("%d",&numero2);
		break;
		
	case 0:
		printf("\n                                 GRACIAS POR USAR CACU+\n\n");
		break;
		
		
		default:
		printf("\n la seleccion es erronea tiene que ser entre 0 y 4\n");
			
		}
}
while(seleccion!=0);
	
	
return(0);
}
