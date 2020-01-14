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

	 if (x % 2 == 0)
	{
		printf("X es un número par = %d\n",x);
        }
	else
	{
		printf("X es un número impar = %d\n",x);
        }
       
 	if (y % 2 == 0)
	{
		printf("Y es un número par = %d\n",y);
        }
	else
	{
		printf("Y es un número impar = %d\n",y);
        }
 	if (z % 2 == 0)
	{
		printf("Z es un número par = %d\n",z);
        }
	else
	{
		printf("Z es un número impar = %d\n",z);
        }
}
