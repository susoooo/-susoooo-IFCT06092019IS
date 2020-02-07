#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
using namespace std;

class Punto
{
    public:
    int x;
    int y;
    int z;
    double dist;

    
    void coord();
    void distancia(Punto p1);
};

void Punto::coord()
{

    srand(time(0));
    x=rand()%10;
    y=rand()%10;
    z=rand()%10;
    sleep(1);
}

void Punto::distancia(Punto p1)
{
    dist=sqrt(((p1.x-x)*(p1.x-x))+((p1.y-y)*(p1.y-y))+((p1.z-z)*(p1.z-z)));
        
}

int main()
{
    Punto origen;
    Punto pts[20];
    int i;

    origen.x=0;
    origen.y=0;
    origen.z=0;

    for(i=0;i<20;i++)
    {
        pts[i].coord();
        pts[i].distancia(origen);
        cout<<"La distancia al origen desde el punto "<<i+1<<" es:"<< pts[i].dist<<endl;
    }

    return(0);

}