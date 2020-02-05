#include <signal.h>
#include <unistd.h>
#include <stdio.h>

void controlador (int numeroSenhal)
{
    struct dato
    {
        int proceso;
        int sinal;
    };
    struct dato datos;
    FILE * pfich;
    int escritos;
    int leidos;

	printf ("Señal registrada: %d \nNúmero de proceso: %d \n",numeroSenhal,getpid());
	pfich=fopen("señales.txt", "ab");
    datos.proceso=getpid();
    datos.sinal=numeroSenhal;
    escritos=fwrite(&datos, sizeof(struct dato), 1, pfich);
    fclose(pfich);
}

int main()
{
	if (signal (SIGINT, controlador) == SIG_ERR)
	{
		perror ("No se puede cambiar signal");
	}

	while (1) pause ();
}
