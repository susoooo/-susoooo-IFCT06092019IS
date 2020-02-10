/*Realizar un programa que cree un proceso hijo que realizara un ciclo de espera por señal
el proceso padre debe permanente enviar cada 5 segundo la señal SIGUSR1 al proceso hijo. 
El proceso hijo, debe escribir un mensaje por pantalla cada vez que reciba la señal. 
Cuando el proceso hijo haya recibido 3 veces consecutivas la señal SIGUSR1 provocará la 
muerte del padre y su propia terminación.*/
#include <stdio.h>
#include <sys/types.h>
#include <signal.h>
#include <unistd.h>

void trataSenhal (int);
int contador;
contador=0;

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
                signal (SIGUSR1, trataSenhal);// señal que queremos recibir , e a funcion a ejecutar 
			    while (1) pause ();
                if (contador>=3)
                    {
                    kill(getpid,SIGTERM);
                    kill(getppid,SIGTERM);
                    }
			    break;
		default: 
			for (contador=0;contador<3;contador++)
                {
                sleep (5);
                kill (idProceso, SIGUSR1);
                }
                
    }
}

void trataSenhal (int numeroSenhal)
    {
    printf ("He recibido la señal SIGUSR1\n");
    }