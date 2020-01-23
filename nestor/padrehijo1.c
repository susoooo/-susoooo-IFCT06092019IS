/*Implementa un programa en C que cree tres procesos hijos.
El proceso padre debe esperar a que acaben los procesos hijos
e imprimir un mensaje indicándolo. No es necesario que utilices 
un bucle for.*/
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int main() 
{
pid_t h1;
pid_t h2;
pid_t h3;
h1 = fork();
switch (h1)
    {
    case -1:
    printf("No he podido crear el proceso hijo \n");
    break;
    case 0:
    //sleep(2);  
    printf("!NO ME JODAS, yo soy tu hijo!\n");
    break;
    default:
    printf("LUKE SOY TU PADRE\n");
    wait(0);
    h2 = fork();
    switch (h2)
        {
        case -1:
        printf("No he podido crear el proceso hijo \n");
        break;
        case 0:
        //sleep(3);  
        printf("Papi yo tambien\n");
        break;
        default:
        wait(0);
        h3 = fork();
        switch (h3)
            {
            case -1:
            printf("No he podido crear el proceso hijo \n");
            break;
            case 0:
            printf("Joder yo tambien valla familia mas rara\n");
            break;
            default:
            wait(0);
            printf("VENGA,todo dios pa la nave y a limpiar\n");
           } 
        }
    } 
    exit(0);
}