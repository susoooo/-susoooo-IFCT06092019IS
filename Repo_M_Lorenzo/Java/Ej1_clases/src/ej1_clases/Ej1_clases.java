/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
import java.util.Scanner;
import java.lang.Math;


public class Ej1_clases {

    
    public static void main(String[] args) {
       punto p[];
       int i,n_puntos,c_x[],c_y[],c_z[];
       Scanner in = new Scanner(System.in);
       System.out.println("Introduzca el numero de puntos:");
       n_puntos=in.nextInt();
       
       for (i=0;i<n_puntos;i++)
       {
           p[i] = new punto((int)(Math.random()*10),(int)(Math.random()*10),(int)(Math.random()*10));
       }
       for (i=0;i<n_puntos;i++)
       {
           System.out.println("Punto: "+i);
           System.out.println("\tCoordenada X: "+p[i].ver_cx());
           System.out.println("\tCoordenada Y: "+p[i].ver_cy());
           System.out.println("\tCoordenada Z: "+p[i].ver_cz());
        
       }
       
    }
    
}
class punto
{
private int x,y,z;
public punto(int a,int b, int c) 
	{this.x = a;this.y = b;this.z=c;}
public int ver_cx()
        {return this.x;}
public int ver_cy()
        {return this.y;}
public int ver_cz()
        {return this.z;}
}