#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void senhal (int);

int main()
{
	pid_t idProceso;
    int opcion;

	idProceso = fork();

    switch(idProceso)
    {   
		case -1: 
            perror ("No se puede lanzar proceso");
			break;
		case 0: 
            signal (SIGUSR1,senhal);
            signal (SIGUSR2,senhal);
            signal (SIGTERM,senhal);
            signal (SIGINT,senhal);
			while (1)	pause ();
			break;
		default: 
			while (1)
			{
                sleep(1);
                printf("Escoger la señal a enviar:\n");
                printf("1- SIGUSR1\n");
                printf("2- SIGUSR2\n");
                printf("3- SIGTERM\n");
                printf("4- SIGINT\n");
                scanf("%d",&opcion);
				switch(opcion)
                {
                    case 1:
                    {
                        kill (idProceso, SIGUSR1);
                        break;
                    }
                    case 2:
                    {
                        kill (idProceso, SIGUSR2);
                        break;
                    }
                    case 3:
                    {
                        kill (idProceso, SIGTERM);
                        break;
                    }
                    case 4:
                    {
                        kill (idProceso, SIGINT);
                        break;
                    }
                    default:
                    {
                        break;
                    }

                }
				
			}
	}

    return(0);
}
void senhal (int numeroSenhal)
{
    switch(numeroSenhal)
    {
        case SIGUSR1:
        {
            printf("He recibido la señal SIGUSR1\n");
            break;
        }
        case SIGUSR2:
        {
            printf("He recibido la señal SIGUSR2\n");
            break;

        }
        case SIGTERM:
        {
            printf("Fin de ejecución\n");
            kill(getppid(),SIGTERM);
            break;
        }
        case SIGINT:
        {
            printf("Ignorando señal SIGINT\n");
            break;
        }
        default:
        {
            printf("Otro tipo de señal recibida\n");
            break;
        }
            
    }

}