#include <iostream>
#include <cstring>
using namespace std;
 
class Persona {
  
   string nombre;
   string apellido1;
   string apellido2;
   int díanac;
   int mesnac;
   int anonac;
   string lugarnac;
   string paisnac;
   int dni[9];
   
  public:
   void inicializarObxeto();
   void Persona(void);        // Constructor sin datos
   void Persona(int novodni[9]); // Constructor desde dni
   void Persona(string nb, string ap1, string ap2);   // Constructor de nombre y apellidos
   void Persona(int novodni[9],string nb, string ap1, string ap2,int dínc, int menc, int anc, string lgnc, string panac); // Constructor todos los datos incluidos en la clase)
   void ~Persona();       // Destructor
 
}
 
void Persona::inicializarObxeto()
{
    nombre ="";
    apellido1 ="";
    apellido2 ="";
    díanac=1;
    mesnac=1;
    anonac=1980;
    lugarnac ="";
    paisnac ="";
    memset(dni,0,sizeof(dni));
}


Persona::Persona()
{
   inicializarObxeto();
}
Persona::Persona(int novodni[9])
{
   inicializarObxeto();
   dni[0]=novodni[0];
}
Persona:: Persona (string nb, string ap1, string ap2);
{
    inicializarObxeto();
    
}