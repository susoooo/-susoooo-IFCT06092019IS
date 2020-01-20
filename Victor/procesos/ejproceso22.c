#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <wait.h>

void creaprocesos(float elementos[],int niveles)
{
    pid_t rf1;
    pid_t rf2;
    pid_t rf3;
    int status1;
    int status2;
    int status3;
    int contador;
    float x;
    float y;
    float suma;
    float suma1;
    float suma2;
    float suma3;

    contador=0;
    x=0.0;
    y=0.0;
    suma=0.0;
    suma1=0.0;
    suma2=0.0;
    suma3=0.0;

    x=niveles/3;
    y=x+x;


    if ( (rf1=fork()) == 0 )
    { /* hijo */
        printf("Soy el primer hijo (%d, hijo de %d)\n",  getpid(), getppid());
        printf("Sumo: ");
        for(contador=0;contador<x;contador++)
        {
            printf("%.2f + ",elementos[contador]);
            suma1=suma1+elementos[contador];
        }
        printf("= %.2f\n\n",suma1);
    }
    else
    {
        if ( (rf2=fork()) == 0 )
        { /* segundo hijo  */
            printf("Soy el segundo hijo (%d, hijo de %d)\n",  getpid(), getppid());
            printf("Sumo: ");
            for(contador=x;contador<y;contador++)
            {
                printf("%.2f + ",elementos[contador]);
                suma2=suma2+elementos[contador];
            }
            printf("= %.2f\n\n",suma2);
        }
        else
        {
            if ( (rf3=fork()) == 0 )
            { /* tercer hijo  */
                printf("Soy el tercer hijo (%d, hijo de %d)\n",  getpid(), getppid());
                printf("Sumo: ");
                for(contador=y;contador<niveles;contador++)
                {
                    printf("%.2f + ",elementos[contador]);
                    suma3=suma3+elementos[contador];
                }
                printf("= %.2f\n\n",suma3);
            }
            else
            {
               printf("Soy el padre %d\n", getpid());
              // printf("Sumo: %.2f + %.2f + %.2f = %.2f", suma1, suma2, suma3, suma);
               waitpid(rf1, &status1, 0);
               waitpid(rf2, &status2, 0);
               waitpid(rf3, &status3, 0);

            }

        }
    }

        printf("Final de ejecución de %d \n", getpid());
        exit(0);
}

int main()
{
    int niveles;
	int contador;
	float elementos [30];
	niveles=0;
	contador=0;

	printf("Introduzca el número de elementos que se solicitarán: ");
	scanf("%d", &niveles);

	for (contador=0;contador<niveles;contador++)
	{
		printf("Introduzca el elemento %d: ",contador+1);
		scanf("%f", &elementos[contador]);
	}
    creaprocesos(elementos,niveles);
}
