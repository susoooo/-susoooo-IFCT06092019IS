#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <wait.h>

void main()
{
    int fd[2];
    char buffer[5][20] = {
     "tonto",
     "burro",
     "pailan",
     "inutil",
     "borracho",};
    char temp[50];
    pid_t pid;
    int leidos;
    int contador;
    int contador2;

    contador=0;
    contador2=0;
    pipe(fd); // Se crea el PIPE
    pid = fork();

    switch(pid)
    {
        case -1: // Error
            printf("No se ha podido crear un hijo \n");
            exit(-1);
            break;
        case 0: // Hijo

            while (1)
            {
                strcpy(temp, buffer[contador]);
                write(fd[1], temp, sizeof temp);
                sleep(1);
                contador++;

                read(fd[0], temp, sizeof temp);
                if(strcmp(temp, "para")==0)
                {
                    write(fd[1], "Me paro", sizeof temp);
                    exit(0);
                }

            }
            break;
        default: // Padre

            while (contador2<3)
            {
                sleep (1);
                printf("El padre lee del PIPE mensaje del hijo \n");
                fflush(stdout);
                leidos=read(fd[0], temp, sizeof temp);
                printf("\t Mensaje leido: %s \n\n", temp);
                if(strcmp(temp, "borracho")==0)
                {
                    printf("Eso sí que no. Para hijo insultador! \n");
                    write(fd[1], "para", sizeof temp);
                }
                else
                {
                    if(strcmp(temp, "Me paro")==0)
                    {
                        printf("Hijo insultador parado. Yo también paro.\n");
                        exit(0);
                    }
                    else
                    {
                        write(fd[1], "ok", sizeof temp);
                    }
                }
            }
    }
}
