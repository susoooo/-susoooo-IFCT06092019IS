#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
using namespace std;


class electrodomestico
{
    protected:
        int potencia;
        float consumo;
        float tiempo;

    public:
        void pote(int W);
        void cons(float V);
        void temp(float S);
        float calcular_consumo();
};
void electrodomestico::pote(int W)
{
    potencia=W;
}
 
void electrodomestico::cons(float V)
{
    consumo=V;
}

void electrodomestico::temp(float S)
{
    tiempo=S;
}

float electrodomestico::calcular_consumo()
{
    return(potencia*consumo*tiempo);
}
	
class lavadora:public electrodomestico
{
    public:
        float calcular_consumo(){return(0.5*potencia*consumo*tiempo);}
};

class nevera:public electrodomestico
{
    public:
        float calcular_consumo(){return(0.7*potencia*consumo*tiempo);}

};
 
class radiador:public electrodomestico
{
    public:
        float calcular_consumo(){return (potencia*consumo*tiempo);}

};

int main()
{
	lavadora L[3];
    nevera N[3];
    radiador R[3];  
    int contador;
    int potencia;
    float consumo;
    float tiempo;
	
	for(contador=0;contador<3;contador++)
	{
		cout<<"Introduzca potencia:"<<endl;
        cin>>potencia;
        cout<<"Introduzca consumo:"<<endl;
        cin>>consumo;
        cout<<"Introduzca tiempo"<<endl;
        cin>>tiempo;
		L[contador].pote(potencia);
        L[contador].cons(consumo);
        L[contador].temp(tiempo);
		
		cout<<"Introduzca potencia:"<<endl;
        cin>>potencia;
        cout<<"Introduzca consumo:"<<endl;
        cin>>consumo;
        cout<<"Introduzca tiempo"<<endl;
        cin>>tiempo;
		N[contador].pote(potencia);
        N[contador].consu(consumo);
        N[contador].temp(tiempo);
		
		cout<<"Introduzca potencia:"<<endl;
        cin>>potencia;
        cout<<"Introduzca consumo:"<<endl;
        cin>>consumo;
        cout<<"Introduzca tiempo"<<endl;
        cin>>tiempo;
		R[contador].pote(potencia);
        R[contador].consu(consumo);
        R[contador].temp(tiempo);

    }

    for(contador=0;contador<3;contador++)
    {
        cout<<"El consumo de la lavadora "<<contador<<" es "<<L[contador].calcular_consumo()<<endl;
        cout<<"El consumo de la nevera "<<contador<<" es "<<N[contador].calcular_consumo()<<endl;
        cout<<"El consumo del radiador "<<contador<<" es "<<R[contador].calcular_consumo()<<endl;
    }

  return 0;
}
	
	