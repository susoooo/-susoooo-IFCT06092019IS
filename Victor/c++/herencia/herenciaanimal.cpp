#include <iostream>
#include <string.h>

using namespace std;

class Animal
{
    public:
    void Moverse();
    void Reproducirse();
    void Morirse();
    void Desalimentar();

    protected:
    float velocidad;
    int ncuernos;
    float peso;
    float altura;
    float ncolores;
};

class Herbivoro : public Animal
{
    public:
    void Alimentarse();
};

class Carnivoro : public Animal
{
    public:
    void Alimentarse();
};

class Omnivoro : public Animal
{
    public:
    void Alimentarse();
};

class Conejo : public Herbivoro
{
    public:
    void Reproduccion();
    void HacerSonido();
};

class Leon : public Carnivoro
{
    public:
    void Reproduccion();
    void HacerSonido();
    protected:
    float tamanhomelena;
};

class Hiena : public Carnivoro
{
    public:
    void Reirse();
    void HacerSonido();
};

class Humano : public Omnivoro
{
    public:
    void Reirse();
    void HacerSonido();
    void Autoconocimiento();
};

int main()
{
}
