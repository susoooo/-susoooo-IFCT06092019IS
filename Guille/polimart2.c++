#include <iostream>
#include <string.h>
using namespace std;

class Forma {
public:
   char LeerColor;
   float LeerCordcent;
   char LeerNbForma;
   void CambiarColor (char);
   void CambiarCordcent(float);
   void CambiarNbForma (char);
   void ImprimiBase ();
   virtual float resultado ()=0;
   
   
  protected:
  char color[15];
  float cordcent;
  char nbforma[15];
};



class Rectangulo :public Forma{
public:
  Rectangulo (char [15], char [15],float ,float ,float );
  float LeerLaMay;
  float LeerLaMen;
  void CambiarLaMay (float);
  void CambiarLaMen (float);
  void CambiarTRt ();
  void ImprimiRec ();
  void CalculArea ();
  void CalcuPeri ();
  
  
  protected:
  float LadoMayor;
  float LadoMenor;

};  
Rectangulo :: Rectangulo (char nombre[15], char colorin[15],float centro,float LMayor,float LMenor );{
nbforma = nombre;
color = colorin;
cordcen = centro;
LadoMayor = LMayor;
LadoMenor = LMenor;
};
