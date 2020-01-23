#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

float n;

void *calcular(void *arg)
{
    int *resultado;
    int contador;
    int *numero;

	resultado=0;
	numero=(int*)arg;
	resultado=(int *)malloc (sizeof (int));
	*resultado=1;

	for (contador=*numero; contador>(*numero)-n; contador--)
    {
        printf(" %d x ",contador);
        *resultado=(*resultado)*(contador);
    }
    printf("= %d \n",*resultado);
    pthread_exit(resultado);
}

int main()
{
    pthread_t th[50];
    int i;
    int e;
    int num;
    int numero;
    double total;
    int control;
    int *resultado;

    i=0;
    e=0;
    num=0;
    numero=0;
    control=0;
    total=1;
    do
	{
		printf("Introduce un número para calcular su factorial: ");
		scanf("%d", &numero);
		if(numero<1)
        {
            printf("El número debe ser mayor que 1\n");
        }
	}
	while(numero<=1);
    do
    {
        printf("¿Cuantos threads quieres ejecutar? ");
        scanf("%d", &num);
        if(num>50 || num<1)
        {
            printf("Introduce un número entre 1 y 50\n");
        }
    }
    while (num>50 || num<1);

    while (numero % num != 0)
    {
        total=total*numero;
        printf(" %d x ",numero);
        numero=numero-1;
        control=1;
    }
    if (control==1)
    {
        printf("= %lf \n",total);
    }

    n=numero/num;
    e=n;
    for (i=0;i<num;i++)
    {
        pthread_create(&th[i], NULL, calcular, (void *) &e);
        pthread_join(th[i], (void *)&resultado);
        e=e+n;
        total=total*(*resultado);
    }

    printf("Total = %lf\n",total);
}
