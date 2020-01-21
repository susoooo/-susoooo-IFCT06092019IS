/*2.Un proceso (raíz) que solicite un número entero N entre 3 y 21, y con dicho número
genere un arreglo de N elementos en donde el contenido del arreglo será el número que
le corresponde en el arreglo; por ejemplo, para N = 10, tendríamos el siguiente arreglo:
0 1 2 3 4 5 6 7 8 9
El proceso raíz deberá crear tres procesos hijos, cada uno de los cuales tendrá acceso a
una parte del arreglo (usted define qué sección del arreglo), deberá sumar los elementos
del arreglo que le corresponden (que desde luego son arreglos disjuntos), y enviar el
resultado al proceso padre para que este finalmente imprima el resultado.*/


#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int N;
    N=0;
    int numero[21];
    int contador;
    int cont1;
    int cont2;
    int cont3;
    int seccion1;
    int seccion2;
    int seccion3;
    int lonxitude;
    int suma;

    contador=0;
    cont1=0;
    cont2=0;
    cont3=0;
    seccion1=0;
    seccion2=0;
    seccion3=0;
    lonxitude=0;
    suma=0;

    pid_t fillo1;
    pid_t fillo2;
    pid_t fillo3;

    printf("Por favor, introduce un número enteiro entre 3 e 21: ");
    scanf("%d", &N);

    if (N>=3 && N<=21)
    {
        for (contador=0; contador<N; contador++)
        {
            numero[contador]=contador; //gardamos o valor 0 na posición 0, 1 na posición 1, etc.
        }

        lonxitude=N/3;
        
        fillo1 = fork();
        switch (fillo1) 
            {
                case -1:
                printf("Non se puido crear o proceso fillo\n");
                break;

                case 0:
                printf("Son o fillo 1, o meu PID é %d e o meu PPID é %d \n", getpid(), getppid());
                for (cont1=0;cont1<lonxitude;cont1++)
                {
                  suma=suma+numero[cont1];
                }
                printf("O resultado da suma dos números da primeira sección é = %d\n",suma);
                exit(0);
                break;

                default:
                printf("Son o pai, o meu PID é %d e o PID do meu fillo1 é %d \n", getpid(), fillo1);
                wait(0);
        
                fillo2 = fork();
                    switch (fillo2)
                    {
                        case -1:
                        printf("Non se puido crear o proceso fillo\n");
                        break;

                        case 0:
                        printf("Son o fillo 2, o meu PID é %d e o meu PPID é %d \n", getpid(), getppid());
                        for (cont1=(lonxitude);cont1<(lonxitude)*2;cont1++)
                        {
                            suma=suma+numero[cont1];
                            
                        }
                            printf("O resultado da suma dos números da segunda sección é = %d\n",suma);
                            exit(0);
                        break; 

                        default:
                            wait(0);
                                
                
                            fillo3 = fork();
                                switch (fillo3)
                                {
                                    case -1:
                                    printf("Non se puido crear o proceso fillo\n");
                                    break;

                                    case 0:
                                    printf("Son o fillo 3, o meu PID é %d e o meu PPID é %d \n", getpid(), getppid());
                                    for (cont1=((lonxitude)*2);cont1<N;cont1++)
                                    {
                                        suma=suma+numero[cont1];
                                    } 
                                    printf("O resultado da suma dos números da terceira sección é = %d\n",suma);
                                    exit(0);
                                    break; 

                                    default:
                                    wait(0);
                                }

                    }        printf("Pasade prá casa!\n");

                }

            




    }
    else
    {
        printf("O número introducido é erróneo. Introduce un número entre 3 e 21\n");
    }
    
    

}