#include <signal.h>
#include <unistd.h>
#include <stdio.h>

void controlador (int numeroSenhal)
{
	printf ("Acción ignorada \n");
}

void sinal (int numerosinal)
{
	if(numerosinal==SIGTERM)
    {
        printf ("Fin de ejecución \n");
        signal (SIGTERM, SIG_DFL);
        kill(getpid(), SIGTERM);
    }
    else
    {
       if(numerosinal==SIGUSR1)
        {
            printf ("He recibido la señal SIGUSR1 \n");
        }
        else
        {
        if(numerosinal==SIGUSR2)
            {
                printf ("He recibido la señal SIGUSR2 \n");
            }
        }
    }
    sleep (3);
}


int main()
{
	if (signal (SIGINT, controlador) == SIG_ERR)
	{
		perror ("No se puede cambiar signal");
	}

	signal (SIGUSR1, sinal);
	signal (SIGUSR2, sinal);
	signal (SIGTERM, sinal);

	kill(getpid(), SIGUSR1);
	kill(getpid(), SIGUSR2);
    kill(getpid(), SIGTERM);

	while (1) pause ();
}


