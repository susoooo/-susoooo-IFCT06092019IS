#include <stdio.h>
#include <math.h>

main()
{

int num1;
int num2;
int contador;

num1=0;
num2=0;
contador=0;

printf("Por favor, introduce o primeiro número desexado: \n");
scanf("%d",&num1);
printf("Por favor, introduce o segundo número desexado: \n");
scanf("%d",&num2);

printf("\n");

if (num1 %2 == 0)
{
contador=num1+1;
}
else 
{
contador=num1;
}

while (contador<=num2)
{
printf("%d\n",contador);
contador=contador+2;
}


}

