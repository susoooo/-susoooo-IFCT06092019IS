#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <wait.h>

int main(int argc, char *argv[])
{
    int i;
    pid_t rf;

    for (i = 0; i < argc; i++)
    {
        if(i>0)
        {
            rf = fork();
        }
        switch (rf)
        {
            case -1:
                printf("\nNo he podido crear el proceso hijo");
            break;
            case 0:
                printf("\nSoy el hijo, mi PID es %d y mi PPID es %d. Ejecuto %s\n", getpid(), getppid(),argv[i]);
                if (execv (argv[i], argv) < 0)
                {
                    printf("Error en la invocacion a %s\n",argv[i]);
                    exit(1);
                }
                sleep(5);
                i=argc;
            break;
            default:
                if(i==0)
                {
                    printf("Soy el padre, mi PID es %d y ejecuto %s\n", getpid(),argv[i]);

                }
                wait(0);
        }
    }
    printf("\nFinal de ejecucion de %d \n", getpid());
    exit(0);
}
