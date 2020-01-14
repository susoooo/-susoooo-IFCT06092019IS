#include <stdio.h>
#include <math.h>
#define DATOS int n1;int n2;int n3;n1 = 0;n2 = 0;n3 = 0;scanf ("%d",&numeros[0]);scanf ("%d",&numeros[1]);scanf ("%d",&numeros[2]);

int  numeros [3];
int contador;
int mayor()
{
	
	int mayor;
	mayor = 0;
	

	for (contador=0;contador<3;contador++)
	{
		if(mayor<numeros[contador])
		{
			mayor= numeros[contador];
		}
	}	printf("%d",mayor);
	return (mayor);
}
int menor()
{
	
	int menor;
	menor = 10000000;
    
		for (contador=0;contador<3;contador++)
	{
		if(menor>numeros[contador])
		{
			menor = numeros[contador];
		}
	}	printf("%d",menor);
	return (menor);
}
int main()
{
	for (contador=0;contador<3;contador++)
  {
	DATOS
	mayor();
	menor();
	return (0);
  }
}