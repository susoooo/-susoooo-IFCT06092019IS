#include <stdio.h>
#include <math.h>
#define INICIALIZACIONES 	int numero1; int numero2; numero1 = 0; numero2 = 0;

int cod_error;
int opcion;
opcion = 0;



int bienvenida()
{
	printf("Bienvenido a  CALCUPLUS\n");
	printf("by Alex\n");
	printf("Version 3.0\n");
	return (0);
}
int menu()
{
	 printf("1 SUMA,2 RESTA,3 MULTIPLICACION,4 DIVISION,0 SALIR\n");
     scanf("%d",&opcion);
	return (0); 
}
int suma()
{
	INICIALIZACIONES
	int suma;
	suma = 0;
	printf("NUMERO 1\n");
	scanf("%d",&numero1);
    printf("NUMERO 2\n");
    scanf("%d",&numero2);	
	suma = numero1 + numero2;
    printf("%d\n",suma);
	return (suma);
}
int resta()
{
	INICIALIZACIONES
	int resta;
	resta = 0;
	printf("NUMERO 1\n");
	scanf("%d",&numero1);
    printf("NUMERO 2\n");
    scanf("%d",&numero2);	
	resta = numero1 - numero2;
    printf("%d\n",resta);
	return (resta);
}
int multi()
{
	INICIALIZACIONES
	int producto;
	producto = 0;4
	printf("NUMERO 1\n");
	scanf("%d",&numero1);
    printf("NUMERO 2\n");
    scanf("%d",&numero2);	
	producto = numero1 * numero2;
    printf("%d\n",producto);
	return (producto);
}
float divi()
{
	INICIALIZACIONES
	float division;
	division = 0.0;
	printf("NUMERO 1\n");
	scanf("%d",&numero1);
    printf("NUMERO 2\n");
    scanf("%d",&numero2);	
	division = (float)numero1 / numero2;
	if (division==0 && numero1!=0)
	{ 
		printf ("ERROR Num., %d\n", cod_error);
	}
	else
	{
		printf("%f\n",division);
	}
	return (division);
}
int despedida()
{
	printf("Gracias por utilizar  CALCUPLUS\n");
	return (0);
}
int error()
{
	printf("ERROR\n");
	return (0);
}
int main()
{	
	cod_error = -1000;
	bienvenida();
	do
	{
		menu();
		switch (opcion)
		{
			case 1: suma();
					break;
			case 2: resta();
					break;
			case 3: multi();
					break;
			case 4: divi();
					break;
			case 0: break;
			default: error();
		}
	}
	while (opcion !=0);
	despedida();
	return (0);
	
	
}
