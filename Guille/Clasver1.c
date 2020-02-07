#include <iostream>
using namespace std;
class Punto
{
 public:
 int x,y,z;                                 //Variable de clase.
 
 void Posicionar(int a,int b,int c);
};

void Punto::Posicionar(int a,int b,int c)
{
 x = a; 
 y = b; 
 z = c;
}
int main()
  {
    Punto p1, p2, p3;
 
  p1.Posicionar(7,12,3);
  p2.Posicionar(4,9,-2);
  p3.Posicionar(5,8,1);

  return(0);
  }

