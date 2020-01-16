#include <stdio.h>
#include <math.h>
#include <string.h>



long facto(int num)
{
    if (num==0 || num==1)
    {
        return 1;
    }
    else
    {
        return num*facto(num-1);
    }
    
}

int datos()
{
    int dato;
    dato=0;
    printf("Introduzca un numero:\n");
    scanf("%d",&dato);

    return(dato);
}

int main()
{
    int n;
    int r;
    int nr;
    long combinacion;
    long fn;
    long fr;
    long fnr;
    
    n=0;
    r=0;
    nr=0;
    fn=0;
    fr=0;
    fnr=0;
    combinacion=0;

	printf("Combinaciones C(n,r)\n");
    n=datos();
    r=datos();
    nr=n-r;
    fn=facto(n);
    fr=facto(r);
    fnr=facto(nr);

    combinacion=fn*(fr*fnr);

    printf("La combinacion C(%d,%d) es: %ld\n",n,r,combinacion); 

	
	
	return(0);
}