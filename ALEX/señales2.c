#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void trataSenhal (int);
void trataSenhal2 (int);
void trataSenhal3 (int);
main()
{
	pid_t idProceso;
	idProceso = fork();
    switch(idProceso)
	{   
		case  -1: perror ("No se puede lanzar proceso");
			break;
		case  0: signal (SIGUSR1, trataSenhal);
					 signal (SIGUSR2,trataSenhal2);
					 signal(SIGTERM, trataSenhal3);
					 signal (SIGINT, SIG_IGN);
			while (1)	pause ();
			break;
		default: 
			while (1)
			{
				sleep (1);
				kill (idProceso, SIGUSR1);
				sleep(1);
				kill (idProceso, SIGUSR2);
				sleep(1);
				kill (idProceso,SIGTERM);
				sleep(1);
			}
	}
}
	void trataSenhal (int numeroSenhal){	
	printf("He recibido la señal SIGUSR1\n");}
	void trataSenhal2 (int numeroSenhal2){	
	printf("He recibido la señal SIGUSR2\n");}
	void trataSenhal3 (int numeroSenhal3){	
	printf("Fin de ejecucion\n");
	kill (getppid(),SIGTERM);}
	