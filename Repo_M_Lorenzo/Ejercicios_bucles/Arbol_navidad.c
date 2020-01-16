#include <stdio.h>
#include <math.h>

main ()
{
 int i,j,k,m,dim,tronco;
 char c;
 
c=92;
 
do {
 printf ("Dime la dimension de tu arbol de navidad \n(un entero comprendido entre 3 y 30): ");
 
scanf ("%d",&dim);}
 while (dim<3 || dim>30);
 
for (i=0,j=dim;i<dim;i++,j--)
 {
 for(k=0;k<j;k++)
 printf(" ");
 for(m=dim;m>=j;m--)
 {
 printf("/");
 printf ("%c",c);
 }
 printf ("\n");
 }
 tronco=(dim-dim%3)/3;
 
for(j=1;j<=tronco;j++)
 {
 for(i=1;i<dim;i++)
 printf(" ");
 printf("| |\n");
 }
 
}
