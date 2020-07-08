/*2.Escribir un programa que cree un proceso para calcular un factorial. El programa preguntará 
por pantalla el número del cual se quiere calcular el factorial, lo enviará por una tubería 
al proceso que ha creado, y esperará a que este le envía de vuelta el resultado del cálculo. 
Tras recibirlo, el programa imprimirá el resultado del cálculo.*/

#include <unistd.h>  
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

int ffactorial (int numrecibido);

int numero;

int main()
{
    int solucion;
    int fd[2];
    
    solucion=0;

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
                read(fd[0], &numero, sizeof (int));
                ffactorial(numero);
                solucion=ffactorial(numero);
                write(fd[1], &solucion, sizeof(int)); 
                break;
                
          default: 
                numero=0;
                printf("Introduce o número do que queres calcular o factorial: ");
                scanf("%d", &numero);

                write(fd[1], &numero, sizeof (int));
                wait(5);
                read(fd[0], &numero, sizeof (int)); //variable numero cambia valor, é "pisado"
                printf("O resultado é: %d\n", numero);       
        }
}


int ffactorial (int numrecibido)
{
   int resultado;
   int cont1;

    cont1=0;
    resultado=1;
    
    //Cálculo do factorial do número recibido:
    
    for (cont1=1; cont1<=numrecibido; cont1++)
        {
            resultado = resultado*cont1;
        }
    return(resultado);
}