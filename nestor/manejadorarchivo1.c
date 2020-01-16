#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    FILE * manejadorarchivo;//file * es un puntero especial que maneja archivos

    manejadorarchivo=fopen("miarchivo.txt","rt");/*utilizamos el nombre del punetro
     que le asignamos "manejadorarchivo" para abrir el archivo con fopen esto
     es lo primero que se tiene hacer siempre antes de leer escribir o cualqier cosa
     hay que abrirlo IMPORTANTE. Despues se escribe la ruta (c:\Documentos\)


