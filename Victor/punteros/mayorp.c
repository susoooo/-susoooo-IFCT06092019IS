#include <stdio.h>

void buscar(int mat[][20], int nc, int nf, int * max, int * min)
{
	int contafilas;
	int contacolumnas;
	int maximo;
	int minimo;
	contafilas=0;
	contacolumnas=0;
	maximo=0;
	minimo=0;
	
	maximo=mat[0][0];
	for (contacolumnas=0;contacolumnas<nc;contacolumnas++)
	{
		for (contafilas=0;contafilas<nf;contafilas++)
		{	
			if(maximo< mat[contacolumnas][contafilas])
			{
				maximo=mat[contacolumnas][contafilas];
			}	
		}
	}	
	*max=maximo;

	minimo=mat[0][0];
	for (contacolumnas=0;contacolumnas<nc;contacolumnas++)
	{
		for (contafilas=0;contafilas<nf;contafilas++)
		{	
			if(maximo> mat[contacolumnas][contafilas])
			{
				maximo=mat[contacolumnas][contafilas];
			}	
		}
	}	
	*min=minimo;
}

int main()
{
	int puntmax;
	int puntmin;
	int filas;
	int columnas;
	int contafilas;
	int contacolumnas;
	int elementos [20][20];
	filas=0;
	columnas=0;
	contafilas=0;
	contacolumnas=0;
	
	printf("Calcular mayor y menor de una matriz\nIntroduzca el número de filas(1-20): ");
	scanf("%d", &filas);
	printf("Introduzca el número de columnas(1-20): ");
	scanf("%d", &columnas);
	
	for (contacolumnas=0;contacolumnas<columnas;contacolumnas++)
	{
		for (contafilas=0;contafilas<filas;contafilas++)
		{	
		printf("Introduzca el elemento %d - %d: ",contacolumnas+1, contafilas+1);
		scanf("%d", &elementos[contacolumnas][contafilas]);
		}
	}
	buscar(elementos,columnas,filas,&puntmax,&puntmin);
	printf("Maximo= %d\nMinimo= %d\n", puntmax, puntmin);
}