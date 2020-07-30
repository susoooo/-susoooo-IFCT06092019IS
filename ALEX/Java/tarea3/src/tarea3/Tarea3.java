/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package tarea3;
import java.util.Scanner;



public class Tarea3 {

    
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner in = new Scanner(System.in);
        int i;
        System.out.println("Introducir primer numero");
        int num1 = in.nextInt();
        
        System.out.println("Introducir segundo numero");
        int num2 = in.nextInt();
        
        in.close();
        
            for(i=num2;i<=num1;i++)
            {
                System.out.println(i);
            }
                       
        }
}

    
    

