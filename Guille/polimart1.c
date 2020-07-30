#include <iostream>
#include <string.h>
using namespace std;

class Empleado {
public:
   Empleado (string,string, int, int, char dir[50], int, float, char puesto[15]);
   string Leernombre ();
   string Leerapellidos();
   int Leerdni();
   int Leertfno();
   int LeerAntiguedad();
   char LeerDireccion();
   char LeerPuesto();
   char LeerSupervisor();
   float LeerSalario();
   void Cambiartfno (int);
   void CambiarDireccion(char*);
   void CambiarSupervisor(char*);
   void CambiarPuesto(char*);
   void CambiarSalario (float);
   virtual float Incremento ()=0;
   
   
  protected:
  string nombre;
  string apellidos;
  puesto [15];
  direccion [50];
  supervisor [15];
  int dni;
  int tfno;
  int  antiguedad;
  float salario;
};


class Secretario :public Empleado{
public:
int LeerDespacho();
int LeerFax();
void CambiarFax(int);
float Incremento()
{
    return ((salario*5)/100);
}
protected:
int despacho;
int fax;
};  
class Vendedor :public Empleado{
public:
string LeerDatosCoche (int,char*,char*);
string LeerListaClientes ( char*, int);
int LeerTfnoMovil ();
int LeerPorcenCom ();
char AreaVenta();
void CambiarDatosCoche (int,char*,char*);
void CambiarListaClientes (char*, int);
void CambiarTfnoMovil (int);
void CambiarPorcenCom (int);
void CambiarAreaVenta (char*);
float Incremento()
{
    return ((salario*10)/100);
}
protected:
string coche;
string clientes;
int cliente
int movil;
int PorcenCom;
char AreaVenta [25];
 
};
  
class JefeZona :public Empleado{
public:
string LeerDatosCoche (int,char*,char*);
string LeerListaVendedores ( char*, int);
int LeerTfnoMovil ();
int LeerPorcenCom ();
char LeerSecretario();
char AreaVenta();
void CambiarDatosCoche (int,char*,char*);
void CambiarListaVendedores (char*, int);
void CambiarSecretario (char*);
float Incremento();
{
    return ((salario*20)/100);
}

protected:
string coche;
string vendedores;
int vendedor;
char Secretario;

};
  
main ()
{
    Empleado Eimp1("Juan","Alvarez Alvarez", 77666888, 649870909, Calle Alegria 47-3º 27777 Ribadeo Lugo, 4, 23234.57);
    Secretario Simp1("Eduardo","Gonzalez Gonzalez", 78978978, 645897889, Calle Laotra 88-1º 27777 Mondonedo Lugo,3,26433.89);
    Vendedor Vimp1("Santigo", "Ares Ares",87654321, 676878765, Calle Olmo 25 32333 Riotorto Lugo),6,29654.76);
    JefeZona JZimp1("Rodrigo","Iria Iria", 76876876, 690324590, Calle Sol 32 43234 Antas Lugo,8,36897.76);

    Eimp1 <<Eimp1<<endl;
    Simp1 <<Simp1<<endl;
    Vimp1 << Vimp1<<endl;
    JZimp1 <<JZimp1<<endl;
}
