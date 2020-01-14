#include <stdio.h>
#include <math.h>
#include <stdlib.h>

factorial()
{
	int n1;
	n1 = 0;
	int contador;
	int factorial;
	factorial = 0;
	contador =0;
	for(contador=0;contador<=n1;contador--)
	{
		if(contador!=0)
		{
		scanf ("%d",&n1);
		factorial = n1 * contador;
		printf ("%d",factorial);
		}
	}
	return (factorial);
}
main()
{
	factorial();
	return (0);
}
		