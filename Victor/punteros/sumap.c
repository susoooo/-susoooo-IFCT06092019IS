#include <stdio.h>
int main()
{

int *punt;
int suma;
int numero[2];

suma=0;

printf ("Introduce dos números a sumar separados por un espacio: ");

scanf("%d %d", &numero[0], &numero[1]);

punt=numero;
suma=*punt+*(punt+1);

printf ("El resultado es: %d\nHas sumado: %d + %d\n", suma, *punt, *(punt+1));

}
