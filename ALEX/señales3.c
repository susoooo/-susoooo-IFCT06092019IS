
#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void senhal (int);

int num_sig;

int main()
{
	pid_t idProceso;
    
    num_sig=0;

	idProceso = fork();

    switch(idProceso)
    {   
		case -1: 
            perror ("No se puede lanzar proceso");
			break;
		case 0: 
            signal (SIGUSR1,senhal);
			while (1)	pause ();
			break;
		default: 
			while (1)
			{
                sleep(5);
                kill (idProceso, SIGUSR1);
                       
			}
	}

    return(0);
}
void senhal (int numeroSenhal)
{
        
    if(numeroSenhal==SIGUSR1)
    {
        num_sig=num_sig+1;
        printf("Señal SIGUSR1 recibida %d veces\n",num_sig);
        if(num_sig==3)
        {
            kill(getppid(),SIGTERM);
            kill(getpid(),SIGTERM);
        }
    }    
}