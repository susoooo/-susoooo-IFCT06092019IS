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
            signal (SIGINT,senhal);
			while (1)	pause ();
			break;
		default: 
			while (1)
			{
                sleep(1);
                printf("Escoger la señal a enviar:\n");
                printf("1- SIGUSR1\n");
                printf("2- SIGINT\n");
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
    FILE *pfich;  
    pid_t *pid;
    int *numSenhal;
    pid=(pid_t*)malloc(sizeof(pid_t)*1);
    numSenhal=(int*)malloc(sizeof(int)*1);

    pid[0]=getpid();
    numSenhal[0]=numeroSenhal;

    switch(numeroSenhal)
    {
        case SIGUSR1:
        {
            printf("He recibido la señal SIGUSR1\n");
            kill(getppid(),SIGTERM);
            kill(getpid(),SIGTERM);
            break;
        }
        
        case SIGINT:
        {
            printf("Ignorando señal SIGINT\n");
            pfich=fopen("senhales.txt","at+");
            if(pfich==0)
            {
                perror("Ha habido un error\n");
            }
            else
            {
                fwrite((void*)pid,sizeof(int),1,pfich);
                fwrite((void*)numSenhal,sizeof(int),1,pfich);
                fclose(pfich);
            }

            break;
        }
        default:
        {
            printf("Otro tipo de señal recibida\n");
            break;
        }
            
    }

}