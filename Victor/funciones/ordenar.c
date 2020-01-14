#include <stdio.h>

float ordenar(float parametro1[], int parametro2)
{
	float menor;
	int contador;
	int contador2;
	contador=0;
	contador2=0;
	menor=0;

	/*for (contador2=0;contador2<parametro2;contador2++)
	{
		for(contador=0;contador<parametro2-1;contador++)
		{
			if(parametro1[contador] > parametro1[contador+1])
			{
					menor=parametro1[contador];
					parametro1[contador]=parametro1[contador+1];
					parametro1[contador+1]=menor;
			}		
		}	
	}*/
	
	if(parametro2==1)
	{
		printf("%.0f \n", parametro1[parametro2]);
	}	
	else
	{
		if(parametro1[parametro2] < parametro1[parametro2+1])
		{
			parametro2--;
		}
		else
		{
			menor=parametro1[parametro2];
			parametro1[parametro2]=parametro1[parametro2+1];
			parametro1[parametro2+1]=menor;
			parametro2--;
		}	
		printf("%.0f \n", parametro1[parametro2]);
		ordenar(parametro1+1,parametro2);	
		
	}	
	
	
	/*for (contador=0;contador<;contador++)
	{
		printf("%.0f ", parametro1[contador]);
	}
		printf("\n");*/
}

int main()
{
	int numeros;
	int contador;
	float elementos [100];
	numeros=0;
	contador=0;
	
	printf("Ordenar números.\nIntroduzca el número de elementos que se solicitarán: ");
	scanf("%d", &numeros);
	
	for (contador=0;contador<numeros;contador++)
	{
		printf("Introduzca el elemento %d: ",contador+1);
		scanf("%f", &elementos[contador]);
	}
	ordenar(elementos,numeros);

}