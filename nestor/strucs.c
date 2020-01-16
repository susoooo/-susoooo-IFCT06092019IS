
#include <stdio.h>
#include <math.h>
int main()
{
struct data{
   int dia;
   int mes;
   int ano;
}
struct xogador
{
   char nome[30];
   char apellido1[30];
   char apellido2[30];
   char nomeArtistico[30];
   struct data dataNacemento;
   struct data dataContrato;
   char equipo[30];
   int tantos;
   float altura;   
}

struct xogador xogadoresFederados[5000];

struct xogador novaFicha()
{
   struct xogador resultado;
   
   gets(resultado.nome);
   gets(resultado.apellido1);
   gets(resultado.apellido2);
   gets(resultado.nomeArtistico);
   printf("Introduce día de nacemento:\n");
   scanf("%d",&resultado.dataNacemento.dia);
   printf("Introduce mes de nacemento:\n");
   scanf("%d",&resultado.dataNacemento.mes);
   printf("Introduce ano de nacemento:\n");
   scanf("%d",&resultado.dataNacemento.ano);

   printf("Introduce día de contrato:\n");
   scanf("%d",&resultado.dataContrato.dia);
   printf("Introduce mes de contrato:\n");
   scanf("%d",&resultado.dataContrato.mes);
   printf("Introduce ano de contrato:\n");
   scanf("%d",&resultado.dataContrato.ano);

  gets(resultado.equipo);
  scanf("%d",&resultado.tantos);
  scanf("%f",&resultado.altura);

 return(resultado);
}  