/* Exercicio 2 (ver PDF Exercicios Procesos*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main() 
{

int num;
int contador;
num=0;
contador=0;

pid_t fillo;


printf("Por favor, introduce o número de fillos que queres crear: ");
scanf("%d",&num);

for (contador=0; contador<num; contador=contador+1)
    {
        fillo = fork();
        switch (fillo) 
            {
            case -1:
            printf("Non se puido crear o proceso fillo\n");
            break;

            case 0:
            printf("Son o fillo %d, o meu PID é %d e o meu PPID é %d \n", contador+1,getpid(), getppid());
            exit(0);
            break;
            
            default:
            printf("Son o pai, o meu PID é %d e o PID do meu fillo1 é %d \n", getpid(), fillo);
            wait(0);
            }
    }    

printf("Final de execución de %d \n", getpid());
exit(0);

}