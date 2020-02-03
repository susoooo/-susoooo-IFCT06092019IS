#include <iostream>
using namespace std;

class numero
{
    int n1;
    int n2;
    int n3;

    public:
    void cambiar_numeros(int a[3]);
    void consecutivos();
};

void numero::cambiar_numeros(int a[3])
{
    n1=a[0];
    n2=a[1];
    n3=a[2];
}

void numero::consecutivos()
{
    if (n2==(n1+1) && n3==(n1+2))
    {
        cout<<"GRACIAS"<<endl;
    }
    else
    {
        cout<<"NO SON CONSECUTIVOS"<<endl;
    }
}

int main()
{
    numero num;//Declarando un objeto de la clase

    int numeros[3];
    
    cout<<"Introduzca el primer numero"<<endl;
    cin>>numeros[0];
    cout<<"Introduzca el segundo numero"<<endl;
    cin>>numeros[1];
    cout<<"Introduzca el tercer numero"<<endl;
    cin>>numeros[2];

    num.cambiar_numeros(numeros);//Accediendo a un miembro

    num.consecutivos(); //Accediendo a un miembro

    return 0;
}