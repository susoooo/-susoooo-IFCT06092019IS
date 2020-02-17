#include <unistd.h>  
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEER 0 
#define ESCRIBIR 1

long factorial (int n)
{
    long producto;
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
    int t_lectura[2];
    int t_escritura[2];
    int numero;
    int num_factorial;
    long producto;
    long resultado;
    
    pid_t pid;

    

    pipe(t_lectura); // Se crea el PIPE
    pipe(t_escritura);

    pid = fork();

    switch(pid)
    {     
        case -1: // Error
        {
            printf("No se ha podido crear un hijo \n");
            exit(-1);
            break;
        }
        case 0: // Hijo
        {   
            close(t_lectura[ESCRIBIR]); 
            read(t_lectura[LEER],&num_factorial,sizeof(int));
            printf("Calculando factorial...\n");
            producto=factorial(num_factorial);
            printf("Enviado el resultado...\n");
            close(t_escritura[LEER]);
            write(t_escritura[ESCRIBIR],&producto,sizeof(long));
            break;
        }
        default: // Padre
        {
            close(t_lectura[LEER]);
            printf("Introduzca el numero para calcular el factorial:\n");
            scanf("%d",&numero);
            write(t_lectura[ESCRIBIR], &numero, sizeof(int));
            wait(pid); // Espera a que finalice el hijo
            close(t_escritura[ESCRIBIR]);
            read(t_escritura[LEER],&resultado,sizeof(long));
            printf("\t El resultado es: %ld \n",resultado);
        }
    }
    
    return(0);
}