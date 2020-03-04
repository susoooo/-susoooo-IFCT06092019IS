/*1-Crea una clase electrodoméstico. Esta clase incluirá información sobre la potencia del electrodomestico y su consumo por hora en watios y el 
número de horas que lleva encendido desde el último ciclo de consumo. Incluyele un método calcular_consumo que calcule el consumo como el resultado de 
multiplicar la potencia por su consumo por hora por el tiempo que lleva encendido desde el último ciclo de consumo.
Crea una clase lavadora, hija de electrodoméstico, que calcule el consumo teniendo en cuenta que la potencia que utiliza para el consumo es la mitad de 
la que tiene como propiedad.
Crea una clase nevera, hija de electrodoméstico, que calcule el consumo teniendo en cuenta que el consumo por hora es un 70% del que tiene especificado 
como propiedad.
Crea una clase radiador, hija de electrodomestico, que calcule el consumo de la misma forma que su predecesora.
Haz un programa que pida al usuario los datos de 3 lavadoras, 3 neveras y 3 radiadores, y haz que se calculen los consumos de cada uno de ellos.*/

#include <iostream>
#include <string>
#include <string.h>

using namespace std;

class electrodomestico
{
    protected:
	int potencia;  
    int consumo;
    int numhoras;

    //Métodos
    public:
	float calcularconsumo();
    
    //set e get:
    void setPotencia(float novovalor);  
    void setConsumo(float novovalor); 
    void setNumhoras(float novovalor);

    float getPotencia(void); 
    float getConsumo(void); 
    float getNumhoras(void);   

};
//Métodos set (electrodomestico)
 void electrodomestico::setPotencia(float novovalor)
{
	potencia = novovalor;
}

 void electrodomestico::setConsumo(float novovalor)
{
	consumo = novovalor;
}

 void electrodomestico::setNumhoras(float novovalor)
{
	numhoras = novovalor;
}


float electrodomestico::calcularconsumo()
{
    float resultado;
    resultado=potencia*consumo*numhoras;
    return(resultado);
}


class lavadora : public electrodomestico 
{
    public:
    float calcularconsumo();
};

float lavadora::calcularconsumo()
{
    float resultado;
    resultado=(potencia/2)*consumo*numhoras;
    return(resultado);
}

class nevera : public electrodomestico 
{
    public:
    float calcularconsumo();
};

float nevera ::calcularconsumo()
{
    float resultado;
    resultado=((potencia*70)/100)*consumo*numhoras;
    return(resultado);
}

class radiador : public electrodomestico 
{
};


int main()
{
radiador rad1;
rad1.setPotencia(300);
rad1.setConsumo(100);
rad1.setNumhoras(15);

radiador rad2;
rad2.setPotencia(400);
rad2.setConsumo(120);
rad2.setNumhoras(16);

radiador rad3;
rad3.setPotencia(410);
rad3.setConsumo(140);
rad3.setNumhoras(19);


lavadora lava1;
lava1.setPotencia(120);
lava1.setConsumo(20);
lava1.setNumhoras(2);

lavadora lava2;
lava2.setPotencia(1238);
lava2.setConsumo(230);
lava2.setNumhoras(26);

lavadora lava3;
lava3.setPotencia(1405);
lava3.setConsumo(211);
lava3.setNumhoras(31);


nevera neve1;
neve1.setPotencia(1268);
neve1.setConsumo(300);
neve1.setNumhoras(45);

nevera neve2;
neve2.setPotencia(1245);
neve2.setConsumo(235);
neve2.setNumhoras(42);

nevera neve3;
neve3.setPotencia(1355);
neve3.setConsumo(270);
neve3.setNumhoras(50);

string electro;
cout << "Introduce o nome do electrodoméstico:" <<endl;
cin >> electro;




//Probamos só con lava1 para comprobar funcionamento:
if (electro=="lava1")
{
    cout<<"O consumo de lava1 é:" << lava1.calcularconsumo()<<endl;
}

else
{
    cout<<"Non existe ese electrodoméstico"<<endl;
}


return(0);
}