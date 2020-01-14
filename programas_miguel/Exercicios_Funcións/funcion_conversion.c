#include <stdio.h>
#include <math.h>


float conversion(float euros)
{
	float dolares;
	dolares=0;
	dolares=euros/1.17;
	printf("%f son %f dólares\n",euros,dolares);
	
	return(dolares);
}


int main()
{
	float euros;
	euros=0;

	do
	{

	printf("Introduce a cantidade en Euros que queres converter a Dólares\n");
	scanf("%f",&euros);
	if(euros>0)
		{
		conversion(euros);
		}
	else
		{
			printf("Introduce un número maior que 0\n");
		}
	
	}
	
	while(euros>=0);
	
	return(0);
	
}


