/* Exercicio 2. Versión 2 con chamada a programas mediante o paso de parámetros (ver PDF Exercicios Procesos)*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) //argc é o número de argumentos co que se chama o programa. argv son os argumentos(prog1, prog2...)
{

int num; //número de parámetros
int contador;
num=0;
contador=0;

pid_t fillo;


//printf("Por favor, introduce o número de fillos que queres crear: ");
//scanf("%d",&num);

printf("Pasáronme %d parámetros\n", argc);
for (num=0;num<argc;num++)
{
    printf("O argumento %d é %s\n", num, argv[num]);
}
for (contador=0; contador<argc-2; contador=contador+1)
    {
        fillo = fork();
        switch (fillo) 
            {
            case -1:
            printf("Non se puido crear o proceso fillo\n");
            break;

            case 0:
            printf("Son o fillo %d, o meu PID é %d e o meu PPID é %d \n", contador+1,getpid(), getppid());
            printf("Vou executar %s\n",argv[contador+2]);
            fflush(stdout);
            execv(argv[contador+2],NULL);
            break;
            
            default:
            printf("Son o pai, o meu PID é %d e o PID do meu fillo1 é %d \n", getpid(), fillo);
            wait(0);
            }
    }    

printf("Final de execución de %d \n", getpid());
exit(0);

}
