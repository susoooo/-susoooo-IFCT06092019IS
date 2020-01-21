#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <wait.h>

void creaprocesos(int niveles)
{
    pid_t rf;
    rf = fork();
    if(rf!=0)
    {
        rf = fork();
    }

    switch (rf)
    {
        case -1:
            printf("No he podido crear el proceso hijo \n");
        break;
        case 0:
            printf("Soy el hijo, mi PID es %d y mi PPID es %d \n", getpid(), getppid());
            sleep(3);
        break;
        default:
            printf("Soy el padre, mi PID es %d \n", getpid());
            wait(0);
            exit(0);
    }
    if(rf==0)
    {
        rf = fork();
    }
    if(rf!=0)
    {
        rf = fork();
    }

    switch (rf)
    {
        case -1:
            printf("No he podido crear el proceso hijo \n");
        break;
        case 0:
            printf("Soy el hijo, mi PID es %d y mi PPID es %d \n", getpid(), getppid());
            sleep(3);
        break;
        default:
            printf("Soy el padre, mi PID es %d\n", getpid());
            wait(0);
            exit(0);
    }
    if(rf==0)
    {
        rf = fork();
    }
    if(rf!=0)
    {
        rf = fork();
        if(rf!=0)
        {
            rf = fork();
        }
    }

    switch (rf)
    {
        case -1:
            printf("No he podido crear el proceso hijo \n");
        break;
        case 0:
            printf("Soy el hijo, mi PID es %d y mi PPID es %d \n", getpid(), getppid());
            sleep(3);
        break;
        default:
            printf("Soy el padre, mi PID es %d\n", getpid());
            wait(0);
            exit(0);
    }
    printf("Final de ejecución de %d \n", getpid());
    exit(0);
}


int main()
{
    int niveles;
   // niveles=0;
   // printf ("Creador de procesos. Introduce el número de niveles: ");
	//scanf("%d", &niveles);
    creaprocesos(niveles);
}
