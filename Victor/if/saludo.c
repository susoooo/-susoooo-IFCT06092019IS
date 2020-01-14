#include<stdio.h>
int main()
{
int dia;
int sexo;
int error;


dia=0;
sexo=0;
error=0;


printf("Introduce el momento del día:\n1.Mañana\n2.Tarde\n3.Noche\n");
scanf("%d", &dia);

	if (dia == 1)
	{
		printf("Buenos días ");
        }
	else
	{
		if (dia == 2)
		{
			printf("Buenas tardes ");
		}
		else
		{
			if (dia == 3)
			{
				printf("Buenas noches ");	
			}
			else
			{
				error=1;
				
			}
		}
        }
	
	if (error == 0)
	{
		printf("Introduce el sexo:\n1.Masculino\n2.Femenino\n");
		scanf("%d", &sexo);
		if (sexo == 1)
		{
			printf("Señor\n");
       		}
		else
		{
			if (sexo == 2)
			{
				printf("Señora\n");
			}
			else
			{
				printf("ERROR\n");
			}
		}
			
	}	
	else
	{
		printf("ERROR\n");
	}
       
 	
}
