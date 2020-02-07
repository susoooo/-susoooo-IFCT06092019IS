#include <iostream>
#include <string.h>

using namespace std;

class ClasePersona
{
    char nombre[30];
    char ape1[30];
    char ape2[30];
    int dianac;
    int mesnac;
    int anonac;
    public:
    void CalcuEdad (int a, int b, int c);
    void Nombrar (char *n, char *a1, char *a2);
};

void ClasePersona::Nombrar (char *n, char *a1, char *a2)
{
    strcpy(nombre,n);
    strcpy(ape1,a1);
    strcpy(ape2,a2);
}

void ClasePersona::CalcuEdad (int d, int m, int a)
{
    cout << "Nombre: " << nombre << " " << ape1 << " " << ape2 << endl;
    cout << "Fecha nacimiento: " << d << "/" << m << "/" << a << endl;
    cout << "Edad: " << 2020-a << endl;
}

int main()
{
    char nom[30];
    char a1[30];
    char a2[30];
    int dia;
    int mes;
    int ano;
    ClasePersona objPersona;

    cout << "Introduce nombre: " << endl;
    cin >> nom;
    cout << "Introduce primer apellido: " << endl;
    cin >> a1;
    cout << "Introduce segundo apellido: " << endl;
    cin >> a2;
    cout << "Introduce día de nacimiento: " << endl;
    cin >> dia;
    cout << "Introduce mes de nacimiento: " << endl;
    cin >> mes;
    cout << "Introduce año de nacimiento: " << endl;
    cin >> ano;
    objPersona.Nombrar(nom,a1,a2);
    objPersona.CalcuEdad(dia,mes,ano);
}
