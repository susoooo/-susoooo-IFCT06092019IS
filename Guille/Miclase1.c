class MiClase
{
 int var1; //Variable de clase.
 const double var2 = 3.14159; // Variable de clase.
 public:
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

   int main()
   {
      MiClase obj;
      obj.cambiarVar1(100);// Ok!
      //obj.var1 = 200; // Error! Funcionamento correcto porque a resposta é a que se pretendía, que dese error.

      return 0;

   }
