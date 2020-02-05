/*2.- Realizar un programa en C que, ante las siguientes señales, responda de la siguiente manera:

Al recibir una señal SIGUSR1 muestre el mensaje “He recibido la señal SIGUSR1”
Al recibir una señal SIGUSR2 muestre el mensaje “He recibido la señal SIGUSR2”
Al recibir una señal SIGTERM muestre el mensaje “Fin de ejecución” y termine su ejecución
Al recibir una señal SIGINT, la ignore.
Nuestro proceso en ejecución deberá quedar pendiente de recibir una señal cualquiera, 
terminando al recibir la señal SIGTERM o SIGKILL.*/


#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <stdio.h>

void sinal1 (int);
void sinal2 (int);
void sinal3 (int);
void sinal4 (int);

main()
{
	pid_t fillo;
	fillo = fork();
    switch(fillo)
    {   
		case -1: 
            perror ("No se puede lanzar proceso");
			break;

		case 0: 
            signal (SIGUSR1, sinal1);
			signal (SIGUSR2, sinal2);
            signal (SIGTERM, sinal3);
            signal (SIGINT, SIG_IGN); //"Cando recibas un SIGINT, ignórao"
            while (1)	pause ();
            
            break;

		default: 
			
				sleep (1);
				kill (fillo, SIGUSR1);

                sleep (1);
                kill (fillo, SIGUSR2);

                sleep (1);
                kill (fillo, SIGTERM);

                sleep (1);
                kill (fillo, SIGINT);
	}
}

void sinal1 (int numeroSinal1)
{printf ("He recibido la señal SIGUSR1\n");}

void sinal2 (int numeroSinal2)
{printf ("He recibido la señal SIGUSR2\n");}

void sinal3 (int numeroSinal3)
{printf ("“Fin de ejecución”\n");
 signal (SIGINT, SIG_DFL); //Cando recibe o SIGTERM cámbialle comportamente a SIGINT (pasa a ser o comportamento por defecto)
}



