#include <iostream>
#include <string.h>

using namespace std;

// Clase base Persona:
class Persona {
  public:
   Persona(string n, int e)
   {
       nombre = n;
       edad=e;
   }
   char *LeerNombre(char *n) ;
   int LeerEdad() ;
   void CambiarNombre( char *n);
   void CambiarEdad(int e);
   void datospan()
   {
       cout << "Nome: " << nombre << " Edad: " << edad << endl;
   }

  protected:
   string nombre;
   int edad;
};
 // Clase derivada Empleado:
class Empleado : public Persona {
  public:
   Empleado(float s);
   float LeerSalario() ;
   void CambiarSalario(float s);
      
   protected:
   float salario;  
};
// Clase derivada Asalariado:
class Asalariado : public Persona {
  public:
   Asalariado (float s,float t)
   {
     salario=s;
     retencion=t;  
   }
   float LeerSalario() ;
   float LeerRetencion();
   void CambiarSalario(float s);
   void CambiarRetencion(float t);
   void datospan()
   {
       cout << "Salario: " << salario << " Retencion: " << retencion << endl;
   }

   
   protected:
   float salario;
   float retencion;
}; 
// Clase derivada Obrero:
class Obrero : public Asalariado {
  public:
   Obrero (char *n);
   char LeerCargo() ;
   void CambiarCargo(char s);
   protected:
   char cargo[25];
};
// Clase derivada Medico:
class Medico : public Asalariado {
  public:
   Medico (int )
   {
       d=nmpacientes;
   }
   int LeerNmPacientes() ;
   void CambiarNmPacientes( int d);
   void datospan()
   {
       cout << "Número de pacientes: " << nmpacientes  << endl;
   }

   protected:
   int nmpacientes;
};
 // Clase derivada Noasalariado:
class Nosalariado : public Persona {
  public:
   Nosalariado (float s);
   float LeerFacturacion() ;
   float LeerRetencion();
   void CambiarFacturacion( float s);
   void CambiarRetencion(float s);
   protected:
   float facturacion;
   float retencion;  
};


   int main()
   {
   Persona objeto1 ("Antonio Gómez", 40);//non asalariado
   Asalariado objeto2 (1560.40,6.3);//ni médico ni obrero
   Asalariado objeto3 (1640.40 ,7.4);
   Asalariado objeto4 (1890.30,8.2);// dos asalariados
   Medico objeto5 (200 );// médico.
  
   return (0);
   }