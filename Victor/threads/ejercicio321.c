#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

#define LIMIT 100

int array1[LIMIT][LIMIT];
int array2[LIMIT][LIMIT];
int array3[LIMIT][LIMIT];

int main()
{
    int y;
    int x;
    int z;
    int temp;

    for (x=0;x<LIMIT;x++)
	{
		for(y=0;y<LIMIT;y++)
		{
		    array1[x][y]=rand()%100;
		    array2[x][y]=rand()%100;
		}
	}

	for (x=0;x<LIMIT;x++)
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

	for (x=0;x<LIMIT;x++)
	{
		for(y=0;y<LIMIT;y++)
		{
		    printf("%d ", array1[x][y]);
		}
		printf("\n");
	}
	printf("\n");
    for (x=0;x<LIMIT;x++)
	{
		for(y=0;y<LIMIT;y++)
		{
		    printf("%d ", array2[x][y]);
		}
		printf("\n");
	}
	printf("\n");
    for (x=0;x<LIMIT;x++)
	{
		for(y=0;y<LIMIT;y++)
		{
		    printf("%d ", array3[x][y]);
		}
		printf("\n");
	}
	printf("\n");
}
/*Time sin threads
LIMIT 100
real	0m0,001s
user	0m0,001s
sys	0m0,000s
LIMIT 1000
real	0m6,591s
user	0m4,122s
sys	0m0,081s
LIMIT 1000000
Error de compilación
*/
