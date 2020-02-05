#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void main()
{
     int fd[2];
     pid_t pid;
	 pipe(fd); 
     pid = fork();
	 
	  switch(pid){     
          case -1: 
                printf("No se ha podido crear un hijo \n");
                exit(-1);
                break;
          case 0: 
                close(fd[0]); 
                printf("Escriba lo que le salga del bolo\n");
				scanf("%s",&buffer);
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