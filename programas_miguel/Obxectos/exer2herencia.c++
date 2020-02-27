/*2-A partir de la clase asalariado, define ahora un par de clases: obrero y médico. En la clase obrero, guarda el nombre del cargo
 que desempeña. Para la clase médico, guarda información sobre la cantidad de pacientes que tiene a su cargo. Crea los constructores
 y metodos get y set que creas necesarios.*/


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
};

//Configuración dos construtores (Asalariado):

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


//Métodos set e get (Asalariado)
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

//------------------------------

// Clase derivada Obrero:
class Obrero : public Asalariado 
{
    char Cargo[15];

    public: //Construtor:
    Obrero(char[]);   
};

// Clase derivada Medico:
class Medico : public Asalariado 
{
    int numPacientes;

    public: //Construtor:
    Medico(int);
};

//Configuración do construtor (Obrero):
Obrero::Obrero(char recolloCargo[])
{
    strcpy(Cargo, recolloCargo); 
}

//Configuración dos construtores (Medico)
Medico::Medico(int recolloNumPac)
{
numPacientes=recolloNumPac;
}

/*TO DO Configurar os métodos get e set*/

//Métodos set e get (Obrero)



//Métodos set e get (Medico)


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