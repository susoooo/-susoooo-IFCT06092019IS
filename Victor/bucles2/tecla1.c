#include <stdio.h>

int main()
{
int tecla;
tecla=0;


	while(tecla!=1)
	{
	
		printf("Pulsa la tecla 1: \n");
		scanf("%d", &tecla);
		if (tecla==1)
		{
			printf("Gracias\n");
		}
		else
		{
			printf("Tecla incorrecta\n");
		}
	}
	
}
