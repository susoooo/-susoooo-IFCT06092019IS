/*1-Crea una clase que represente a una persona. Al menos debe contener información sobre su nombre, apellido primero y segundo, 
fecha de nacimiento, lugar de nacimiento y pais de nacimiento. Crea constructores que permitan la creación de personas sin saber 
sus datos, conociendo su DNI, su nombre y apellidos, ambos, y todos los datos incluidos en la clase.Crea objetos para cada uno de 
los compañeros de clase usando diferentes constructores y haz que las clases impriman los datos que tienen sobre ellos.*/

#include <iostream>
#include <string>
#include <string.h>

using namespace std;

class Data 
{
    int dia;
    int mes;
    int ano;
public:
    Data();
    Data(int, int, int);
    ~Data();
    
    void entrarMes(int);
    void entrarDia(int);
    void entrarAno(int);
    void printData(string);
};

class Persoa
{
    //Propiedades:
	char nome[15]; //Variable de clase
	char apelido1[15];
    char apelido2[15];
    char paisnac[15];
    int DNI;
    Data camposData; //creamos obxecto CamposData para acceder ás variables da clase Data

    public:
    //Creamos construtores que configuraremos despois:
    Persoa();
    Persoa(int DNI);  
    Persoa(char[], char[], char []); //nome, apelido1, apelido2
    Persoa(int DNI,char[], char[], char []); //DNI, nome, apelido1, apelido2
    Persoa(int DNI, char[], char[], char[], char []); //paisnac a maiores
    Persoa(int DNI, char[], char[], char[], char [], int, int, int); //int refírese a día, mes e ano
    ~Persoa();
};

//Comezamos a configuración dos construtores:

Persoa::Persoa()
{
    strcpy(nome,""); //con strcpy introduce o contido do segundo parámetro no primeiro(nome)
    strcpy(apelido1,"");
    strcpy(apelido2,"");
    strcpy(paisnac,"");
    DNI=0;
    camposData.entrarDia(01);
    camposData.entrarMes(01);
    camposData.entrarAno(2020);
}

Persoa::Persoa(int recolloDNI)
{
    DNI=recolloDNI;
    strcpy(nome,""); //con strcpy introduce o contido do segundo parámetro no primeiro(nome)
    strcpy(apelido1,"");
    strcpy(apelido2,"");
    strcpy(paisnac,"");
    camposData.entrarDia(01);
    camposData.entrarMes(01);
    camposData.entrarAno(2020);
}

Persoa::Persoa(char recollonome[], char recolloapelido1[], char recolloapelido2 [])
{
    strcpy(nome,recollonome);
    strcpy(apelido1,recolloapelido1);
    strcpy(nome,recolloapelido2);
    DNI=0;
    strcpy(paisnac,"");
    camposData.entrarDia(01);
    camposData.entrarMes(01);
    camposData.entrarAno(2020);
}

Persoa::Persoa(int recolloDNI, char recollonome[], char recolloapelido1[], char recolloapelido2 [])
{
    strcpy(nome,recollonome);
    strcpy(apelido1,recolloapelido1);
    strcpy(nome,recolloapelido2);
    DNI=recolloDNI;
    strcpy(paisnac,"");
    camposData.entrarDia(01);
    camposData.entrarMes(01);
    camposData.entrarAno(2020);
}

Persoa::Persoa(int recolloDNI, char recollonome[], char recolloapelido1[], char recolloapelido2 [], char recollopais[])
{
    strcpy(nome,recollonome);
    strcpy(apelido1,recolloapelido1);
    strcpy(nome,recolloapelido2);
    DNI=recolloDNI;
    strcpy(paisnac,recollopais);
    camposData.entrarDia(01);
    camposData.entrarMes(01);
    camposData.entrarAno(2020);
}

Persoa::Persoa(int recolloDNI, char recollonome[], char recolloapelido1[], char recolloapelido2 [], char recollopais[], int recollodia, int recollomes, int recolloano)
{
    strcpy(nome,recollonome);
    strcpy(apelido1,recolloapelido1);
    strcpy(nome,recolloapelido2);
    DNI=recolloDNI;
    strcpy(paisnac,recollopais);
    camposData.entrarDia(recollodia);
    camposData.entrarMes(recollomes);
    camposData.entrarAno(recolloano);
}

/*TO DO Falta configurar función para que a clase imprima os datos*/
   /* void Persoa::imprimirDatos()
        {
                
        }*/

    
int main() 
{

   //Creamos os obxectos:
    Persoa Suso;
    Persoa Nestor (333444555);
    Persoa Diego ("Diego","Ruiz","Fernandez");    
    Persoa JoseM (111222333, "Jose", "Debasa", "Rouco");
    Persoa Alex (123456789, "Alejandro", "Otero", "Casas", "España");
    Persoa Guille (987654321, "Guillermo", "Perez", "Lopez","Galiza", 1980, 3, 24);
    



    

    

    return 0;
}


