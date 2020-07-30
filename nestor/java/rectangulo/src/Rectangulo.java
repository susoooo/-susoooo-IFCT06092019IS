import java.io.*;
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
//package Rectangulo;

/**
 *
 * @author nestor
 */
public class Rectangulo
{

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) 
    {
        try
        { 
           String nuevocalculo;
          
            int perimetro;
            double area;
            System.out.println("                       Bienvenido al programa FORMAS+");
            System.out.println("                      --------------------------------");
            System.out.println();
            System.out.println("Este programa esta diseñado prara calcular el area y el perimetro de formas geometricas");
            System.out.println("En esta primera version 1.0 solo realizara el calculo de cuadrados y rectangulos");
            System.out.println();
            do 
          {
            System.out.println("Por favor introduzca la logitud del lado mayor en cm = ");       
        
            BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        
            int i1 = Integer.parseInt(in.readLine());
                                            ///cin >> ladomayor;
                                           //rectangulo1.cambiarladomaior(ladomayor);
            System.out.println("Por favor introduzca la logitud del lado menor en cm = ");

            BufferedReader in2 = new BufferedReader(new InputStreamReader(System.in));
                           
                           int i2 = Integer.parseInt(in.readLine());              
                                            //cin >> ladomenor;
                                           //rectangulo1.cambiarladomenor(ladomenor);
            perimetro = i1 + i2;
            area = i1 * i2;
            System.out.println("El perimetro del rectangulo es = "+perimetro);
            System.out.println("El area del rectangulo es = "+area);
        
            System.out.println("Desea hacer mas calculos s/n ?");
                                              //cin >> cambiocolor;
            BufferedReader in3 = new BufferedReader(new InputStreamReader(System.in));
            nuevocalculo = (in.readLine());
          }
          while ("s".equals(nuevocalculo));
        }
            catch (Exception e)
            {
              System.out.println("tas errado my friend");
          
            }
    }
}