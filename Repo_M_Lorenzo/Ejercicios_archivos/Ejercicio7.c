#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE * pFichero;
    char *pRuta;
    int leidos;
    int contador;
    long tam;
    long res_hor;
    long res_ver;
    long pixels;

    struct BMP
    {
        char tipo[2];
        char tamano[4];
        char reservado1[2];
        char reservado2[2];
        char offset[4];
        char t_header[4];
        char ancho[4];
        char alto[4];
        char c_planos[2];
        char b_pixel[2];
        char compresion[4];
        char tamano_imagen[4];
        char resolucion_x[4];
        char resolucion_y[4];
        char num_colores[4];
        char colores_imp[4];
    };

    struct BMP *pImagen;
    void *pDatos;
    
    

    pRuta=malloc(sizeof(char)*1024);
    pImagen=malloc(sizeof(struct BMP));
    printf("Introduzca la ruta de la imagen:\n");
    scanf("%s",pRuta);
    

    pFichero=fopen(pRuta,"rb");

    if(pFichero==0)
    {
        perror("Ha habido un error\n");
    }
    else
    {
        pDatos=pImagen;
        leidos=fread(pDatos,sizeof(struct BMP),1,pFichero);

    }
    tam=(16777216*pImagen->tamano[3])+(65536*pImagen->tamano[2])+(256*pImagen->tamano[1])+pImagen->tamano[0];
    res_hor=(16777216*pImagen->resolucion_x[3])+(65536*pImagen->resolucion_x[2])+(256*pImagen->resolucion_x[1])+pImagen->resolucion_x[0];
    res_ver=(16777216*pImagen->resolucion_y[3])+(65536*pImagen->resolucion_y[2])+(256*pImagen->resolucion_y[1])+pImagen->resolucion_y[0];
    pixels=(16777216*pImagen->tamano_imagen[3])+(65536*pImagen->tamano_imagen[2])+(256*pImagen->tamano_imagen[1])+pImagen->tamano_imagen[0];

    if(pImagen->compresion[0]==0)
    {
        printf("La imagen no esta comprida\n");
    }
    else
    {
        printf("La imagen esta comprida\n");
    }
    
    printf("El tamaño de la imagen es: %ld bytes\n",tam);
    printf("La resolucion horizontal es: %ld pixels\n",res_hor);
    printf("La resolucion vertical es: %ld pixels\n",res_ver);
    printf("El tamaño es de: %ld pixels\n",pixels);
    

    free(pRuta);
    free(pImagen);
    fclose(pFichero);


    return(0);
}