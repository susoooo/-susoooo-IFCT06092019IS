/*1.Escribir un programa que cree un proceso padre y un proceso hijo. Entre ellos se establecerá
una tubería, de tal forma que uno de ellos pedirá datos por pantalla al usuario, se los enviará 
al otro proceso, y este los imprimirá por pantalla.*/

#include <unistd.h>  
#include <stdio.h>
#include <stdlib.h>

int main()
{
     int fd[2];
     char datos[30];
     pid_t fillo;

     pipe(fd); 
     fillo = fork();

     switch(fillo)
        {     
          case -1: 
                printf("Non foi posible crear o fillo \n");
                exit(-1);
                break;
          case 0: 
                close(fd[0]); 
                printf("Introduce os datos que queres enviar:\n");
                gets(&datos);
                write(fd[1], datos, 10);
                break;
          default: 
                close(fd[1]); 
                wait(NULL); 
                printf("O pai le o PIPE\n");
                read(fd[0], datos, 10);
                printf("Mensaxe lida: %s \n", datos);
        }
}
