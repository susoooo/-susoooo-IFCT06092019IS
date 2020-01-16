#include <stdio.h>
#include <math.h>
int main()
{
	int resultado;
	int * num1;
	int * num2;
	resultado=0;
    int n1;
	int n2;
	
	num1 =&n1;
	num2=&n2;
   
	printf("Bienvenido al programa puntero+ que realiza sumas de dos enteros mediante punteros\n");
	printf("introduzca el primer numero  = ");
	scanf("%d",num1);
	printf("introduzca el segundo numero = ");
	scanf("%d",num2);
	resultado=*num1+*num2;
	printf("El resultado es = %d\n",resultado);
return(0);
}	
	