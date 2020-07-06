/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package tarea5;
import java.util.Scanner;

/**
 *
 * @author alex
 */
public class Tarea5 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
         Scanner in = new Scanner(System.in);
  
        System.out.println("Introduzca numero:");
        int num1 = in.nextInt();
        System.out.println("Introduzca numero:");
        int num2 = in.nextInt();
        System.out.println("Introduzca numero:");
        int num3 = in.nextInt();
        in.close();
        
        if((num1>num2)&&(num1>num3))
        {
            if (num2>num3)
            {
                System.out.println("El mayor es"+ num1);
                System.out.println("El segundo mayor es" + num2);
                System.out.println("El menor es"+ num3);                
            }
            else
            {
                System.out.println("El mayor es"+ num1);
                System.out.println("El segundo mayor es" + num3);
                System.out.println("El menor es" + num2);
            }
                    
        }
        if((num1>num2)&&(num1<num3))
        {
                System.out.println("El mayor es" + num3);
                System.out.println("El segundo mayor es" + num1);
                System.out.println("El menor es" + num2);
        }
        if((num1<num2)&&(num1<num3))
        {
            if(num2>num3)
            {
                System.out.println("El mayor es" + num2);
                System.out.println("El segundo mayor es" + num3);
                System.out.println("El menor es" + num1);
            }
            else
            {
                System.out.println("El mayor es" + num3);
                System.out.println("El segundo mayor es" + num2);
                System.out.println("El menor es" + num1);
            }
                    
        }
        if((num1<num2)&&(num1>num3))
        {
                System.out.println("El mayor es" + num2);
                System.out.println("El segundo mayor es" + num1);
                System.out.println("El menor es" + num3);
        }
    }
    
}
