#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
using namespace std;

class asignatura
{
	char nombre[50];
	char codigo[50];
	public:
	void nombrar(char n[50]);
     void codificar(char n[50]);
     float nota_media();
};
	void asignatura::nombrar(char n[50])
	{
		strcpy(nombre,n);
	}

	void asignatura::codificar(char n[50])
	{
		strcpy(codigo,n);
	}

	float asignatura::nota_media()
	{
		return(10);
	}
	
class ciencias:public asignatura
{
	float notas[5];
	public:
	void int_notas(float *n);
	float nota_media_c();
}
		void ciencias::int_notas(float *n)
		{
			int contador;
			for(contador=0;contador<5;contador++)
			{
				notas[contador]=n[contador];
			}
		}
class letras:public asignatura
{
	float notas[10];
	public:
	void int_notas(float *n);
	float nota_media();
}
	void letras::int_notas(float *n)
	{
		int contador;
		for(contador=0;contador<10;contador++)
		{
			notas[contador]=n[contador];
		}
	}

	float letras::nota_media()
	{
		float suma;
		int contador;
		suma=0;

		for(contador=0;contador<10;contador++)
		{
			suma=(0.5*suma)+(0.5*notas[i]);
		}

		return(suma);
	}
class musica:public asignatura
{
	float nota;
}