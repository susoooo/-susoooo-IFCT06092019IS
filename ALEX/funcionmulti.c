#include <stdio.h>
#include <math.h>


multi()
{
	int n1;
	n1 = 0;
	int n2;
	n2 = 0;
	int n3;
    n3 = 0;
	int n4;
	n4 = 0;
	int multi;
	
	scanf("%d",&n1);
	scanf("%d",&n2);
	scanf("%d",&n3);
	scanf("%d",&n4);
	multi = n1*n2*n3*n4;
	
		if(multi!=0)
		{ 	
			printf ("%d",multi);
		}
		else
		{
			printf ("Introduzca numeros distitos a 0\n");
		}
	return(multi);
}
main()
{
	multi();
	return(0);
}
