#include <iostream>
#include <string.h>

using namespace std;

class Animal
{
    public:
    void sonido() {cout << "BUUUU!!!" <<endl;}
};

class Gato : public Animal
{
    public:
    void sonido(void) { cout << "Miau!" << endl; }
};

class Perro: public Animal {
    public:
    void sonido(void) { cout << "Guau!" << endl; }
};

int main()
{
    Gato g;
    Perro p;
    Animal a;

    p.sonido();
    g.sonido();
    a.sonido();

    return 0;
}
