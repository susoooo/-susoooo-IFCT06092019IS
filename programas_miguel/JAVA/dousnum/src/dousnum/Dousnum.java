/*
Realizar un programa que pida al usuario dos números y presente los números del
primero número al segundo que introdujo el usuario. Repetir este ejercicio con todos los
tipos de bucles (for, while, y do-while).
 */

import java.io.*;

public class Dousnum {

    public static void main(String[] args) 
    {
        
        try 
        {
            
        System.out.println("Introduce o número 1: ");
        BufferedReader in = 
	new BufferedReader(new InputStreamReader(System.in));
        int num1 = Integer.parseInt(in.readLine());
        
        System.out.println("Introduce o número 2: ");
        int num2 = Integer.parseInt(in.readLine());   
        
        
        }
        
        catch (Exception e) 
        {
        System.out.println("Sucedeu un erro na lectura");
        }
                
    }
    
}
