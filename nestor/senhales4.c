/*Realizar un programa en C que, ante las siguientes señales, 
responda de la siguiente manera
Al recibir una señal SIGUSR1 muestre el mensaje “He recibido la señal SIGUSR1”
Al recibir una señal SIGUSR2 muestre el mensaje “He recibido la señal SIGUSR2”
Al recibir una señal SIGTERM muestre el mensaje “Fin de ejecución” y termine su ejecución
Al recibir una señal SIGINT, la ignore.*/

#include <stdio.h>
#include <sys/types.h>
#include <signal.h>
#include <unistd.h>

void trataSenhal1 (int);
void trataSenhal2 (int);
void trataSenhal3 (int);
void trataSenhal4 (int);

main()
{
	pid_t idProceso;
	idProceso = fork();
    switch(idProceso)
    {   
		case-1:
            perror ("No se puede lanzar proceso");
			break;
		case 0: 
                signal (SIGUSR1, trataSenhal1);// señal que queremos recibir , e a funcion a ejecutar 
                signal (SIGUSR2, trataSenhal2);
                signal (SIGTERM, trataSenhal3);
                signal (SIGINT, trataSenhal4);
			    while (1) pause ();
			    break;
		default: 
			while (1)
                {
                sleep (1);
                kill (idProceso, SIGUSR1);
                sleep (1);
                kill (idProceso, SIGUSR2);
                sleep (1);
                kill (idProceso, SIGTERM);
                sleep (1);
                kill (idProceso, SIGINT);
                }
	}
}
void trataSenhal1 (int numeroSenhal)
    {
    printf ("He recibido la señal SIGUSR1\n");
    }
void trataSenhal2 (int numeroSenhal)
    {
    printf ("He recibido la señal SIGUSR2\n");
    }
void trataSenhal3 (int numeroSenhal)
    {
    printf ("Fin de ejecucion\n");
    }
 void trataSenhal4 (int numeroSenhal)
    {
    signal (SIGINT, SIG_DFL);
    }