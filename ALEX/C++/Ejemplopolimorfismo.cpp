#include <iostream>
#include <string>
#include <string.h>
using namespace std;

class Vehiculo {
public:
  void avanza() {cout << "vehic. Avanza" <<endl;}
};

class Coche : public Vehiculo {
public:
  void avanza(void)
     { cout << "Avanza coche." << endl; }
};

class Moto: public Vehiculo {
public:
  void avanza(void)
     { cout << "Avanza moto." << endl; }
};

class Patinete : public Vehiculo {
public:
  void diferente() {cout <<"soy patin."<<endl;}
};

int main()
{
  Moto t;
  Coche c;
  Patinete p;
  

  t.avanza();
  c.avanza();
  p.avanza();

  return 0;
}