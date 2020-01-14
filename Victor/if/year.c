#include<stdio.h>
int main()
{
int year1;
int year2;
int calculo;

year1=0;
year2=0;
calculo=0;

printf("Introduce el año actual: ");
scanf("%d",&year1);
printf("Introduce otro año: ");
scanf("%d",&year2);


	 if (year1 >= year2)
	{
		calculo=year1-year2;
		if (calculo != 0)
		{
			printf("Han pasado %d años desde %d hasta %d\n", calculo, year2, year1);
		}
		else
		{
			printf("Has introducido el mismo año\n");
		}
        }
	else
	{
		calculo=year2-year1;
		printf("Faltan %d años desde %d hasta %d\n", calculo, year1, year2);
        }
       
 	
}
