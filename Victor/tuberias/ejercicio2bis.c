#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <wait.h>

void main()
{
    int fd[2];
    int fd2[2];
    int buffer;
    int resultado;
    int contador;
    pid_t pid;

    pipe(fd); // Se crea el PIPE
    pipe(fd2);

    buffer=0;

    printf("Introduce un número para calcular su factorial \n");
    scanf("%d", &buffer);
    pid = fork();

    switch(pid)
    {
        case -1: // Error
            printf("No se ha podido crear un hijo \n");
            exit(-1);
            break;
        case 0: // Hijo
            sleep(1);
            close(fd[1]); // Cierra el descriptor de escritura
            printf("El hijo lee en el PIPE1 y calcula: \n");
            read(fd[0], &buffer, sizeof(int));
            contador=buffer;
            resultado=buffer;
            while (contador<=buffer && contador>1)
			{
				printf(" %d x ",contador);
				contador--;
				resultado=resultado*contador;
			}
			printf("1\n");
            close(fd2[0]); // Cierra el descriptor de lectura
            printf("El hijo escribe en el PIPE2 el resultado \n\n");
            write(fd2[1], &resultado, sizeof(int));
            break;
        default: // Padre
            close(fd[0]); // Cierra el descriptor de lectura
            printf("El padre escribe en el PIPE1 \n\n");
            write(fd[1], &buffer, sizeof(int));
            wait(NULL); // Espera a que finalice el hijo

            close(fd2[1]); // Cierra el descriptor de escritura
            printf("El padre lee en el PIPE2... \n");
            read(fd2[0], &resultado, sizeof(int));
            printf("\t Resultado: %d \n", resultado);
    }
}
