/*Escribir un programa que cree un proceso para calcular un factorial. 
El programa preguntará por pantalla el número del cual se quiere calcular 
el factorial, lo enviará por una tubería al proceso que ha creado, 
y esperará a que este le envía de vuelta el resultado del cálculo. 
Tras recibirlo, el programa imprimirá el resultado del cálculo.*/

#include <stdlib.h> 
#include <unistd.h>
#include <stdio.h>
#define LEER 0 
#define ESCRIBIR 1

int main ()
    {
    int numero;
    int contador;
    double total;
    int descr[2];	/* Descriptores de E y S de la turbería */

    numero=0;
    contador =0;
    total =1;
      
    pipe (descr);
    if (fork () == 0)
       {
       read(descr[LEER], &total,sizeof (double));
       write(descr[ESCRIBIR], &total,sizeof (double));
       
       }
    else
       {
       printf("Por favor introduce un numero para calcular su factorial y mandarlo mediante una tuberia de un proceso hijo a un proceso padre = ");
       scanf("%d",&numero);
       for (contador=numero;contador>=1;contador--)
           {
            total = total * contador; 
           }
       write(descr[ESCRIBIR], &total,sizeof (double));
       read(descr[LEER], &total, sizeof (double));
       printf("\nEl resultado del factorial indicado es: %.2f\n\n",total);
       }
    }

