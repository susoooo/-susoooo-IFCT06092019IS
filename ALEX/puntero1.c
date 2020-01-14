#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int suma()
{
	int n1;
	int n2;
	int suma;
	int * punt;
	n1 = 0;
	n2 = 0;
	suma = 0;
	punt = &n1;
	
	scanf("%d",&n1);
	* punt = 7;
	
	scanf("%d",&n2);
	* punt = 6;
	suma = n1+ *punt;
	printf ("%d",suma);
	return (suma);
}
int main()
{
	suma();
	return(0);
}
	

