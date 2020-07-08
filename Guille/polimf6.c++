#include <iostream>
#include <string.h>
using namespace std;
class Asignatura {
public:
   char *LeerNombre(char *n) ;
   int LeerCodigo;
   float LeerMedia;
   void CambiarNombre (char *n);
   void CambiarCodigo(int);
   void CambiarMedia (float);
   virtual float calculopot ();
   
   
  protected:
  string nombre;
  int codigo;
  float media;
};

void Electro::CambiarPotencia(float nuevaPotencia)
{
   potencia = nuevaPotencia;
};
void Electro::CambiarConsumo(float nuevoConsumo)
{
   consumo = nuevoConsumo;
};
void Electro::CambiarHoEnc(float nuevaHoEnc)
{
   horenc = nuevaHoEnc;
};

class Lavadora :public Electro{
public:
  float resultado ();
  {
      resultado ((pontencia/2)*horenc);
  } 

};  

class Nevera :public Electro{
public:
  float resultado ();
  {
      resultado (po*70/100)*ho);
  } 
};
  

class Radiador :public Electro{
public:
  float resultado ();
  {
      resultado (po*ho);
  } 
};
  
main ():