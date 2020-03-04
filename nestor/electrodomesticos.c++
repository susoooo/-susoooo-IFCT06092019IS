/*Crea una clase electrodoméstico. Esta clase incluirá información 
sobre la potencia del electrodomestico y su consumo por hora en 
watios y el número de horas que lleva encendido desde el último 
ciclo de consumo. Incluyele un método calcular_consumo que calcule 
l consumo como el resultado de multiplicar la portencia por su 
consumo por hora por el tiempo que lleva encendido desde el último 
ciclo de consumo.
Crea una clase lavadora, hija de electrodoméstico, que calcule el 
consumo teniendo en cuenta que la potencia que utiliza para el 
consumo es la mitad de la que tiene como propiedad.
Crea una clase nevera, hija de electrodoméstico, que calcule el 
consumo teniendo en cuenta que el consumo por hora es un 70% del 
que tiene especificado como propiedad.
Crea una clase radiador, hija de electrodomestico, que calcule el 
consumo de la misma forma que su predecesora.
Haz un programa que pida al usuario los datos de 3 lavadoras, 
3 neveras y 3 radiadores, y haz que se calculen los consumos de 
cada uno de ellos.*/

#include <stdio.h>
#include <iostream>
#include <string>
#include <string.h>
using namespace std;
  
class electrodomestico 
    {
    protected:
    //definimos las variables
    string tipoelectro;
    float potencia,consumo_hora,num_horas_ultimociclo; 
    public://definimos los  constructores y los hacemos publicos se saben que son los constructores por que tienen el mismo nombre que la clase
    float calcular_consumo();// Constructor para crear electrodomesticos sin saber sus datos;
    void setpotencia(int novapotencia);
    void setconsumo_hora(int novoconsumo_hora);
    void setnum_horas_ultimociclo(int novahoras_ultimociclo);
    void imprimir_consumo();
    };
    void electrodomestico::setpotencia(int novapotencia)
        {
         potencia=novapotencia;
        }
    void electrodomestico::setconsumo_hora(int novoconsumo_hora)
        {
         consumo_hora=novoconsumo_hora;
        }
    void electrodomestico::setnum_horas_ultimociclo(int novosetnum_horas_ultimociclo)
        {
         consumo_hora=novosetnum_horas_ultimociclo;
        }
    class lavadora : public electrodomestico
        {
          float calcular_consumo();
        };
    class nevera : public electrodomestico
        {
          float calcular_consumo();
        };
    class radiador : public electrodomestico
        {
          float calcular_consumo();
        };
    float electrodomestico::calcular_consumo()
        {
        return(potencia * consumo_hora * num_horas_ultimociclo);
        }
     void electrodomestico::imprimir_consumo()
        {
        cout << "El consumo de " << tipoelectro << " es =" << calcular_consumo() << endl;
        }   
    float lavadora::calcular_consumo()
        {
        return((potencia/2) * consumo_hora * num_horas_ultimociclo);
        }
    float nevera::calcular_consumo()
        {
        cout << "* " << potencia << consumo_hora << num_horas_ultimociclo << endl;
        fflush(stdout);
        return(((potencia*70)/100) * consumo_hora * num_horas_ultimociclo);
        }
int main(void)
    {
    string tipoelectro;

    lavadora lavadora1;
    nevera nevera1;
    radiador radiador1;
    electrodomestico electrodomestico1;

            electrodomestico1.setpotencia(1000);
            electrodomestico1.setconsumo_hora(2);
            electrodomestico1.setnum_horas_ultimociclo(2);

            lavadora1.setpotencia(500);
            lavadora1.setconsumo_hora(2);
            lavadora1.setnum_horas_ultimociclo(2);

            nevera1.setpotencia(700);
            nevera1.setconsumo_hora(2);
            nevera1.setnum_horas_ultimociclo(2);

            radiador1.setpotencia(1000);
            radiador1.setconsumo_hora(2);
            radiador1.setnum_horas_ultimociclo(2);

    cout << "Bienvenido al programa consumo+\nPor favor escriba el nombre del electrodomestico del que desea ver el consumo" << endl;
    cin >> tipoelectro;
        if (tipoelectro == "Lavadora")
            {
            lavadora1.imprimir_consumo();
            }
        if (tipoelectro == "Nevera")
            {
            nevera1.imprimir_consumo();
            }
        if (tipoelectro == "Radiador")
            {
            radiador1.imprimir_consumo();
            }
       
            

            //electrodomestico1.imprimir_consumo();
            //lavadora1.imprimir_consumo();
            //nevera1.imprimir_consumo();
            //radiador1.imprimir_consumo();
    }