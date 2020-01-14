#include <stdio.h>
#include <math.h>

main()
{

//VARIABLES

int a_actual;
int a_destino;
int resultado;

//INICIALIZACION

a_actual=0;
a_destino=0;
resultado=0;

//PROGRAMA

printf("LA MÁQUINA DEL TIEMPO\n");
printf("Introduzca el año actual:\n");
scanf("%d",&a_actual);
printf("Introduzca el año de destino:\n");
scanf("%d",&a_destino);

	if(a_actual>=a_destino)
	{
	resultado=a_actual-a_destino;
	printf("Han transcurrido %d años desde %d hasta %d\n",resultado,a_destino,a_actual);
	}
	else
	{
	resultado=a_destino-a_actual;
	printf("Faltan %d años para llegar desde %d a %d\n",resultado,a_actual,a_destino);
	}

}



