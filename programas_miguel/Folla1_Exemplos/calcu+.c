#include <stdio.h>

main()

{
printf ("Ola, son o programa CALC+ programado por Miguel Díaz para executar operacións matemáticas\n");


int numero1;
int numero2;
int suma;
int resta;
int multiplica;
double division;


suma=0;
resta=0;
multiplica=0;
division=0;


printf("Introduce o primeiro número: ");
scanf("%d",&numero1);
printf("Introduce o segundo número: ");
scanf("%d",&numero2);

suma=numero1+numero2;
resta=numero1-numero2;
multiplica=numero1*numero2;
division=numero1/numero2;

printf("O resultado da suma é = %d\n",suma);
printf("O resultado da resta é = %d\n",resta);
printf("O resultado da multiplicación é = %d\n",multiplica);
printf("O resultado da división é = %f\n",division);

}
