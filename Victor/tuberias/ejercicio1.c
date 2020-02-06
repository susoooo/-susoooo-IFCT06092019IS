#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <wait.h>

void main()
{
    int fd[2];
    char buffer[50];
    pid_t pid;
    int leidos;

    pipe(fd); // Se crea el PIPE
    pid = fork();

    switch(pid)
    {
        case -1: // Error
            printf("No se ha podido crear un hijo \n");
            exit(-1);
            break;
        case 0: // Hijo
            close(fd[0]); // Cierra el descriptor que no va a usar. El de lectura
            printf("Introduce el mensaje que el hijo escribe en el PIPE... \n");
            gets(buffer);
            write(fd[1], buffer, sizeof buffer);
            break;
        default: // Padre
            close(fd[1]); // Cierra el descriptor de escritura
            wait(NULL); // Espera a que finalice el hijo
            printf("El padre lee el PIPE \n");
            leidos=read(fd[0], buffer, sizeof buffer);
            printf("\t Mensaje leido: %s \n", buffer);
            printf("\t Caracteres leidos: %d \n", leidos);
    }
}
