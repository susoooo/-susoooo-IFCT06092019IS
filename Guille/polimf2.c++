#include <iostream>
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
int main()
{
  Moto t;
  Coche c;
  

  t.avanza();
  c.avanza();

  return 0;
}