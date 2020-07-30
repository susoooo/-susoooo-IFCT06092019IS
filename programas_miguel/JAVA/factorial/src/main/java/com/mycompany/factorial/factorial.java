/*
 Ejercicio 4
Realizar un programa que pida un número y calcule su factorial.
 */
package com.mycompany.factorial;

import java.io.BufferedReader;
import java.io.InputStreamReader;

/**
 *
 * @author ubuntu1
 */
public class factorial {
    
    public static void main(String args[]) 
    {
        
        try 
            {

            System.out.println("Introduce o número do que queres calcular o factorial: ");
            BufferedReader numero = 
            new BufferedReader(new InputStreamReader(System.in));
            int numeropedido = Integer.parseInt(numero.readLine());
            
                
                double factorial;
                factorial=1;
                for (int i = numeropedido; i > 0; i--) 
                    {
                    factorial = factorial * i;
                    }
                System.out.println( factorial );
                
            
            }
         
        
        catch (Exception e) 
            {
            System.out.println("Sucedeu un erro na lectura");
            }
                
    }
}
