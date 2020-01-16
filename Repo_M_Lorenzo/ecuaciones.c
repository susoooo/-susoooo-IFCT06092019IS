#include <stdio.h>
#include <math.h>


main()
{

//VARIABLES

int a;
int b;
int c;
float sol1;
float sol2;

//INICIALIZACION

a=0;
b=0;
c=0;
sol1=0;
sol2=0;

//PROGRAMA

printf("Resolución de ecuaciones de segundo grado\n");
printf("ax²+bx+c\n");
printf("Introduzca el coeficiente a\n");
scanf("%d",&a);
printf("Introduzca el coeficiente b\n");
scanf("%d",&b);
printf("Introduzca el coeficiente c\n");
scanf("%d",&c);

sol1=(((-1)*b)+(sqrt(pow(b,2)-(4*a*c))))/(2*a);
sol2=(((-1)*b)-(sqrt(pow(b,2)-(4*a*c))))/(2*a);

printf("La primera solución es %f y la segunda solución es %f\n",sol1,sol2);



}
