#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main()
{
    pid_t rf;
    pid_t rs;
    pid_t rr;
    rf = fork();
        switch(rf)
        {
            case -1:
                    printf("No he podido crear el proceso hijo \n");
                    break;
            case 0:
                    printf("Soy el hijo 1, mi PID es %d y mi PPID es %d \n", getpid(), getppid());
                    sleep(20); //suspende el proceso 20 segundos
                    break;
            default:
                    printf("Soy el padre, mi PID es %d y el PID de mi hijo es %d \n", getpid(), rf);
                    wait(0); //suspende el proceso 30 segundos. Acaba antes el hijo.
                    rs = fork();
                        switch (rs)
                        {
                            case -1:
                                    printf("No he podido crear el proceso hijo \n");
                                    break;
                            case 0:
                                    printf("Soy el hijo 2, mi PID es %d y mi PPID es %d \n", getpid(), getppid());
                                    sleep(20); //suspende el proceso 20 segundos
                                    break;
                            default:
                                    printf("Soy el padre, mi PID es %d y el PID de mi hijo es %d \n", getpid(), rf);
                                    sleep(30); //suspende el proceso 30 segundos. Acaba antes el hijo.
                                    rr = fork();
                                        switch (rr)
                                        {
                                            case -1:
                                                    printf("No he podido crear el proceso hijo \n");
                                                    break;
                                            case 0:
                                                    printf("Soy el hijo 3, mi PID es %d y mi PPID es %d \n", getpid(), getppid());
                                                    sleep(20); //suspende el proceso 20 segundos
                                                    break;
                                            default:
                                                    printf("Soy el padre, mi PID es %d y el PID de mi hijo es %d \n", getpid(), rf);
                                                    sleep(30); //suspende el proceso 30 segundos. Acaba antes el hijo.

                                        }
                        }
        }
            printf("Final de ejecución de %d \n", getpid());
            exit(0);
}



























