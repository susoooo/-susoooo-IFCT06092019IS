/*
Realizar un programa que pida al usuario dos números y presente los números del
primero número al segundo que introdujo el usuario. Repetir este ejercicio con todos los
tipos de bucles (for, while, y do-while).
 */
package com.mycompany.dousnum2dowhile;

import java.io.*;

public class dousnum2dowhile {

    public static void main(String args[]) 
    {
        
        try 
            {

            System.out.println("Introduce o número 1: ");
            BufferedReader numeros = 
            new BufferedReader(new InputStreamReader(System.in));
            int num1 = Integer.parseInt(numeros.readLine());

            System.out.println("Introduce o número 2: ");
            int num2 = Integer.parseInt(numeros.readLine());   


                do {
                    System.out.println( num1 );
                    num1++;
                    }
                while (num1 <= num2);
            
            }
         
        
        catch (Exception e) 
            {
            System.out.println("Sucedeu un erro na lectura");
            }
                
    }
}
