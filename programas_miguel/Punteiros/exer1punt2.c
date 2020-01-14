//Diseñe un programa, que sume dos variables de tipo entero, por medio de punteros.
//Solución con tres punteiros

#include <stdio.h>
#include <math.h>

int suma(int num1,int num2)
{
	int resultado;
	resultado=0;
	resultado=num1+num2;
	
	return(resultado);
}


int main()
{
int num1;
int num2;
int solucion;

num1=0;
num2=0; 
solucion=0;

int * punt1;
int * punt2;
int * punt3;

punt1=&num1;
punt2=&num2;
punt3=&solucion;


printf("Introduce o primeiro número:\n");
scanf("%d",&num1);
printf("Introduce o segundo número:\n");
scanf("%d",&num2);

solucion=suma(num1,num2);

printf("%d + %d é igual a  %d\n",*punt1,*punt2,*punt3);


return 0;
}


