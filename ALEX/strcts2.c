#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int perimetro;
	
	int lado1;
	int lado2;
	int lado3;
	
	
struct coordenadas
{
	int xA;
	int yA;
	int xB;
	int yB;
	int xC;
	int yC;
};


 int main()
{	
	struct coordenadas resultado;
	printf("INTRODUCE COORDENADA X\n");
	scanf("%d",&resultado.xA);
	printf("INTRODUCE COORDENADA Y\n");
	scanf("%d",&resultado.yA);
	printf("INTRODUCE COORDENADA X\n");
	scanf("%d",&resultado.xB);
	printf("INTRODUCE COORDENADA Y\n");
	scanf("%d",&resultado.yB);
	printf("INTRODUCE COORDENADA X\n");
	scanf("%d",&resultado.xC);
	printf("INTRODUCE COORDENADA Y\n");
	scanf("%d",&resultado.yC);
	lado1= sqrt((resultado.xB-resultado.xA)*(resultado.xB-resultado.xA)+(resultado.yB-resultado.yA)*(resultado.yB-resultado.yA));
	lado3= sqrt((resultado.xC-resultado.xB)*(resultado.xC-resultado.xB)+(resultado.yC-resultado.yB)*(resultado.yC-resultado.yB));
	lado3= sqrt((resultado.xA-resultado.xC)*(resultado.xA-resultado.xC)+(resultado.yA-resultado.yC)*(resultado.yA-resultado.yC));
	perimetro=lado1+lado2+lado3;
	printf("%d",perimetro);
	printf("\n");
	
	return (perimetro);
	
    
}
	