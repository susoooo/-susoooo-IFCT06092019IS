#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

#define LIMIT 100

int array1[LIMIT][LIMIT];
int array2[LIMIT][LIMIT];
int array3[LIMIT][LIMIT];

void *multiplica(void *arg)
{
    int temp;
    int y;
    int x;
    int z;

    for (x=0;x<LIMIT;x++) //Multiplica
	{
		for(y=0;y<LIMIT;y++)
		{
		    temp=0;
		    for(z=0;z<LIMIT;z++)
            {
                temp += array1[x][z] * array2[z][y];
                array3[x][y] = temp;
            }

		}
	}
}

int main()
{
    int y;
    int x;
    int z;
    pthread_t th1;

    for (x=0;x<LIMIT;x++) //Rellena
	{
		for(y=0;y<LIMIT;y++)
		{
		    array1[x][y]=rand()%100;
		    array2[x][y]=rand()%100;
		}
	}

	pthread_create(&th1, NULL, multiplica, NULL);

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
/*Time con un thread
LIMIT 100
real	0m0,026s
user	0m0,008s
sys	0m0,003s
LIMIT 1000 (las ultimas multiplicaciones fallan)
real	0m4,272s
user	0m2,133s
sys	0m0,018s
LIMIT 1000000
Error de compilación
*/
