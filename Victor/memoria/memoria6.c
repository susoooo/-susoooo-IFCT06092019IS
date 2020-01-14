
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    int c;
    int contador;
    int conta2;
    char temp[50];
    char ** memoria1;

    n=0;
    c=0;
    conta2=0;
    contador=0;

    printf("Introduzca el número de elementos: ");
    scanf("%d", &n);

    memoria1 = (char**) malloc(sizeof(char)*n);

    getchar();
    for (contador=0;contador<n;contador++)
	{
		printf("Introduzca el elemento %d: ",contador+1);
		//gets(memoria1[contador]);
		gets(temp);
		c = strlen(temp);
        memoria1[contador] = (char*)malloc(sizeof(char)*c);
        strcpy (memoria1[contador],temp);
	}

	for (contador=0;contador<n;contador++)
        {
            /*for (conta2=0;conta2<c;conta2++)
            {
                printf("%c",memoria1[contador][conta2]);
            }*/
            puts(memoria1[contador]);

        }
	free(memoria1);
}
