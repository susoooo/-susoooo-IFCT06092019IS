/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Factorial;
import java.util.Scanner;

        

/**
 *
 * @author alex
 */
public class Factorial {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        Scanner in = new Scanner(System.in);
        double factorial;
        System.out.println("CALCULANDO FACTORIAL");
        System.out.println("Introduzca el numero:");
        int num1 = in.nextInt();
        in.close();
        if (num1<0)
        {
            System.out.println("ERROR. Numero menor que 0");
        }
        else
        {
            if (num1==0)
            {
                factorial=1;
                System.out.println(factorial);
            }
            else
            {
                factorial=1;
                while(num1!=0)
                {
                    factorial=factorial*num1;
                    num1--;
                }
                System.out.println(factorial);
            }
        }
    }
    
}
    
    

