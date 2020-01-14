//Diseñe un programa que lea un array de 15 elementos por teclado y lo muestre por pantalla usando punteros.

#include <stdio.h>
#include <math.h>


int main()
{
	int elementos [15];
	int contador1;
	contador1=0;
	
	int * punteiro;
	
	
	printf("Introduce 15 elementos numéricos:\n");
	
	for(contador1=0;contador1<15;contador1++)
		
		scanf("%d",&elementos[contador1]);
		
		punteiro=elementos;
		for(contador1=0;contador1<15;contador1++)
		printf("Elementos do array número %d\n",*(punteiro+contador1));
		
		
		return(0);
}