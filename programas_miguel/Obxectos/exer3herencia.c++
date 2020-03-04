/*3-Crea un programa que, utilizando las clases anteriores, cree un objeto para almacenar datos sobre una persona que no es asalariada, 
un asalariado que no es médico ni obrero, sobre dos asalariados y sobre un médico. Todos los objetos creados deberán contener datos 
en sus propiedades. Haz que el programa muestre los datos de los distintos objetos creados por pantalla.*/

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
    //Construtor:
    Persoa();
    Persoa(int DNI, char nome[]);
    //set e get:
    void setDNI(int novovalor); 
    int getDNI(void);  
    void setNome(char novovalor[]); 
    char * getNome(void); 
};

//Configuración do construtor (Persoa):
Persoa::Persoa()
{
    DNI=0; 
    strcpy(nome,"");    
}

Persoa::Persoa(int recolloDNI, char recollonome[])
{
    DNI=recolloDNI;
    strcpy(nome, recollonome); 
}

//Métodos set e get (Persoa)

void Persoa::setNome(char novovalor[])
{
	strcpy(nome, novovalor); 
}

char * Persoa::getNome(void)
{
	return nome;
}

void Persoa::setDNI(int novovalor)
{
	DNI = novovalor;
}

int  Persoa::getDNI(void)
{
	return DNI;
}


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
    //set e get:
    void setCargo(char novovalor[]); 
    char * getCargo(void);  
};

//Configuración do construtor (Obrero):
Obrero::Obrero(char recolloCargo[])
{
    strcpy(Cargo, recolloCargo); 
}


//Métodos set e get (Obrero)
void Obrero::setCargo(char novovalor[])
{
	strcpy(Cargo, novovalor); 
}

char * Obrero::getCargo(void)
{
	return Cargo;
}


// Clase derivada Medico:
class Medico : public Asalariado 
{
    int numPacientes;

    public: //Construtor:
    Medico(int);
    //set e get:
    void setnumPacientes(int novovalor); 
    int getnumPacientes(void);  
};

//Configuración do construtor (Médico)
Medico::Medico(int recolloNumPac)
{
numPacientes=recolloNumPac;
}

//Métodos set e get (Medico)
void Medico::setnumPacientes(int novovalor)
{
	numPacientes = novovalor;
}

int  Medico::getnumPacientes(void)
{
	return numPacientes;
}


int main()
{

//Creamos os obxectos:
    Asalariado Pepe;
    Asalariado Pepa (1200, 15);

    Obrero Jose ("Limpiador");
    Medico Luis (60);
    Persoa Lorito (123456789, "Lorito");

//Usamos get e set
	
	Pepe.setSueldoneto(1300);
	cout<<Pepe.getSueldoneto()<<endl;

	Pepa.setRetencion(17);
	cout<<Pepa.getRetencion()<<endl;


    Jose.setCargo("Cociñeiro");
    cout<<Jose.getCargo()<<endl;

    Luis.setnumPacientes(65);
    cout<<Luis.getnumPacientes()<<endl;

    Lorito.setDNI(987654321);
    cout<<Lorito.getDNI()<<endl;

    Lorito.setNome("Lorazo");
    cout<<Lorito.getNome()<<endl;

    
  return(0);
}
