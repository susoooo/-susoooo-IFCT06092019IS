#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEER 0 
#define ESCRIBIR 1


void senhal (int numeroSenhal)
{
    switch (numeroSenhal)
    {
        case SIGUSR1:
        {    
            printf("Cerrando proceso\n");
            kill(getppid(),SIGUSR2);
            kill(getpid(),SIGTERM);
            break;
        }
        
        case SIGUSR2:
        {
            printf("Fin\n");
            kill(getpid(),SIGTERM);
            break;        
        }
        
        default:
            break;
    }

}

int main()
{
    int t_insulto[2];
    char insulto_archivo[30];
    char insulto[30];
    pid_t pid;

    

    pipe(t_insulto); // Se crea el PIPE

    pid = fork();

    switch(pid)
    {     
        case -1: // Error
        {
            printf("No se ha podido crear un hijo \n");
            exit(-1);
            break;
        }
        case 0: // Hijo
        {   
            FILE *pfich;
            pfich=fopen("insultator.txt", "r");
            if (pfich==NULL)
            {
                perror("No hay archivo");
            }
            else
            {   
                while(1)
                {  
                    if(feof(pfich))
                    {
                        rewind(pfich);
                        
                    }
                    
                    fscanf (pfich,"%s\x0A",insulto_archivo);
                    sleep(1);
                    close(t_insulto[LEER]); 
                    write(t_insulto[ESCRIBIR],&insulto_archivo,sizeof(char)*30);
                    
                    signal (SIGUSR1,senhal);
                    break;
                }
            }
        }
        default: // Padre
        {
            while(1)
            {
                close(t_insulto[ESCRIBIR]);
                read(t_insulto[LEER],&insulto,sizeof(char)*30);
                printf("%s\n",insulto);
                fflush(stdout);
                if (strcmp(insulto,"Inutil")==0)
                {
                    printf("Xa me cansei de escoitarte\n");
                    fflush(stdout);
                    kill (pid, SIGUSR1);
                }
                signal (SIGUSR2,senhal);
                break;
            }
        }
    }
    
    return(0);
}