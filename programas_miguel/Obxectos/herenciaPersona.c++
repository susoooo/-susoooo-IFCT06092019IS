#include <iostream>
#include <unistd.h>
using namespace std;

// Clase base Persona:
class Persona {
  public:
   Persona(char *n, int e);
   const char *LeerNombre(char *n) const;
   int LeerEdad() const;
   void CambiarNombre(const char *n);
   void CambiarEdad(int e);
   
  protected:
   char nombre[40];
   int edad;
};


// Clase derivada Empleado:
class Empleado : public Persona {
  public:
   Empleado(char *n, int e, float s);
   float LeerSalario() const;
   void CambiarSalario(const float s);
   
  protected:
   float salarioAnual;
};

int main()
{
  printf("Probando programa herencia Persona\n");

  return(0);
}