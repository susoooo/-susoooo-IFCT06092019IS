
 
using namespace std;
class Auto
{
 public:
 int n1;                                 //Variable de clase.
 int n2;
 int veloc;
 bool pechado;
 bool apagado;
 bool parado;
 bool aberto;
 void Abrir();
 void Encender(); 
 void Arrancar ();
 void Acelerar();
 void Parar ();
 void Cerrar();
};

void Auto::Abrir
{
  if (pechado)
   {
    pechado=false;
   }
}
void Auto::Encender
 {
  if (apagado)
    {
    apagado=false;
    }
 }

void Auto::Acelerar
{
  int n1 = 0
  int n2= 100
  for (contador=0; contador<100; contador++)
  {
     veloc=contador;
  }
}
void Auto::Parar
    {
  int n1 = 0
  int n2= 100
  for (contador=100; contador=0; contador++)
  {
     veloc=contador;
  }

      
void Auto::Cerrar
{
 if (aberto)
    {
      aberto=false;
    }



}






int main()
  {
    
    Auto Perolo;
  
Perolo.Abrir();
Perolo.Encender();
Perolo.Arrancar();
Perolo.Acelerar();
Perolo.Parar();
Perolo.Cerrar();
return(0);
  }



