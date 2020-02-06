/*3-Crea una clase que represente un coche, deberá incluir al menos 
métodos para encenderlo, apagarlo, abrirlo y cerrarlo.
Crea un programa que abra un coche, lo arranque, lo acelere hasta 
100 km/h, lo pare, lo apague y lo cierre.*/
#include <iostream>
using namespace std;

class Micoche
    {
	char color;
    char marca;
    int peso;
    int altura;
    int ancho;
    int cilindrada;

	public: //De aquí en adelante los miembros son públicos a no ser que se exprese lo contrario
	int encender(); //Acceso público
	int apagar();
    void abrir();
    void cerrar();
    void acelerar();
    void frenar();
    };

int Micoche::encender()
    {
	
    }
int Micoche::apagar()
    {
	
    }
void Micoche::abrir()
    {
	
    }
void Micoche::cerrar()
    {
	
    }
void Micoche::acelerar()
    {
	
    }
void Micoche::frenar()
    {
	
    }

int main()

{
	Micoche obj;
	obj.acelerar(100);
	
	return 0;
}