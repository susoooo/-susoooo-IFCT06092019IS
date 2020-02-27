/*1-Toma la clase persona que has definido en el ejercicio 1 del boletín C++Objetos_03a.txt. 
A partir de ella crea una clase asalariado que guarde información sobre el sueldo que cobra la persona neto al mes y la retención 
que se le aplica en la nómina. Crea al menos un constructor y un los correspondientes métodos de get y set.*/

#include <iostream>
#include <string>
#include <string.h>

using namespace std;

class Persoa
{
    //Propiedades:
	char nome[15]; //Variable de clase
	char apelido1[15];
    char apelido2[15];
    char paisnac[15];
    int DNI;  

    //Métodos
    public:
	void terconciencia();
    void reproducirse();
    void falar();  
    void fliparse();
};

// Clase derivada Asalariado:
class Asalariado : public Persoa {

  int Sueldoneto;
  int Retencion;

  public:
  Asalariado();
  Asalariado(int Sueldoneto, int Retencion);
  void setSueldoneto(int novovalor); //co set: void indica o que recollemos(nada!); o int indica o que imos enviar(novovalor), 
  void setRetencion(int novovalor); 
  int getSueldoneto(void); //co get: o int indica o que recollemos; o void indica o que imos enviar (nada!)
  int getRetencion(void);

  //protected:  
};

//Configuración dos construtores:

Asalariado::Asalariado()
{
    Sueldoneto=0; 
    Retencion=0;    
}

Asalariado::Asalariado(int recolloSueldoneto, int recolloRetencion)
{
    Sueldoneto=recolloSueldoneto;
    Retencion=recolloRetencion;   
}


//Métodos set e get
void Asalariado::setSueldoneto(int novovalor)
{
	Sueldoneto = novovalor;
}

int Asalariado::getSueldoneto(void)
{
	return Sueldoneto;
}


void Asalariado::setRetencion(int novovalor)
{
	Retencion = novovalor;
}

int Asalariado::getRetencion(void)
{
	return Retencion;
}



int main()
{

//Creamos os obxectos:
    Asalariado Pepe;
    Asalariado Pepa (1200, 15);

//Usamos get e set
Asalariado obj;
	
	obj.setSueldoneto(1300);
	cout<<obj.getSueldoneto()<<endl;

	obj.setRetencion(17);
	cout<<obj.getRetencion()<<endl;

  return(0);
}



