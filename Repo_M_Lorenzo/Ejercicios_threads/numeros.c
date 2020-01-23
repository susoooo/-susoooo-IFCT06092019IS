
#include <stdio.h>
#include <stdlib.h>
// Ejemplo aprenderaprogramar.com
int main() 
{
    FILE* fichero;
	int i;
	int*dato;
	dato=(int*)malloc(sizeof(int));

    fichero = fopen("numeros.dat", "wt");
	
	if(fichero==0)
	{
		perror("Error el archivo no existe");
	}

	for(i=0;i<1000;i++)
	{
		*dato=i;
		fwrite(dato,1,sizeof(int),fichero);
	}
	
	free(dato);
    fclose(fichero);
    return (0);
}
