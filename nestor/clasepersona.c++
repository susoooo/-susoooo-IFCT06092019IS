/*Crea una clase que represente a una persona. Al menos debe contener 
información sobre su nombre, apellido primero y segundo, fecha de 
nacimiento, lugar de nacimiento y pais de nacimiento. Crea constructores
que permitan la creación de personas sin saber sus datos, conociendo 
su DNI, su nombre y apellidos, ambos, y todos los datos incluidos en la 
clase.
Crea objetos para cada uno de los compañeros de clase usando 
diferentes constructores y haz que las clases impriman los datos 
que tienen sobre ellos.*/

#include <stdio.h>
#include <iostream>
#include <string>
#include <string.h>
using namespace std;
  
class persona 
    {
    //definimos las variables
    int d, m ,a;
    char nombre[15];
    char apellido1[15];
    char apellido2[15];
    char lugar_de_nacimiento[15];
    char pais_de_nacimiento[15];
    double DNI;
       
    public://definimos los  constructores y los hacemos publicos se saben que son los constructores por que tienen el mismo nombre que la clase
    persona();        // Constructor para crear personas sin saber sus datos
    persona(int); // Constructor para crear personas sabiendo su DNI
    persona(const char *,const char *,const char *);// Constructor de nombre y apellidos  
    persona(const char *,const char *,const char *,const char *,const char *,int);   // Constructor copia
    //~persona();       // Destructor
    //definimos los metodos 
    //void crear(const char *dest);
    void imprimir_nombre();
    void imprimir_DNI();
    void imprimir_ficha();
    }; 
        persona::persona()
            {
            strcpy(nombre,"");
            strcpy(apellido1,"");
            strcpy(apellido2,"");
            strcpy(lugar_de_nacimiento,"");
            strcpy(pais_de_nacimiento,"");
            DNI=0;

            }
        persona::persona(int dni)
            {
            strcpy(nombre,"");
            strcpy(apellido1,"");
            strcpy(apellido2,"");
            strcpy(lugar_de_nacimiento,"");
            strcpy(pais_de_nacimiento,"");   
            DNI=dni;   
            }
        persona::persona(const char nom[15],const char apell1[15],const char apell2[15])
            {
            strcpy(nombre,nom);
            strcpy(apellido1,apell1);
            strcpy(apellido2,apell2);
            strcpy(lugar_de_nacimiento,"");
            strcpy(pais_de_nacimiento,"");
            DNI=0;
            }
        persona::persona(const char nom[15],const char apell1[15],const char apell2[15],const char lugardenacimiento[15],const char paisdenacimiento[15],int dni)
            {
            strcpy(nombre,nom);
            strcpy(apellido1,apell1);
            strcpy(apellido2,apell2);
            strcpy(lugar_de_nacimiento,lugardenacimiento);
            strcpy(pais_de_nacimiento,paisdenacimiento);
            DNI=dni;

            }     
    class fecha 
        {
        int d, m ,a;
        public:
        fecha();
        fecha(int, int, int);
        ~fecha();
        void imprimir_fecha();
        };
        fecha::fecha()
                {
                d = 0; m = 0; a = 0;
                cout << "\n Fecha: Constructor por defecto \n";
                }
            fecha::fecha(int dd, int mm, int aa)
                {
                d = dd; m = mm; a = aa;
                }
        fecha::~fecha()
                {
                cout << "\n Fecha: Destructor -> ()\n";
                }
    void fecha::imprimir_fecha()
        {    
        cout << " Dia   : " << d << "\n"
            << " Mes : " << m << endl
            << " Año  : " << a << endl;
        }
    void persona::imprimir_ficha()
        {
        cout 
            << "Nombre  : " << nombre << "\n"
            << "1º Apellido : " << apellido1<< endl
            << "2ª apellido  : " << apellido2<< endl
            << "Lugar de nacimiento : "<<lugar_de_nacimiento << endl
            << "Pais de nacimiento  : "<< pais_de_nacimiento << endl
            << "DNI  : " << DNI <<"\n\n";
        }
    void persona::imprimir_nombre()
        {
        cout << " Nombre  : " << nombre << "\n"
            << "1º Apellido : " << apellido1<< endl
            << "2ª apellido  : " << apellido2<< endl;
        }
    void persona::imprimir_DNI()
        {
        cout << " DNI  : " << DNI << "\n";
        }

    int main(void)
        {

        string NOMBRE;
        persona Miguel("Miguel","----","----","Lugo","España",75677);
        persona Nestor("Nestor","Rois","Bujan","Lugo","España",75677);
        persona Diego("Diego","----","----","Lugo","España",75677);
        persona Manuel("Manuel","----","----","Lugo","España",7567);
        persona Alex("Alex","----","----","Lugo","España",75655);
        persona Jairo("Jairo","----","----","Lugo","España",567);
        persona Guille("Guille","----","----","Lugo","España",75675);
        persona Victor("Victor","----","----","Lugo","España",76757);
        cout << "Bienvenido al programa base+\nPor favor escriba el nombre de la persona que desea ver la ficha" << endl;
        cin >> NOMBRE;
        cout << NOMBRE << endl;
        if (NOMBRE == "Miguel")
            {
            Miguel.imprimir_ficha();
            }
        if (NOMBRE ==  "Diego")
            {
            Diego.imprimir_ficha();
            }
        if (NOMBRE ==  "Nestor")
            {
            Nestor.imprimir_ficha();
            }
        if (NOMBRE ==  "Manuel")
            {
            Manuel.imprimir_ficha();
            }
        if (NOMBRE ==  "Alex")
            {
            Alex.imprimir_ficha();
            }
        if (NOMBRE ==  "Jairo")
            {
            Jairo.imprimir_ficha();
            }
        if (NOMBRE == "Guille")
            {
            Guille.imprimir_ficha();
            }
        if (NOMBRE ==  "Victor")
            {
            Victor.imprimir_ficha();
            }         
        }
