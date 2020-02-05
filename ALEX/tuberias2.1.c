#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void main()
{
     int tube1[2];
	 int tube2[2];
     pid_t pid;
	 char buffer[300];
     pipe(tube1); 
	 pipe2(tube2);
     pid = fork();
	 
	 switch(pid)
	 {     
          case -1: 
                printf("No se ha podido crear un hijo\n");
                exit(-1);
                break;
          case 0: 
                close(tube1[0]); 
                printf("Escirba el numero sobre el cual calcular el factorial\n");
				scanf("%s",&buffer);
                write(tube1[1],buffer, 299);
                break;
          default: 
                close(tube1[1]);
                wait(NULL); 
                printf("El padre calcula el factorial\n");
                read(tube1[0], buffer, 299);				
	 }
				int contador;
				int resultado;
				contador=0;
				resultado=0;
					do
					{
						if(buffer>1)
						{
							contador=buffer;
							resultado=buffer;
							while (contador<=buffer && contador>1)
							{
								printf(" %d ",contador);
								contador--;
								resultado=resultado*contador;
							}
							printf("1 = %d \n",resultado);
						}
						else
						{
							printf("El número debe ser mayor que 1\n");
						}
					}
					while(buffer<=1);

				
				
                printf("\t Mensaje leido: %s \n", buffer);
}
