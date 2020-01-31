#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

#define LIMIT 100

struct datos
{
    int c1;
    int c2;
};

int array1[LIMIT][LIMIT];
int array2[LIMIT][LIMIT];
int array3[LIMIT][LIMIT];

void *multiplica(void *arg)
{
    int temp;
    int z;
    int x;
    int y;
    struct datos *p=(struct datos*)(arg);
    x=(p->c1);
    y=(p->c2);

    temp=0;
    for(z=0;z<LIMIT;z++)
    {
        temp += array1[x][z] * array2[z][y];
        array3[x][y] = temp;
    }

}

int main()
{
    int z;
    int x;
    int y;
    struct datos param;
    pthread_t th1[LIMIT][LIMIT];


    for (x=0;x<LIMIT;x++) //Rellena
	{
		for(y=0;y<LIMIT;y++)
		{
		    array1[x][y]=rand()%100;
		    array2[x][y]=rand()%100;
		}
	}

    for (param.c1=0;param.c1<LIMIT;param.c1++) //Multiplica
	{
        for(param.c2=0;param.c2<LIMIT;param.c2++)
        {
            pthread_create(&th1[param.c1][param.c2], NULL, multiplica, (void*)&param);
            pthread_join(th1[param.c1][param.c2], NULL);
        }
	}

	for (x=0;x<LIMIT;x++) //Imprime array1
	{
		for(y=0;y<LIMIT;y++)
		{
		    printf("%d ", array1[x][y]);
		}
		printf("\n");
	}
	printf("\n");
    for (x=0;x<LIMIT;x++) //Imprime array2
	{
		for(y=0;y<LIMIT;y++)
		{
		    printf("%d ", array2[x][y]);
		}
		printf("\n");
	}
	printf("\n");
    for (x=0;x<LIMIT;x++) //Imprime array resultado
	{
		for(y=0;y<LIMIT;y++)
		{
		    printf("%d ", array3[x][y]);
		}
		printf("\n");
	}
	printf("\n");

}
/*Time con un thread para cada dato
LIMIT 100
real	0m0,004s
user	0m0,000s
sys	0m0,002s
LIMIT 1000
real	0m19,358s
user	0m6,335s
sys	0m8,424s
LIMIT 1000000
Error de compilación
*/
