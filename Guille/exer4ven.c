FILE *pfich;
void*pDatos;
int leidos;
pfich=fopen("prueba.txt","rt");
pDatos=malloc(sizeof(char));
int n;
int contador;
contador=0;
do
 {
   leidos=fread(pDatos,sizeof(int),pfich);
   printf("%d",n);

 }
 while(!feof(pfich));
fclose(pfich);
free(pDatos);
return(0);

}
