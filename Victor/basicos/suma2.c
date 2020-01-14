#include <stdio.h>
int main()
{

int suma;
int numero1;
int numero2;


numero1=0;
numero2=0;
suma=0;

printf ("Introduce dos números a sumar separados por un espacio: ");

scanf("%d %d", &numero1, &numero2);

suma=numero1+numero2;

printf ("El resultado es: %d\nHas sumado: %d + %d\n", suma, numero1, numero2);

}
