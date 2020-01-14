#include<stdio.h>
int main()
{
int x;
int y;
int z;

y=0;
x=0;
z=0;

printf("Introduce un valor para x :");
scanf("%d",&x);
printf("Introduce un valor para y :");
scanf("%d",&y);
printf("Introduce un valor para z :");
scanf("%d",&z);

	 if (x > y && x > z)
	{
		printf("X es el número mayor = %d\n",x);
		if (y > z)
		{
			printf("Y es el segundo número mayor = %d\n",y);
			printf("Z es el número menor = %d\n",z);
		}
		else
		{
			printf("Z es el segundo número mayor = %d\n",z);
			printf("Y es el número menor = %d\n",y);
		}
        }
	else if(y > x && y > z)
	{
		printf("Y es el número mayor = %d\n",y);
		if (x > z)
		{
			printf("X es el segundo número mayor = %d\n",x);
			printf("Z es el número menor = %d\n",z);
		}
		else
		{
			printf("Z es el segundo número mayor = %d\n",z);
			printf("X es el número menor = %d\n",x);
		}
	}	
        
	else if(z > x && z > y)
	{
		printf("Z es el número mayor = %d\n",z);
		if (x > y)
		{
			printf("X es el segundo número mayor = %d\n",x);
			printf("Y es el número menor = %d\n",y);
		}
		else
		{
			printf("Y es el segundo número mayor = %d\n",y);
			printf("X es el número menor = %d\n",x);
		}
	}	
	
       
 	
}
