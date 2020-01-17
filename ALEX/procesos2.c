#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

pid_t rf;
int hijos;
int contador;
int main(int argc,char*argv[])
{
     scanf("%d",&hijos);
     for (contador=0;contador<hijos;contador++)
     {
        rf = fork();
        switch(rf)
        {
            case -1:
                    printf("No he podido crear el proceso hijo \n");
                    break;
            case 0 :
                    execv("./programa1.out",argv);
                    printf("un hijo");
                    break;
            default:
                    wait(0);
        }


     }printf("Soy el padre\n");
      exit(0);
}



























