//FUNCIÓNS: son bloques de código. Exemplo:

#include <stdio.h>
#include <math.h>

int mensaxeBenvida()
{
	printf("Ola! Probando funcións!\n");
	printf("By Miguel\n");
	
	return(0);
}

int mensaxeDespedida()
{
	printf("Probando funcións. Adeus!\n");
	printf("By Miguel\n");
	
	return(0);
}

int menu()
{
	int opcion;
	printf("Escolle a opción que desexas:\n");
	printf("Opción 1\n");
	printf("Opción 2\n");
	printf("Opción 3\n");
	printf("Opción 4\n");
	scanf("%d",&opcion);
	
	return(opcion);
}

int main ()
{
	int escollida;
	escollida=0;
	mensaxeBenvida();
	printf("\n");
	escollida=menu();
	printf("\n");
	printf("A opción escollida é: %d\n",escollida);
	
	mensaxeDespedida();
	
	
return(0);	
} 


