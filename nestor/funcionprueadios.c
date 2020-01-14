#include <stdio.h>
int mensajebienvenida()
	{
	printf("\n                               BOS DIAS PEÑITA COMO VAI \n");	
	
	return(0);
	}
int menu()
{
int seleccion;
seleccion=0;

	printf("\n                       POR FAVOR INTRODUCE UN NUMERO DEL 1 AL 5 \n");
		printf("\nSi desea cargar 1 en el resultado  introduzca     1 \n");
		printf("Si desea cargar 2 en el resultado  introduzca     2 \n");
		printf("Si desea cargar 3 en el resultado  introduzca     3 \n");
		printf("Si desea cargar 4 en el resultado  introduzca     4 \n");
		printf("Si desea cargar 5 en el resultado  introduzca     5 \n");
		scanf("%d",&seleccion);



return(seleccion);
}
int main()
{
	mensajebienvenida();
	menu();
return(0);
}