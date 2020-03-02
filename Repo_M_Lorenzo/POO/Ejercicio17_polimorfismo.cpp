#include <iostream>
#include <string>
#include <string.h>
using namespace std;

class electrodomestico{
    protected:
        int potencia;
        float consumo;
        float tiempo;

    public:
        void poten(int pot);
        void consum(float con);
        void tempo(float tem);
        virtual float calcular_consumo();
};

void electrodomestico::poten(int pot)
{
    potencia=pot;
}

void electrodomestico::consum(float con)
{
    consumo=con;
}

void electrodomestico::tempo(float tem)
{
    tiempo=tem;
}

float electrodomestico::calcular_consumo()
{
    return(potencia*consumo*tiempo);
}

class lavadora:public electrodomestico{
    public:
        float calcular_consumo(){return(0.5*potencia*consumo*tiempo);}
};

class nevera:public electrodomestico{
    public:
        float calcular_consumo(){return(0.7*potencia*consumo*tiempo);}

};

class radiador:public electrodomestico{
    public:
        float calcular_consumo(){return (potencia*consumo*tiempo);}

};

int main()
{
    lavadora l[3];
    nevera n[3];
    radiador r[3];  
    int i;
    int potencia;
    float consumo;
    float tiempo;

    for(i=0;i<3;i++)
    {
        cout<<"Introduzca la potencia de las lavadoras:"<<endl;
        cin>>potencia;
        cout<<"Introduzca el consumo de las lavadoras:"<<endl;
        cin>>consumo;
        cout<<"Introduzca el tiempo de funcionamiento de las lavadoras"<<endl;
        cin>>tiempo;
        l[i].poten(potencia);
        l[i].consum(consumo);
        l[i].tempo(tiempo);

        cout<<"Introduzca la potencia de las neveras:"<<endl;
        cin>>potencia;
        cout<<"Introduzca el consumos de las neveras:"<<endl;
        cin>>consumo;
        cout<<"Introduzca el tiempo de funcionamiento de las neveras"<<endl;
        cin>>tiempo;
        n[i].poten(potencia);
        n[i].consum(consumo);
        n[i].tempo(tiempo);

        cout<<"Introduzca la potencia de los radiadores:"<<endl;
        cin>>potencia;
        cout<<"Introduzca el consumos de los radiadores:"<<endl;
        cin>>consumo;
        cout<<"Introduzca el tiempo de funcionamiento de los radiadores"<<endl;
        cin>>tiempo;
        r[i].poten(potencia);
        r[i].consum(consumo);
        r[i].tempo(tiempo);
   
    }

    for(i=0;i<3;i++)
    {
        cout<<"El consumo de la lavadora "<<i<<" es "<<l[i].calcular_consumo()<<endl;
        cout<<"El consumo de la nevera "<<i<<" es "<<n[i].calcular_consumo()<<endl;
        cout<<"El consumo del radiador "<<i<<" es "<<r[i].calcular_consumo()<<endl;
    }

  return 0;
}