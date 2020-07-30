/*
 1-Crea una clase que represente un punto en el espacio.
Crea tres objetos puntos y posicionalos en el espacio de forma aleatoria.
 */
package com.mycompany.puntoespazo;

import java.io.BufferedReader;
import java.io.InputStreamReader;


class posicion 
{
    
    int x;
    int y;
    
    public void cambiarpos( int paramx, int paramy) {
   x = paramx;
   y= paramy;
        }
    
    public void imprimir(){
        System.out.println("Posición de X: " + x);
        System.out.println("Posición de y: " + y);
    }
}
  
  public class puntoespazo {
      
        public static void main(String args[]) 
    {
        
        try 
            {
               posicion punto1, punto2, punto3; /*variables que funcionan como obxectos*/
               /*creamos obxectos*/
               punto1 = new posicion (); 
               punto2 = new posicion ();
               punto3 = new posicion ();
               
               /*chamamos os métodos do obxecto*/
               punto1.cambiarpos(2,6); 
               punto2.cambiarpos(5,9);
               punto3.cambiarpos(10,16);
                
               /*Chamamos ó método imprimir*/
               punto1.imprimir(); 
               punto2.imprimir();
               punto3.imprimir();
               
               
            }
        
        catch (Exception e) 
            {
            System.out.println("Sucedeu un erro na lectura");
            }
    }
        
        
        
    
  }     
        
    
    
         
        
        
           
