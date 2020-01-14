//Diseñe un programa, que sume dos variables de tipo entero, por medio de punteros.

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

int * punteiro;

num1=0;
num2=0; 
solucion=0;

punteiro = &solucion;

printf("Introduce o primeiro número:\n");
scanf("%d",&num1);
printf("Introduce o segundo número:\n");
scanf("%d",&num2);

solucion=suma(num1,num2);

printf("O resultado da suma é %d\n",*punteiro);


return 0;
}

//Resultado con só un punteiro apuntando ó resultado da función