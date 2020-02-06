#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEER 0 
#define ESCRIBIR 1
 
int main()
{
    pid_t pid[15];
    
    int t1[2];
    int t2[2];
    int contador;

    for(contador=0;contador<15;contador++)
    {
        pid[contador]=fork();

        switch(pid[contador])
        {     
            case -1: // Error
            {
                printf("No se ha podido crear un hijo \n");
                exit(-1);
                break;
            }
            case 0: // Hijo
            {   
                int i;
                char lectura[4];
                char escritura[9];
                int pid;
                
                close(t1[ESCRIBIR]);
                close(t2[LEER]);
                pid=getpid();
                strcpy(escritura,"CONTANDO");
                //while(1)
                {
                    for(i=1;i<=10;i++)
                    {
                        sleep(1);
                        read(t1[LEER],&lectura,sizeof(char)*4);
                        write(t2[ESCRIBIR],&escritura,sizeof(char)*9);
                        write(t2[ESCRIBIR],&i,sizeof(int));
                        write(t2[ESCRIBIR],&pid,sizeof(int));
                    }   
                }
            }
            default: // Padre
            {

                close(t1[LEER]);
                close(t2[ESCRIBIR]);

                char escritura[4];
                char lectura[9];
                int i;
                int num_pid;
                strcpy(escritura,"FIN");

                while(1)
                {
                    write(t1[ESCRIBIR],&escritura,sizeof(char)*4);
                    read(t2[LEER],&lectura,sizeof(char)*9);
                    read(t2[LEER],&i,sizeof(int));
                    read(t2[LEER],&num_pid,sizeof(int));

                    printf("%s, %d seg PID: %d\n", lectura, i,num_pid);
                    fflush(stdout);
                }
            
            }
        }
    }

 
    
    return(0);
}