#include <stdio.h>
#include <math.h>
#include <string.h>

int menu()
{
    int opcionMenu;
    printf("\nCalculos en matrices\n");
    printf("1-Introducir datos:\n");
    printf("2-Media de todos los valores:\n");
    printf("3-Valor maximo y valor minimo:\n");
    printf("4-Suma diagonal descendente:\n");
    printf("5-Suma diagonal ascendente:\n");
    printf("6-Suma triangulo superior:\n");
    printf("7-Suma triangulo inferior:\n");
    printf("8-Salir:\n");
    scanf("%d",&opcionMenu);
    return (opcionMenu);

}


int main()
{
	int opcion;
    int contador1;
    int contador2;
    int matriz[3][3];
    int media;
    int max;
    int min;
    int sumaDescendente;
    int sumaAscendente;
    int trianSuperior;
    int trianInferior;

    media=0;
    max=0;
    min=9;
    sumaDescendente=0;
    sumaAscendente=0;
    trianInferior=0;
    trianSuperior=0;
    do
    {
  
        opcion=menu();

        switch (opcion)
        {
            case 1://valores
            {
                for(contador1=0;contador1<3;contador1++)
                {
                    for(contador2=0;contador2<3;contador2++)
                    {
                        printf("Introduzca los valores de la matriz 3x3\n");
                        scanf("%d",&matriz[contador1][contador2]);
                    }
                }        

                break;
            }

            case 2://media
            {
                media=0;
                for(contador1=0;contador1<3;contador1++)
                {
                    for(contador2=0;contador2<3;contador2++)
                    {
                        media=media+matriz[contador1][contador2];
                    }
                }  

                media=media/9;
                printf("El valor medio es: %d\n",media);

                break;

            }

            case 3://max e min
            {
                max=0;
                min=9;
                for(contador1=0;contador1<3;contador1++)
                {
                    for(contador2=0;contador2<3;contador2++)
                    {
                        if(matriz[contador1][contador2]>max)
                        {
                            max=matriz[contador1][contador2];
                        }
                        if(matriz[contador1][contador2]<min)
                        {
                            min=matriz[contador1][contador2];
                        }
                    }
                }  
                printf("El valor maximo es:%d\n",max);
                printf("El valor minimo es:%d\n",min);

                break;
            }
            case 4://suma diagonal descendente
            {
                sumaDescendente=0;
                for (contador1= 0; contador1<3; contador1++)
                {
                    sumaDescendente=sumaDescendente+matriz[contador1][contador1];
                }
                printf("La suma de la diagonal descendente es:%d\n",sumaDescendente);
                break;
                
            }

            case 5://suma diagonal ascendente
            {
                sumaAscendente=0;
                for (contador1=2; contador1>=0; contador1--)
                {
                    contador2=(contador1-2)*(-1);
                    sumaAscendente=sumaAscendente+matriz[contador1][contador2];
                }
                printf("La suma de la diagonal ascendente es:%d\n",sumaAscendente);
                break;
            }

            case 6://suma triangulo superior
            {
                trianSuperior=0;
                for(contador1=0;contador1<=1;contador1++)
                {
                    for(contador2=contador1+1;contador2<=2;contador2++)
                    {
                        trianSuperior=trianSuperior+matriz[contador1][contador2];
                    }
                }  
                printf("La suma del triangulo superior es:%d\n",trianSuperior);

                break;
            }

            case 7://suma triangulo inferior
            {
                trianInferior=0;
                for(contador1=1;contador1<=2;contador1++)
                {
                    for(contador2=contador1-1;contador2<=1;contador2++)
                    {
                        trianInferior=trianInferior+matriz[contador1][contador2];
                    }
                }  
                printf("La suma del triangulo inferior es:%d\n",trianInferior);

                break;
            }

            case 8://Salir
            {
                printf("Gracias por usar el programa\n");
                break;
            }
        
    
            default:
            {
                printf("Opcion no valida\n");
                break;
          
            }
        
        }

    } while (opcion!=8);
	
	
	
	return(0);
}