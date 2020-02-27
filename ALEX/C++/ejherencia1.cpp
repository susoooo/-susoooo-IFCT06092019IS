#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
using namespace std;


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
    
    return (0);
}