#include <stdio.h>
#include <math.h>

main()
{

//Variables

int numero1;
int numero2;
int opcion;
int contador;


//Inicializacion

numero1=0;
numero2=0;
opcion=0;
contador=0;

//Programa


//Bucle opcion par o impares
	
printf("Seleccione par o impar\n");
printf("1-Opcion par\n");
printf("2-Opcion impar\n");
scanf("%d",&opcion);
	
	switch(opcion)
	{
		case 1:		
			printf("OPCION PAR\n");
			printf("Introduzca el primer numero:\n");
			scanf("%d",&numero1);
			printf("Introduzca el segundo numero:\n");
			scanf("%d",&numero2);
			if (numero1>=numero2)
				{
					for(contador=numero2;contador<=numero1;contador++)
					{
						if(contador%2==0)
						{	
						printf("%d\n",contador);
						}
					}
				}
			else
				{
					for(contador=numero2;contador>=numero1;contador--)
					{
						if(contador%2==0)
						{	
						printf("%d\n",contador);
						}
					}
				}
			break;
			
		case 2:	
			printf("OPCION IMPAR\n");
			printf("Introduzca el primer numero:\n");
			scanf("%d",&numero1);
			printf("Introduzca el segundo numero:\n");
			scanf("%d",&numero2);
			if (numero1>=numero2)
				{
				for(contador=numero2;contador<=numero1;contador++)
					{
						if(contador%2==1)
						{	
						printf("%d\n",contador);
						}
					}
				}
			else
				{
				for(contador=numero2;contador>=numero1;contador--)
					{
						if(contador%2==1)
						{	
						printf("%d\n",contador);
						}
					}
				}
			break;
			
		default:
			printf("Opcion no valida");
	}

}
