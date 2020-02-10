/*Escribir un programa que cree un proceso padre y un proceso hijo. 
Entre ellos se establecerá una tubería, de tal forma que uno de ellos 
pedirá datos por pantalla al usuario, se los enviará al otro proceso, 
y este los imprimirá por pantalla.*/

#include <stdlib.h> 
#include <unistd.h>
#include <stdio.h>
#define LEER 0 
#define ESCRIBIR 1

int main ()
    {
    char datos[100];
    int descr[2];	/* Descriptores de E y S de la turbería */
    pipe (descr);
    if (fork () == 0)
       {
       printf("Por favor introduce datos para madarlos mediante una tuberia de un proceso hijo a un proceso padre = ");
       gets(&datos);
       write(descr[ESCRIBIR], datos, 100);
       }
    else
       {
       //close (descr[ESCRIBIR]);
       read(descr[LEER], datos, 100);
       printf("%s\n",datos);
       //close (descr[LEER]);
       }
    }
