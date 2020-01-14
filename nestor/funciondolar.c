#include <stdio.h>
#include <math.h>

int conversion()
	{
	float euro;
	float conversion;
	float dolares;
	
	dolares=0;
	euro=0;
	conversion=0;
	
	printf("\nPor favor introduce un numero de Euros para convertirlo a dolares  = ");
	scanf("%f",&euro);
	dolares=euro/1.17;
	printf("\n %f Euros son %f Dolares \n\n",euro,dolares);
	return(dolares);

	} 
	 }
   }
	{	
		char sino;
		printf("\n   - Hola soy el programa Dolar_converter diseñado para la conversion de Euros a Dolares - \n");
	   
		do
			{
			conversion();
			printf("¿quiere realizar mas coversiones s,n ?\n");
			scanf(" %c",&sino);
			} 
		while(sino=='s');
		return(0);
	}		