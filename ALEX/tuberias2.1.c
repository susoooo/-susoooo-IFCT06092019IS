#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define LECTURA 0
#define ESCRITURA 1
int factorial (int n)
{
    int producto;
    int i;
    
    producto=1;
    i=1;
    while(i<=n)
    {
        producto=producto*i;
        i=i+1;
            
    }

    return (producto);
}


int main()
{
     int tube1[2];
	 int tube2[2];
	 int numero;
	 int factorial;
	 int producto;
	 int resultado;
     pid_t pid;
     pipe(tube1); 
	 pipe2(tube2);
     pid = fork();
	 
	 switch(pid)
	 {     
          case -1: 
		  {
                printf("No se ha podido crear un hijo\n");
                exit(-1);
                break;
		  }
          case 0: 
		  {
                close(tube1[ESCRITURA]); 
				read(tube1[LECTURA],&factorial,sizeof(int));
                printf("Calculando\n");
				producto=factorial*(factorial);
				printf("Enviando\n");
				close(tube2[LECTURA]);
				write(tube2[ESCRITURA],&producto,sizeof(int));
				break;
		  }
          default: 
		  {
                close(tube1[LECTURA]);
				printf("Introduzca el numero para calcular el factorial:\n");
				scanf("%d",&numero);
				write(tube1[ESCRITURA], &numero, sizeof(int));
				wait(pid); 
				close(tube2[ESCRITURA]);
				read(tube2[LECTURA],&resultado,sizeof(int));
				printf("\t El resultado es: %ld \n",resultado);
		  }
	 }
		 return(0);
}
