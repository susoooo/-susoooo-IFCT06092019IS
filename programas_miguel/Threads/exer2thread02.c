/*2.Crea un programa que calcule el factorial de un número usando threads. El programa pedirá el número del que se quiere calcular el factorial, 
y el número de threads que se desean utilizar para el cálculo. Creará tantos threads como se le indiquen y dividirá el calculo del factorial 
entre los threads indicados.*/

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int fact;

void *ffactorial (void *numrecibido)
{
   
    int cont1;
    cont1=0;
    
    fact=1;

    int * pvalor;
    int valor;
    pvalor = (int *)numrecibido;
    valor = *pvalor;

    //Cálculo do factorial do número recibido por parámetro:
    
    for (cont1=1; cont1<=valor; cont1++)
        {
            fact = fact*cont1;
        }
    printf("O factorial do número pasado é: %d \n",fact);
    pthread_exit(&fact);
}


int main()
{

int numthread;
int numero;
int contador;
int *presultado;
int resultado;

numthread=0;
numero=0;
contador=0;
resultado=0;

printf("Por favor, introduce o número do que queres calcular o factorial: ");
scanf("%d", &numero);

printf("Introduce o número de threads que queres utilizar para o cálculo: ");
scanf("%d", &numthread);

pthread_t thread1;

    for (contador = 1; contador <= numthread; contador++)
    {
        pthread_create(&thread1, NULL, ffactorial, (void *) &numero);
        pthread_join(thread1, (void*)presultado);
        resultado = * (int *)presultado;
        printf("%d %d",resultado,fact);
    
        fflush(stdout);
    }

return 0;
}














