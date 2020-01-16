#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int main()
{
    pid_t pid1;
    pid_t pid2;
    pid_t pid3;


    pid1=fork();

    switch (pid1)
    {
        case -1:
            printf("No he podido crear el proceso hijo \n");
            break;

        case 0:
            printf("Soy el primer hijo, mi PID es %d y mi PPID es %d \n", getpid(), getppid());
            sleep(10);
            break;

        default:
            pid2=fork();
            switch (pid2)
            {       
                case -1:
                    printf("No he podido crear el proceso hijo \n");
                break;

                case 0:
                    printf("Soy el segundo hijo, mi PID es %d y mi PPID es %d \n", getpid(), getppid());
                    sleep(10);
                    break;

                default:
                    pid3=fork();
                    switch (pid3)
                    {
                        case -1:
                            printf("No he podido crear el proceso hijo \n");
                            break;

                        case 0:
                            printf("Soy el tercer hijo, mi PID es %d y mi PPID es %d \n", getpid(), getppid());
                            sleep(10);
                            break;

                        default:
                            waitpid(pid1);
                            waitpid(pid2);
                            waitpid(pid3);
                            printf("Soy el padre, mi PID es %d y el PID de mis hijos son %d, %d y %d\n", getpid(), pid1,pid2,pid3);
                            break;
                    }
                    
            }
            
            break;
    }

    printf("Final de ejecución de %d \n", getpid());
    exit(0);   


}