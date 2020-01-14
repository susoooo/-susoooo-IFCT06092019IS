#include <stdio.h>
int main()
{
FILE * pfich; //manexador
void *pDatos;
int leidos;
pfich=fopen("miarchivo.txt","rt"); //abrimos arquivo con fopen e asignamos resultado da chamada ó manexador
pDatos=malloc(sizeof(char));
do
{
   leidos = fread(pDatos,sizeof(char),1,pfich);
   prinf("%c",pDatos);
}
while(!feof(pfich));
fclose(pfich);
free(pDatos);
return(0);
}

/*
Explicación:
int fclose(FILE *fichero)
EOF=End OF File
size_t fread(void *puntero,size_t tamaño,size_t nregistros,FILE *fichero)
sizeof(char)*5
sizeof(int)
sizeof(int)*2
sizeof(struct xogador)*/