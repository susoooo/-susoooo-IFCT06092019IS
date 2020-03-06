// Clase base Animal:
class Animal {
  public:
   Animal(int *peso, float *altura);
   Animal();
   ~Animal();
   int *Leerpeso();
   float *Leeraltura();
   void CambiarPeso(int *n);
   void CambiarAltura(float *n);
   int LeerColores();  void LeerColores(int n);
   

  protected:
   char colores[25];
   int peso;
   float altura;
   
};
  // Clase derivada Herbivoros:
class Herbivoros : public Animal {
  public:
   void Alimentarse(char n);
    
};
 // Clase derivada Carnivoros:
class Carnivoros : public Animal {
  public:
   void Alimentarse (char n);
   
 
};
 // Clase derivada Omnivoros:
class Omnivoros : public Animal {
  public:
   void Alimentarse(char n);
   
  
};
//Clase derivada Conejo:
class Conejo : public Herbivoros {
  public:
   void Multireproducirse(char n);
   void Hacersonido;
};
//Clase derivada Leon:
class Leon : public Carnivoros {
  public:
   Leon(int)
   void Reproducirse(char n);
   void Hacersonido;
};   
//Clase derivada Hiena:
class Hiena : public Carnivoros {
  public:
   Hiena(int)
   void Reirse(char n);
   void Hacersonido;
};
//Clase derivada Hiena:
class Humano : public Omnivoros {
  public:
   Humano(int)
   void Reirse(char n);
   void Hacersonido;
   void Multiconocimiento;
}
   int main()
      {
       return (0);
      }