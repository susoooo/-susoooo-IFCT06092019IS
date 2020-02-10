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
    int velocidad;

    public://De aquí en adelante los miembros son públicos a no ser que se exprese lo contrario
    bool encendido;//Acceso público
    bool apagado;
    bool abierto;
    bool cerrado;
     
	int encender(); 
	int apagar();
    void abrir();
    void cerrar();
    void regularvelocidad();
    };

int Micoche::encender()
    {
        if(not encendido)
        {
	    encendido=true;
    }   }
int Micoche::apagar()
    {
       if(not apagado)
        {
	    apagado=true; 
        }
    }
void Micoche::abrir()
    {
        if(not abierto)
        {
	    abierto=true; 
        }
	 
    }
void Micoche::cerrar()
    {
        if(not cerrado)
        {
	    cerrado=true; 
        }
	
    }
    
void Micoche::regularvelocidad()
    {


    }

int main()
{
	Micoche obj;
	obj.encender();
	obj.apagar();
	obj.abrir();
	obj.regularvelocidad();
	return 0;
}