#include<stdio.h>
int main()
{
int x;
int y;

y=0;
x=0;

printf("Introduce un valor para x :");
scanf("%d",&x);
printf("Introduce un valor para y :");
scanf("%d",&y);

	if (x > y)
	{
		printf("X es el número mayor = %d\n",x);
		printf("Y es el número menor = %d\n",y);
        }
	else if (x == y)
	{
		printf("Los números son iguales\n");
		
        }
	else 
	{
		printf("Y es el número mayor = %d\n",y);
		printf("X es el número menor = %d\n",x);
	}
}

