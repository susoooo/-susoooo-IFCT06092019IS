/*1. Implementa un programa en C que cree tres procesos hijos. 
El proceso padre debe esperar a que acaben los procesos hijos e 
imprimir un mensaje indicándolo. No es necesario que utilices un bucle for.*/
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int main() 
{
int numhijos;
numhijos = fork();
switch (numhijos) 
{
    case 