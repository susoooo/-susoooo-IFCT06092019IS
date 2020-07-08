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
public class Ejercicio3 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) 
    {
        Scanner in = new Scanner(System.in);
        int i;
        System.out.println("Ingrese el primer numero");
        int num1 = in.nextInt();
        
        System.out.println("Ingrese el segundo numero");
        int num2 = in.nextInt();
        
        in.close();
        
        if (num1>num2)
        {
            for(i=num2;i<=num1;i++)
            {
                System.out.println(i);
            }
            
            i=num2;
            while(num1>=i)
            {
                System.out.println(i);
                i++;                
            }
            i = num2;
            do{
                System.out.println(i);
                i++;
            }while (num1>=i);
        }
        else
        {
            for(i=num1;i<=num2;i++)
            {
                System.out.println(i);
            }
            
            i=num1;
            while(num2>=i)
            {
                System.out.println(i);
                i++;                
            }
            i = num1;
            do{
                System.out.println(i);
                i++;
            }while (num2>=i);
        }
    }
}
    
    

