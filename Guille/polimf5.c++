#include <iostream>
#include <string.h>
using namespace std;

class Electro {
public:
   float LeerPotencia;
   float LeerConsumo;
   float LeerHoEnc;
   void CambiarPotencia (float);
   void CambiarConsumo(float);
   void CambiarHoEnc (float);
   virtual float resultado ()=0;
   
   
  protected:
  float potencia;
  float consumo;
  float horenc;
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
  float resultado ()
  {
      return ((potencia/2)*horenc);
  } 

};  

class Nevera :public Electro{
public:
  float resultado ()
  {
      return (potencia*70/100)*horenc;
  } 
};
  

class Radiador :public Electro{
public:
  float resultado ()
  {
      return (potencia*horenc);
  } 
};
  
main ()
{
Lavadora l1;
Lavadora l2;
Lavadora l3;
Nevera n1;
Nevera n2;
Nevera n3;
Radiador r1;
Radiador r2;
Radiador r3;  
float dato;
cout<<"introduce la potencia de la lavadora 1"<< endl;
cin>> dato    ;
l1.CambiarPotencia(dato);
cout<<"introduce las horas de encendido de la lavadora 1"<< endl;
cin>>  dato    ;
l1.CambiarHoEnc(dato);
cout<<"introduce la potencia de la lavadora 2"<< endl;
cin>> dato    ;
l2.CambiarPotencia(dato);
cout<<"introduce las horas de encendido de la lavadora 2"<< endl;
cin>>  dato    ;
l2.CambiarHoEnc(dato);
cout<<"introduce la potencia de la lavadora 3"<< endl;
cin>> dato    ;
l3.CambiarPotencia(dato);
cout<<"introduce las horas de encendido de la lavadora 3"<< endl;
cin>>  dato    ;
l3.CambiarHoEnc(dato);
cout<<"introduce la potencia de la nevera 1"<< endl;
cin>> dato    ;
n1.CambiarPotencia(dato);
cout<<"introduce las horas de encendido de la nevera 1"<< endl;
cin>>  dato    ;
n1.CambiarHoEnc(dato);
cout<<"introduce la potencia de la nevera 2"<< endl;
cin>> dato    ;
n2.CambiarPotencia(dato);
cout<<"introduce las horas de encendido de la nevera 2"<< endl;
cin>>  dato    ;
n2.CambiarHoEnc(dato);
cout<<"introduce la potencia de la nevera 3"<< endl;
cin>> dato    ;
n3.CambiarPotencia(dato);      ;
cout<<"introduce las horas de encendido de la nevera 3"<< endl;
cin>>  dato    ;
n3.CambiarHoEnc(dato);    
cout<<"introduce la potencia del radiador 1"<< endl;
cin>> dato    ;
r1.CambiarPotencia(dato);     ;
cout<<"introduce las horas de encendido del radiador 1"<< endl;
cin>>  dato    ;
r1.CambiarHoEnc(dato);
cout<<"introduce la potencia del radiador 2"<< endl;
cin>> dato    ;
r2.CambiarPotencia(dato);
cout<<"introduce las horas de encendido del radiador 2"<< endl;
cin>>  dato    ;
r2.CambiarHoEnc(dato);
cout<<"introduce la potencia del radiador 3"<< endl;
cin>> dato    ;
r3.CambiarPotencia(dato);
cout<<"introduce las horas de encendido del radiador 3"<< endl;
cin>>  dato    ;
r3.CambiarHoEnc(dato);

cout<< l1.resultado() << endl;
cout<< l2.resultado() << endl;
cout<< l3.resultado() << endl;
cout<< n1.resultado() << endl;
cout<< n2.resultado() << endl;
cout<< n3.resultado() << endl;
cout<< r1.resultado() << endl;
cout<< r2.resultado() << endl;
cout<< r3.resultado() << endl;

     
};

