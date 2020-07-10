/*
3-Crea una clase que represente a un rectangulo mediante su base y su altura. 
Implementa métodos para cambiar su base y su altura, y otros que calcule su area 
y su perímetro. 
área= base * altura y perímetro=2*base + 2*altura).
 */

package com.mycompany.rectangulo;

import java.io.BufferedReader;
import java.io.InputStreamReader;

class calculos 
{
   
    int base;
    int altura;
    int perimetro;
    int area;
    int resultadoperim;
    int resultadoarea;
    
    
    public void meter_datos(int parambase, int paramaltura)
        {
        base = parambase;
        altura= paramaltura;
        }
    
    public void calcular_perim( ) 
        {
        resultadoperim= base*2 + altura*2;
        System.out.println("Perímetro = " + resultadoperim);
        }
    
    public void calcular_area() 
        {
        resultadoarea= base*altura; 
        System.out.println("Área = " + resultadoarea);
        }
    
}
  
  public class rectangulo {
      
        public static void main(String args[]) 
    {
        
        try 
            {
             calculos rectangulo1;
                
                 /*creamos obxectos*/
                 rectangulo1 = new calculos (); 
                 /*chamamos os métodos do obxecto*/
                rectangulo1.meter_datos(2,4);
                rectangulo1.calcular_perim();
                rectangulo1.calcular_area();
                
            }
        
        catch (Exception e) 
            {
            System.out.println("Sucedeu un erro na lectura");
            }
    }
           
  }   
