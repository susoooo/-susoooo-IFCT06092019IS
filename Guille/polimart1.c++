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
   void CambiarAntiguedad(int);
   void CambiarDireccion(char*);
   void CambiarSupervisor(char*);
   void CambiarPuesto(char*);
   void CambiarSalario (float);
   float Incremento (){};
   void  imprimir_todo();
   
  protected:
  string nombre;
  string apellidos;
  char puesto [15];
  char direccion [50];
  char supervisor [15];
  int dni;
  int tfno;
  int  antiguedad;
  float salario;
  
};

  Empleado::Empleado (string nom,string ape, int carne, int tefono, char dir[50], int antigu, float salar, char pues[15])
{
   nombre = nom;
   apellidos = ape;
   dni = carne;
   tfno = tefono;
   strcpy(direccion,dir);
   antiguedad = antigu;
   salario = salar;
   strcpy (puesto,pues); 
};
  void Empleado::imprimir_todo()
{
    cout << nombre << " "  <<  apellidos << " " << dni << " " << tfno << " " << direccion << " " << antiguedad << " " << salario << " " << puesto << endl;
};
class Secretario :public Empleado{
public:
Secretario(string nom,string ape, int carne, int tefono, char dir[50], int antigu, float salar, char pues[15]): Empleado( nom, ape, carne, tefono, dir , antigu, salar, pues){}
int LeerDespacho();
int LeerFax();
void CambiarFax(int);
float Incremento()
{
    return ((salario*5)/100);
};
protected:
int despacho;
int fax;
};  
class Vendedor :public Empleado{
public:
Vendedor(string nom,string ape, int carne, int tefono, char dir[50], int antigu, float salar, char pues[15]): Empleado( nom, ape, carne, tefono, dir, antigu, salar, pues){}
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
};
protected:
string coche;
string clientes;
int cliente;
int movil;
int PorcenCom;
char ArVenta [25];
 
};

class JefeZona :public Empleado{
public:
JefeZona(string nom,string ape, int carne, int tefono, char dir[50], int antigu, float salar, char pues[15]):Empleado( nom, ape, carne, tefono, dir, antigu, salar, pues){}
int LeerDespacho();
string LeerDatosCoche (int,char*,char*);
string LeerListaVendedores ( char*, int);
int LeerTfnoMovil ();
int LeerPorcenCom ();
char LeerSecretario();
char AreaVenta();
void CambiarDatosCoche (int,char*,char*);
void CambiarListaVendedores (char*, int);
void CambiarSecretario (char*);
float Incremento()
{
    return ((salario*20)/100);
};

protected:
string coche;
string vendedores;
int vendedor;
char Secretario;

};
  
main ()
{
    Empleado Eimp1 ("Juan","Alvarez Alvarez", 77666888, 649870909, "Calle Alegría 47-3º 27777 Ribadeo Lugo", 4, 23234.57, "Empleado");
    Secretario Simp1 ("Eduardo","Gonzalez Gonzalez", 78978978, 645897889, "Calle Laotra 88-1º 27777 Mondoñedo Lugo",3,26433.89,"Secretario");
    Vendedor Vimp1 ("Santiago", "Ares Ares",87654321, 676878765, "Calle Olmo 25 32333 Riotorto Lugo",6,29654.76, "Vendedor");
    JefeZona JZimp1 ("Rodrigo","Iria Iria", 76876876, 690324590, "Calle Sol 32 43234 Antas Lugo",8,36897.76, "JefeZona");

    Eimp1.imprimir_todo();
    Simp1.imprimir_todo();
    Vimp1.imprimir_todo();
    JZimp1.imprimir_todo();
};