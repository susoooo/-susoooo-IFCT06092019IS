#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    pid_t rf;
    int varfork;
    int contador;

    varfork=10;

    rf = fork();
    switch (rf) 
    {
        case -1:
            printf("No he podido crear el proceso hijo \n");
            break;

        case 0:
            for(contador=0;contador<=10;contador++)
            {
                varfork=varfork+1;
            }
            printf("Soy el hijo, mi PID es %d y mi PPID es %d \n", getpid(), getppid());
            printf("Valor de varfork: %d\n",varfork);
            sleep(20); //suspende el proceso 20 segundos
            break;

        default:
            for(contador=0;contador<=10;contador++)
            {
                varfork=varfork+10;
            }
            printf("Soy el padre, mi PID es %d y el PID de mi hijo es %d \n", getpid(), rf);
            printf("Valor de varfork: %d\n",varfork);
            sleep(30); //suspende el proceso 30 segundos. Acaba antes el hijo.
    }

    printf("Final de ejecución de %d \n", getpid());
    exit(0);
    
}