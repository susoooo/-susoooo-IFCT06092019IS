#include <stdio.h>
#include <math.h>
int main()
{

float n1;
float n2;
float n3;
float n4;
float n5;
float n6;
float n7;
float x1;
float x2;
float a;
float b;
float c;


n1=0;
n2=0;
n3=0;
n4=0;
n5=0;
n6=0;
n7=0;
x1=0;
x2=0;
a=0;
b=0;
c=0;



printf ("Vamos a calcular el resultado de una ecuación de segundo grado\nEscribe los valores para A, B y C: \n");

printf ("A: ");
scanf("%f", &a);

printf ("B: ");
scanf("%f", &b);

printf ("C: ");
scanf("%f", &c);

n1=4*a*c;
n2=pow(b,2);
n3=n2-n1;
n4=sqrt(n3);
n5=2*a;
n6=-b+n4;
n7=-b-n4;
x1=n6/n5;
x2=n7/n5;

//printf ("n1 %.2f\nn2 %.2f\nn3 %.2f\nn4 %.2f\nn5 %.2f\nn6 %.2f\nn7 %.2f\n",n1,n2,n3,n4,n5,n6,n7);

printf ("El valor de A es: %.2f\nEl valor de B es: %.2f\nEl valor de C es: %.2f\n", x1, x2, c);

}
