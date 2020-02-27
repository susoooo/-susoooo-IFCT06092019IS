#include <iostream>
#include <unistd.h>
using namespace std;


// Clase base Animal:
class Animal 
{
     //Propiedades:
	int velocidade;
    int numcornos;
	int altura;
    int peso;
    int numcolores;

    //Métodos
    public:
	void moverse();
    void reproducirse();
    void morirse();
    void desalimentarse();  
};


// Clase derivada Herbivoro:
class Herbivoro : public Animal {
  public:
  void alimentarse();  

  //protected:
   
};

// Clase derivada Carnivoro:
class Carnivoro : public Animal {
  public:
  void alimentarse();  

  //protected:
   
};

// Clase derivada Omnivoro:
class Omnivoro : public Animal {
  public:
  void alimentarse();  

  //protected:
   
};

// Clase derivada Conejo:
class Conejo : public Herbivoro {
  public:
  void reproduccion();
  void facerson();  

  //protected:
   
};

// Clase derivada León:
class Leon : public Carnivoro {
  int tamañomelena;

  public:
  void reproduccion();
  void facerson();  

  //protected:  
};

// Clase derivada Hiena:
class Hiena : public Carnivoro {
  int tamañomelena;

  public:
  void rirse();
  void facerson();  

  //protected:  
};

// Clase derivada SerHumano:
class SerHumano : public Omnivoro {

  public:
  void rirse();
  void autoconocerse(); 
  void facerson(); 

  //protected:  
};


int main()
{
  printf("Probando programa herencia Animal\n");

  return(0);
}
