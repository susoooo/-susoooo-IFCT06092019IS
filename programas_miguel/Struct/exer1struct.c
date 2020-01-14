/*Crear un programa que pida al usuario los nombres, edades, y alturas, de 10 jugadores.
Posteriormente le presentará un menú que le permita: 
1. Listar los nombres de los jugadores; 
2. Listar las alturas de los jugadores; 
3. Listar las edades de los jugadores; 
4.Buscar un jugador por su nombre y presentar su altura y su edad; 
5. Indicar la edad y el nombre del jugador más alto de la lista.*/


#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	int contador;
	contador=0;
	int opcion;
	opcion=0;
	char pidonome[30];
	float maisalto;
	maisalto=0;
	int resultado;
	resultado=0;
	
	struct xogador
	{
	   char nome[30];
	   int idade;
	   float altura;   
	};
	
	
		struct xogador meuxogador[3];
		
			
		for(contador=0;contador<3;contador++)
		{
			
			printf("Introduce o nome: \n");
			gets(meuxogador[contador].nome);
		
			printf("Introduce a idade: \n");
			scanf("%d",&meuxogador[contador].idade);
			
			printf("Introduce a altura: \n");
			scanf("%f",&meuxogador[contador].altura);
			
			getchar ();
		}
		
	do 
	{
		printf("Escolle 1 para listar os nomes dos xogadores\n");
		printf("Escolle 2 para listar as alturas dos xogadores\n");
		printf("Escolle 3 para listar as idades dos xogadores\n");
		printf("Escolle 4 para buscar un xogador polo seu nome e presentar a súa altura e a súa idade;\n");
		printf("Escolle 5 para indicar a idade e o nome do xogador máis alto da lista\n");
		printf("Escolle 0 pra saír do programa\n");
		scanf("%d",&opcion);
			
		switch (opcion)
	{
		case 1:
			printf("\nEscolliches listar o nomes dos xogadores:\n");
			for(contador=0;contador<3;contador++)
			 {
			   puts(meuxogador[contador].nome); //puts para imprimir cadenas de caracteres
			 }
			break;
			
		case 2:
			
			printf("\nEscolliches listar as alturas dos xogadores:\n");
			for(contador=0;contador<3;contador++)
			 {
			   printf("%f\n",meuxogador[contador].altura);
			 }
			break;
			
		case 3:
			
			printf("\nEscolliches listar as idades dos xogadores:\n");
			for(contador=0;contador<3;contador++)
			 {
			   printf("%d\n",meuxogador[contador].idade);
			 }
			break;
			
		case 4:
		
			printf("Introduce o nome do xogador que queres ver: ");
			scanf("%s",pidonome);
			for(contador=0;contador<3;contador++)
			{
				if (strcmp(pidonome,meuxogador[contador].nome)==0) //strcmp compara primeiro parámetro co segundo (con ==0)
				{
				printf("%s %f %d \n",meuxogador[contador].nome,meuxogador[contador].altura,meuxogador[contador].idade);
				}	
			}
			break;
		
		case 5:
			printf("Escolliches ver a idade e o nome do xogador máis alto da lista: \n");
			for(contador=0;contador<3;contador++)
			{
				if(maisalto<meuxogador[contador].altura)
					{
						maisalto=meuxogador[contador].altura;
						resultado=contador; //En resultado queda almacenado o índice desa "liña"
					}	
			}
			printf("O xogador máis alto é %s\n", meuxogador[resultado].nome);
			printf("A sua altura: %f\n", meuxogador[resultado].altura);
			printf("A súa idade: %d\n",meuxogador[resultado].idade);
			break;
			
			case 0: 
			printf("Escolliches saír do programa\n");
			break;
		
			default: 
		
			printf("Cometiches un erro ó introducir o número\n\n"); 
	}
		
		
			
	}
	
		
		while(opcion!=0);
		
		
			return(0);
		}