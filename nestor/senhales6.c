/*Diseñar un programa que trate la señal SIGINT ( CTRL-C) y se quede a la espera por una señal
Cada vez que reciba la señal SIGINT debe abrir para añadir en el fichero señales.txt, 
y escribir su número de proceso y el número de señal Recibida. Terminar el proceso 
enviándole cualquier otra señal.*/

#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>

void a (int);
int contador;
FILE * manejadorarchivo;


int main()
{
pid_t idProceso;
contador=0;
idProceso = fork();
//printf("-"); se pueden poner printf a lo largo del programa cuando se construye para saber hasta donde llega cuando hay errores
switch(idProceso)
    {  
	case-1:
    perror ("No se puede lanzar proceso");
	break;
	case 0:
    //printf("/");
    if (signal(SIGINT, a)==SIG_ERR)
    perror("Error");
    usleep(100000);
	break;
	default:
    //printf("\\");
    usleep(10000);
    kill (idProceso,SIGINT);
    break; 
    }
    return(0);
}  

void a (int numeroSenhal)
    {
    int valor;
    valor = 0;
    //printf("*");
    fflush(stdout);    
    manejadorarchivo=fopen("/home/nestor/Documentos/repositorionestor/IFCT06092019IS/nestor/señales.txt","a+b");
    if(manejadorarchivo==0)
      {
      perror("error o leer o archivo");   
      }
      else
          {      
          valor = getpid();   
          fwrite(&valor,sizeof(int),1,manejadorarchivo);
          fwrite(&numeroSenhal,sizeof(int),1,manejadorarchivo);
          fclose(manejadorarchivo);
          }
   }