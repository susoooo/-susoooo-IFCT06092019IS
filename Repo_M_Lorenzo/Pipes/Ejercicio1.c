#include <unistd.h>  
#include <stdio.h>
#include <stdlib.h>
#define LEER 0 
#define ESCRIBIR 1
#define TAM_BUF 30

int main()
{
    int fd[2];
    char buffer[TAM_BUF];
    pid_t pid;

    pipe(fd); // Se crea el PIPE
    pid = fork();

    switch(pid)
    {     
      case -1: // Error
        printf("No se ha podido crear un hijo \n");
        exit(-1);
        break;
      case 0: // Hijo
        close(fd[LEER]); // Cierra el descriptor que no va a usar. El de lectura
        printf("Introduzca los datos a enviar\n");
        scanf("%s",buffer);
        write(fd[ESCRIBIR], buffer, TAM_BUF);
        break;
      default: // Padre
        close(fd[ESCRIBIR]); // Cierra el descriptor de escritura
        wait(pid); // Espera a que finalice el hijo
        read(fd[LEER], buffer, TAM_BUF);
        printf("\t Mensaje leido: %s \n", buffer);
    }
    
    return(0);
}