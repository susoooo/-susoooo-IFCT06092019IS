class MiClase
{
 int var1; //Variable de clase.
 const double var2 = 3.14159; // Variable de clase.

 void cambiarVar1(int a);//Declaración de un método de la clase.
 double calcularArea(const double& x, const double& y);// declaración de un método de la clase.
};
void MiClase::cambiarVar1(int a)//Definición del método por fuera de la clase.
 {
     var1=a;
 }
double MiClase::calcularArea(const double& x, const double& y)//Definición del método por fuera de la clase.
  {
     return x*y*var2;
  }
