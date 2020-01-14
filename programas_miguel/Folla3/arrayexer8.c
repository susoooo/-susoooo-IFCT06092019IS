#include <stdio.h>
#include <math.h>

int numpiso;
int numporta;
numpiso=0;
numporta=0;

int maior(int pepe[6][4]) //nome diferente (pepe) e "dicímoslle" como é o array: [6][4]
{
	int maiorhab;
	maiorhab=0;
	int contador1;
	int contador2;
	contador1=0;
	contador2=0;
		
for(contador1=0;contador1<6;contador1++)
{
	for(contador2=0;contador2<4;contador2++)
	{	
		if (maiorhab<pepe[contador1][contador2])
		{
		maiorhab=pepe[contador1][contador2];
		numpiso=contador1;
		numporta=contador2;
		}
	}	
}

return(maiorhab);
}



int main()
{

int habitantes [6][4];
char porta[4]={'A','B','C','D'};
int cont1;
int cont2;
int resultado;
cont1=0;
cont2=0;


printf("Introduce o número de habitantes de cada vivenda.\n\n");

for(cont1=0;cont1<6;cont1++)
{
	for(cont2=0;cont2<4;cont2++)
	{
		//habitantes[cont1][cont2];
		printf("Piso %d, porta %c:\n", cont1+1, porta[cont2]);
		scanf("%d",&habitantes[cont1][cont2]);
		
	}
}

resultado = maior(habitantes);

printf("A porta %c do piso %d ten o maior número de habitantes con %d \n\n",porta[numporta],numpiso+1,resultado);


return (0);
}