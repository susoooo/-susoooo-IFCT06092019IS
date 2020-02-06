#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void main()
{	
	FILE * fichero;
    void *pDatos;
    char buffer[1024];
    int fd[2];
	int leidos;
    pid_t pid;
	pipe(fd); 
    pid = fork();
	 
	  switch(pid)
	  {     
          case -1: 
                printf("No se ha podido crear un hijo \n");
                exit(-1);
                break;
          case 0: 
                close(fd[0]); 
                fichero=fopen("insultator.txt","wt");
				pDatos=malloc(sizeof(char)*1024);
				if(fichero==0)
				{
					perror("Ha habido un error\n");
				}
				else
				{
					pDatos=malloc(sizeof(char));
					do
					{     
						leidos=fread(pDatos,sizeof(char),1,fichero);
						printf("%s",pDatos);
					} while (!feof(fichero));
					fclose(fichero);
					free(pDatos);
				}
                write(fd[1],buffer, 299);
                break;
          default: 
                close(fd[1]);
                wait(NULL); 
                printf("El padre lee el PIPE \n");
                read(fd[0], buffer, 299);
                printf("\t Mensaje leido: %s \n", buffer);
     }
}