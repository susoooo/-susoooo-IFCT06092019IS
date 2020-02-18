/*3.- Realizar un programa que cree un proceso hijo que realizara un ciclo de espera por señal, 
el proceso padre debe permanente enviar cada 5 segundo la señal SIGUSR1 al proceso hijo. 
El proceso hijo, debe escribir un mensaje por pantalla cada vez que reciba la señal. 
Cuando el proceso hijo haya recibido 3 veces consecutivas la señal SIGUSR1 provocará 
la muerte del padre y su propia terminación.*/

#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <stdio.h>

void sinal1 (int);
int contador;


int main()
{
	pid_t fillo;
    contador=0;
	fillo = fork();
    switch(fillo)
    {   
		case -1: 
            perror ("No se puede lanzar proceso");
			break;

		case 0: 
            signal (SIGUSR1, sinal1);
			
            while (1)  
            {
                 pause ();
            
            }
            
            break;

		default: 
         while(1)
         {
			sleep (5);
			kill (fillo, SIGUSR1);
         }

	}
}

void sinal1 (int numeroSinal1)
{
    printf ("He recibido la señal SIGUSR1\n");

    contador=contador+1;
    if (contador==3)
    {
        kill(getppid(), SIGTERM);
        kill (getpid(), SIGTERM);
    }
       
}