#include <stdio.h>
#include <math.h>

main()
{

int num1;
int num2;
int contador;
int select;

num1=0;
num2=0;
contador=0;
select=0;

printf("Por favor, introduce o primeiro número desexado: \n");
scanf("%d",&num1);
printf("Por favor, introduce o segundo número desexado: \n");
scanf("%d",&num2);


printf("\n");

printf("Introduce o 1 para ver os números impares ou 2 se queres ver os pares\n");
scanf("%d",&select);
printf("\n");



if (select==1)
{
   if (num1 %2 == 0)
   {
   contador=num1+1;
   printf("%d\n", contador);
   }

   else 
   {
   contador=num1;
   printf("%d\n", contador);
   }
   

while (contador<num2-1)
{
contador=contador+2;
printf("%d\n", contador);
}

}

else
{
printf("A selección é incorrecta\n");
}

}


