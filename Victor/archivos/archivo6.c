#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE * pfich;
    FILE * pfichcopia;
    void * pDatos;
    char * pe;
    char e;
    char nombre[40];
    char copia[40];
    int leidos;
    int escritos;

    leidos=0;
    escritos=0;
    e='e';
    pe=&e;

    do
   {
      printf("Introduce el nombre del fichero a copiar: ");
      gets(nombre);

      pfich=fopen(nombre, "rt");

      if (pfich == NULL)
      {
          printf("No existe el fichero\n");
      }
    }
    while (pfich == NULL);

    pDatos=malloc(sizeof(char));

    strcpy(copia,"copia_con_e_de_");
    strcat(copia,nombre);
    pfichcopia=fopen(copia, "wt");

    do
    {
        leidos=fread(pDatos,sizeof(char),1,pfich);
        if(*(char *)pDatos=='a')
        {
            escritos=fwrite(pe, sizeof(char), 1, pfichcopia);
        }
        else
        {
            escritos=fwrite(pDatos, sizeof(char), 1, pfichcopia);
        }

    }
    while (!feof(pfich));

    fclose(pfich);
    fclose(pfichcopia);
    free(pDatos);
    return(0);
}
