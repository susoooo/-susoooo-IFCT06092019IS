#include <stdio.h>
#include <math.h>

main()

{
printf ("Ola, son o programa CALC+ programado por Miguel Díaz para executar operacións matemáticas\n");


int numero1;
int numero2;
int suma;
int resta;
int multiplica;
double division;

double seno1;
double seno2;
double coseno1;
double coseno2;
double tanxente1;
double tanxente2;
double eleva1;
double eleva2;
double raiznum1;
double raiznum2;
double logbase1;
double logbase2;


suma=0;
resta=0;
multiplica=0;
division=0;
seno1=0;
seno2=0;
coseno1=0;
coseno2=0;
tanxente1=0;
tanxente2=0;
eleva1=0;
eleva2=0;
raiznum1=0;
raiznum2=0;
logbase1=0;
logbase2=0;

printf("Introduce o primeiro número: ");
scanf("%d",&numero1);
printf("Introduce o segundo número: ");
scanf("%d",&numero2);

suma=numero1+numero2;
resta=numero1-numero2;
multiplica=numero1*numero2;
division=numero1/numero2;
seno1=sin(numero1*3.14159/180);
seno2=sin(numero2*3.14159/180);
coseno1=cos(numero1*3.14159/180);
coseno2=cos(numero2*3.14159/180);
tanxente1=tan(numero1*3.14159/180);
tanxente2=tan(numero2*3.14159/180);
eleva1=pow(numero1,numero2);
eleva2=pow(numero2,numero1);
raiznum1=sqrt(numero1);
raiznum2=sqrt(numero2);
logbase1=log(numero1);
logbase2=log(numero2);

printf("O resultado da suma é = %d\n",suma);
printf("O resultado da resta é = %d\n",resta);
printf("O resultado da multiplicación é = %d\n",multiplica);
printf("O resultado da división é = %f\n",division);
printf("O seno do número 1 é = %f\n",seno1);
printf("O seno do número 2 é = %f\n",seno2);
printf("O coseno do número 1 é = %f\n",coseno1);
printf("O coseno do número 2 é = %f\n",coseno2);
printf("A tanxente do número 1 é = %f\n",tanxente1);
printf("A tanxente do número 2 é = %f\n",tanxente2);
printf("O resultado do primeiro número elevado ó segundo é = %f\n",eleva1);
printf("O resultado do segundo número elevado ó primeiro é = %f\n",eleva2);
printf("A raíz cadrada do primeiro número é = %f\n",raiznum1);
printf("A raíz cadrada do segundo número é = %f\n",raiznum2);
printf("O logaritmo en base 10 do primeiro número é = %f\n",logbase1);
printf("O logaritmo en base 10 do segundo número é = %f\n",logbase2);

}
