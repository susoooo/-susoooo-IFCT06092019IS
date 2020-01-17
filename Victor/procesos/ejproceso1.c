#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <wait.h>

int main()
{
    pid_t rf;
    rf = fork();
    switch (rf)
    {
        case -1:
            printf("\nNo he podido crear el proceso hijo");
        break;
        case 0:
            printf("Soy el hijo, mi PID es %d y mi PPID es %d\n", getpid(), getppid());
            sleep(10);
        break;
        default:
            printf("Soy el padre, mi PID es %d\n", getpid());
            wait(0);
            rf = fork();
            switch (rf)
            {
                case -1:
                    printf("\nNo he podido crear el proceso hijo");
                break;
                case 0:
                    printf("Soy el hijo, mi PID es %d y mi PPID es %d\n", getpid(), getppid());
                    sleep(10);
                break;
                default:
                    wait(0);
                    rf = fork();
                    switch (rf)
                    {
                        case -1:
                            printf("\nNo he podido crear el proceso hijo");
                        break;
                        case 0:
                            printf("Soy el hijo, mi PID es %d y mi PPID es %d\n", getpid(), getppid());
                            sleep(10);
                        break;
                        default:
                            wait(0);
                    }
            }
    }
    printf("\nFinal de ejecucion de %d \n", getpid());
    exit(0);
}
