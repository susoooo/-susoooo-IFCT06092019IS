/*Crear un programa que pida al usuario un texto por pantalla, 
y que guarde dicho texto en un archivo llamado textos.txt.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
   FILE * manejadorarchivo;//file * es un puntero especial que maneja archivos
   void *espaciomemoria;
   espaciomemoria=malloc(sizeof(char));
   printf("Bienvenidos al programa texto + diseñado para añadir tus textos al programa textos.txt\n");
   printf("por favor introduce tu texto\n");
   gets(espaciomemoria);
   manejadorarchivo=fopen("/home/nestor/Documentos/textos.txt","a+t");
} 
/*r: solo lectura.Debe existir.
w: escritura. fichero novo. sobreescribe.
a: añadir. coloca al final archivo. si no existe lo crea.
r+:leer y escribir.El archivo debe existir.
w+:leer y escribir.fichero novo. sobreescribe.
a+:añadir, leer y escribir. se coloca al final. Si no existe lo crea.
t:texto.
b:binario.
"rwa" ="a+"*/