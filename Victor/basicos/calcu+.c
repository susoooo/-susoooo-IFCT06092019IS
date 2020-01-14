#include <stdio.h>
#include <math.h>
int main()
{

float numero1;
float numero2;
float suma;
float resta;
float multiplicacion;
float division;
float pi;
float seno;
float coseno;
float tangente;
float seno2;
float coseno2;
float tangente2;
float potencia;
float potencia2;
float raiz;
float raiz2;
float logaritmo;
float logaritmo2;


numero1=0;
numero2=0;
suma=0;
resta=0;
multiplicacion=0;
division=0;
pi=3.14159;
seno=0;
coseno=0;
tangente=0;
seno2=0;
coseno2=0;
tangente2=0;
potencia=0;
potencia2=0;
raiz=0;
raiz2=0;
logaritmo=0;
logaritmo2=0;

printf ("Vamos a realizar operaciones con dos números\nEscribe el primer número: ");

scanf("%f", &numero1);

printf ("Escribe el segundo número: ");

scanf("%f", &numero2);

suma=numero1+numero2;
resta=numero1-numero2;
multiplicacion=numero1*numero2;
division=numero1/numero2;
seno=sin(numero1*pi/180);
coseno=cos(numero1*pi/180);
tangente=tan(numero1*pi/180);
seno2=sin(numero2*pi/180);
coseno2=cos(numero2*pi/180);
tangente2=tan(numero2*pi/180);
potencia=pow(numero1,numero2);
potencia2=pow(numero2,numero1);
raiz=sqrt(numero1);
raiz2=sqrt(numero2);
logaritmo=log10(numero1);
logaritmo2=log10(numero2);

printf ("La suma es: %.2f\nLa resta es: %.2f\nLa multiplicación es: %.2f\nLa división es: %.2f\n", suma, resta, multiplicacion, division);

printf ("El seno del primer número es: %.2f\nEl seno del segundo número es: %.2f\nEl coseno del primer número es: %.2f\nEl coseno del segundo número es: %.2f\nLa tangente del primer número es: %.2f\nLa tangente del segundo número es: %.2f\n", seno, seno2, coseno, coseno2, tangente, tangente2);

printf ("El primer número elevado al segundo es: %.2f\nEl segundo número elevado al primero es: %.2f\n", potencia, potencia2);

printf ("La raiz cuadrada del primer número es: %.2f\nLa raiz cuadrada del segundo número es: %.2f\n", raiz, raiz2);

printf ("El logaritmo en base 10 del primer número es: %.2f\nEl logaritmo en base 10 del segundo número es: %.2f\n", logaritmo, logaritmo2);

}
