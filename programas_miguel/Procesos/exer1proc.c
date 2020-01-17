/*Implementa un programa en C que cree tres procesos hijos. El proceso padre
debe esperar a que acaben los procesos hijos e imprimir un mensaje indicándolo.
No es necesario que utilices un bucle for.*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main() 
{
pid_t fillo1;
pid_t fillo2;
pid_t fillo3;


fillo1 = fork();
switch (fillo1) 
{
case -1:
printf("Non se puido crear o proceso fillo\n");
break;

case 0:
printf("Son o fillo 1, o meu PID é %d e o meu PPID é %d \n", getpid(), getppid());
break;

default:
printf("Son o pai, o meu PID é %d e o PID do meu fillo1 é %d \n", getpid(), fillo1);
wait(0);
    fillo2 = fork();
    switch (fillo2)
    {
        case -1:
        printf("Non se puido crear o proceso fillo\n");
        break;

        case 0:
        printf("Son o fillo 2, o meu PID é %d e o meu PPID é %d \n", getpid(), getppid());
        break; 

        default:
            wait(0);
            fillo3 = fork();
            switch (fillo3)
                {
                    case -1:
                    printf("Non se puido crear o proceso fillo\n");
                    break;

                    case 0:
                    printf("Son o fillo 3, o meu PID é %d e o meu PPID é %d \n", getpid(), getppid());
                    break; 

                    default:
                    wait(0);
                    printf("Pasade prá casa!\n");

                }

    }

}

printf("Final de execución de %d \n", getpid());
exit(0);
}

