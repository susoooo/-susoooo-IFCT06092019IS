/*
Realizar un programa que pida al usuario dos números y presente los números del
primero número al segundo que introdujo el usuario. Repetir este ejercicio con todos los
tipos de bucles (for, while, y do-while).
 */
package com.mycompany.dousnum2for;

import java.io.*;

public class dousnum2for {

    public static void main(String[] args) 
    {
        
        try 
            {

            System.out.println("Introduce o número 1: ");
            BufferedReader numeros = 
            new BufferedReader(new InputStreamReader(System.in));
            int num1 = Integer.parseInt(numeros.readLine());

            System.out.println("Introduce o número 2: ");
            int num2 = Integer.parseInt(numeros.readLine());   


            int num;
            num=0;

            for(num=num1; num<=num2; num++)
                {
                    System.out.println( num );
                 }
            }
        
        catch (Exception e) 
            {
            System.out.println("Sucedeu un erro na lectura");
            }
                
    }
}
