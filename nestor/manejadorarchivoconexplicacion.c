#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
 FILE * manejadorarchivo;//file * es un puntero especial que maneja archivos
 void *espaciomemoria;/*utilizamos void pa definir un punteiro que non sabemos
seguro se vai ser se enteiro,float etcc.. despois cando usemos espaciomemoria teremos 
que definilo, espaciomemoria=malloc(sizeof(char))*/
 int contador;//definimos un contador para luego contar los caracteres leidos
 contador = 0;//inicializamos contador
 int leidos;/*definimos leidos que sera la variable que nos ira leendo e dando valor 1
 mentres haxa algo que leer*/
 manejadorarchivo=fopen("/home/nestor/Documentos/miarchivo.txt","rb");/*utilizamos
el nombre del puntero que le asignamos "manejadorarchivo" para abrir el archivo con fopen esto
es lo primero que se tiene hacer siempre antes de leer escribir o cualquier cosa
hay que abrirlo IMPORTANTE. 
Despues se escribe la ruta (/home/nestor/Documentos)
en caso de linux y (c:\Documentos\) para windows, el nombre del archivo "miarchivo.txt", 
y despues el tipo de apertura que queremos,"rt" en este caso r significa 
solo lectura y debe existir y "t" de texto, si no sabemos que es seguro 
texto ponemos b de binario que valdria para cualquier archivo aunque si 
sabemos seguro que vaser texto sera mas eficiente con t.

r: solo lectura.Debe existir.
w: escritura. fichero novo. sobreescribe.
a: añadir. coloca al final archivo. si no existe lo crea.
r+:leer y escribir.El archivo debe existir.
w+:leer y escribir.fichero novo. sobreescribe.
a+:añadir, leer y escribir. se coloca al final. Si no existe, crea.
t:texto.
b:binario.
"rwa" ="a+"*/
if(manejadorarchivo==0)
  {
   perror("error o leer o archivo");   
  }
else
   {
    espaciomemoria=malloc(sizeof(char));// e asignamos un espacio de memoria
     do //facemos un do while para que nos valla leendo os dato
        {
        leidos = fread(espaciomemoria,sizeof(char),1,manejadorarchivo);
/*para leer utilizamos fread o primeiro prarametro que utilizamos e donde esta gardada
a memoria "espaciomemoria" o 2º seria o tamaño do registro "sizeof(char)"e o 3º o numero de 
registros que vamos a leer en este caso sera 1 
pero pode ser diferente e por ultimo o manejador de archivo.*/
       contador=contador+leidos;
         
          printf("%c",*(char *)espaciomemoria);/*despois del leer os datos imprimimolos
          e temos que forzar o tipo xa que espaciomemoria tiñamoslle asignado un void 
          enton decimoslle que e un char e poñemoslle o asterisco para que colla o dato
          ou contenido do punteiro*/
          
        }
 //cerramos parentesis e facemos o while
while(!feof(manejadorarchivo));/* EOF = End OF File cando chege o final da lectura
da resultado "tru"polo que he pertfecto para facer un while o do while e que nos
lea metres haxa datos */
printf("\n\n%d caracteres leidos",contador);
printf("\n\n");
fclose(manejadorarchivo);//cerramos o manejadorarchivo
free(espaciomemoria);//liberamos o espaciomemoria
return(0);//devolvemos o valor de 0 a funcion main
    }
}
//e cerramos o main
/*size_t fread(void *puntero,size_t tamanho,size_t nregistros,FILE *fichero)
explicacion sobre a estructura dun fread utilizamos size_t devido a que diferentes
sistemas operatidos poden ter distintos valores de un enteiro,double etcc size-t 
e un numero que lle asigna o sistema operativo para que non haxa confusions. 
normalmente chart e int si suelen ter un valor comun en diferentes 
sistemas operativos polo que outra forma de facelo seria multiplicar char en int
por nuemeros para conseguir o valor que queramos dun folat ou double
sizeof(char)*5
sizeof(int)
sizeof(int)*2
sizeof(struct xogador)*/