/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
import java.util.Scanner;

/**
 *
 * @author mlorenzo
 */
public class Ejercicio5 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        
        System.out.println("MAYOR O MENOR");
        System.out.println("Introduzca el primer numero:");
        int num1 = in.nextInt();
        System.out.println("Introduzca el primer numero:");
        int num2 = in.nextInt();
        System.out.println("Introduzca el primer numero:");
        int num3 = in.nextInt();
        in.close();
        
        if((num1>num2)&&(num1>num3))
        {
            if (num2>num3)
            {
                System.out.println(num1);
                System.out.println(num2);
                System.out.println(num3);                
            }
            else
            {
                System.out.println(num1);
                System.out.println(num3);
                System.out.println(num2);
            }
                    
        }
        if((num1>num2)&&(num1<num3))
        {
                System.out.println(num3);
                System.out.println(num1);
                System.out.println(num2);
        }
        if((num1<num2)&&(num1<num3))
        {
            if(num2>num3)
            {
                System.out.println(num2);
                System.out.println(num3);
                System.out.println(num1);
            }
            else
            {
                System.out.println(num3);
                System.out.println(num2);
                System.out.println(num1);
            }
                    
        }
        if((num1<num2)&&(num1>num3))
        {
                System.out.println(num2);
                System.out.println(num1);
                System.out.println(num3);
        }
    }
    
}
