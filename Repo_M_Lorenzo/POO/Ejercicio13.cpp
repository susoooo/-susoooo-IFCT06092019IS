#include <iostream>
#include <string>
#include <string.h>
using namespace std;

class pizza{
    string masa;
    string ingredientes[10];
    int num_ing;
    int precio_pizza;
    int precio_masa;
    int precio_ing;



    

    void crear();

    public:

    pizza();
    pizza(string,int,string[]);
    pizza(int,string[]);

    void presentar_datos();
    ~pizza();


};

void pizza::crear()
{
    masa="normal";
    num_ing=3;
    ingredientes[0]="tomate";
    ingredientes[1]="mozzarella";
    ingredientes[2]="jamon";    
    precio_ing=2;
    precio_masa=6;
    precio_pizza=(precio_ing*num_ing)+precio_masa;

}

pizza::pizza()
{
    crear();
}

pizza::pizza(string t_masa,int n_ing,string ing[])
{
    crear();
    int i;
    masa=t_masa;
    if (masa=="fina")
    {
        precio_masa=5;
    }

    if (masa=="normal")
    {
        precio_masa=6;
    }

    if (masa=="rellena")
    {
        precio_masa=8;
    }
    
    num_ing=n_ing;
    for(i=0;i<num_ing;i++)
    {
        ingredientes[i]=ing[i];
    }
    precio_pizza=(precio_ing*num_ing)+precio_masa;
        

}

pizza::pizza(int n_ing, string ing[])
{
    crear();
    int i;
    num_ing=n_ing;
    for(i=0;i<num_ing;i++)
    {
        ingredientes[i]=ing[i];
    }
    precio_pizza=(precio_ing*num_ing)+precio_masa;
}

void pizza::presentar_datos()
{
    cout<<"Masa: "<<masa<<endl;
    int i;
    cout<<"Ingredientes:"<<endl;
    for(i=0;i<num_ing;i++)
    {
        cout<<ingredientes[i]<<endl;
    }
    cout<<"Precio: "<<precio_pizza<<"€"<<endl;
}

pizza::~pizza()
{
  
    cout << "\nSe va a destruir la pizza"<<" "<<"son: "<<precio_pizza<<"€"<<endl;

}

int main()
{
    string t_masa;
    int n_ing;
    string ing[10];
    int i;

   

    pizza piz1;
    piz1.presentar_datos();
    cout<<"Introduzca el tipo de masa:"<<endl
        <<"fina, normal o rellena"<<endl;
    cin>>t_masa;
    cout<<"Introduzca el numero de ingredientes:"<<endl;
    cin>>n_ing;

    for(i=0;i<n_ing;i++)
    {
        cout<<"Introduzca el ingrediente:"<<endl;
        cin>>ing[i];
    }
    
    pizza piz2(t_masa,n_ing,ing);
    piz2.presentar_datos();

    cout<<"Introduzca el numero de ingredientes:"<<endl;
    cin>>n_ing;

    for(i=0;i<n_ing;i++)
    {
        cout<<"Introduzca el ingrediente:"<<endl;
        cin>>ing[i];
    }
    pizza piz3(n_ing,ing);
    piz3.presentar_datos();

    return(0);    

}
