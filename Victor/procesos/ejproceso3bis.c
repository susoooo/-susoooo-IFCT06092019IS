#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <wait.h>

int main()
{
    pid_t rf;
    int i;
    for (i = 0; i <= 3; i++)
    {
        switch (rf)
        {
            case -1:
                printf("\nNo he podido crear el proceso hijo");
            break;
            case 0:
                printf("Soy el hijo, mi PID es %d y mi PPID es %d\n", getpid(), getppid());
                sleep(5);
                if(i<=2)
                {
                    rf = fork();
                }
            break;
            default:
                if(i==0)
                {
                printf("Soy el padre, mi PID es %d\n", getpid());
                rf = fork();
                }
                wait(0);
        }
    }
    printf("\nFinal de ejecucion de %d \n", getpid());
    exit(0);
}
