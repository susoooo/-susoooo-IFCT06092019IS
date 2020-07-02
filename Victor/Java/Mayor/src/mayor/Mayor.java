/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package mayor;

/**
 *
 * @author victor
 */
import java.util.Scanner;
public class Mayor {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int x;
        int y;
        int z;
        System.out.println("Calcular número mayor\n");
        System.out.println("Introduce el primer número X");
        Scanner entradaEscaner = new Scanner (System.in); 
        x = entradaEscaner.nextInt (); 
        System.out.println("Introduce el segundo número Y");
        y = entradaEscaner.nextInt (); 
        System.out.println("Introduce el tercer número Z");
        z = entradaEscaner.nextInt ();
        if (x > y && x > z)
	{
            System.out.println("X es el número mayor ="+x);
            if (y > z)
            {
            System.out.println("Y es el segundo número mayor ="+y);
            System.out.println("Z es el número menor ="+z);
            }
            else
            {
                System.out.println("Z es el segundo número mayor ="+z);
		System.out.println("Y es el número menor ="+y);
            }
        }
	else 
	{
            if(y > x && y > z)
            {
                System.out.println("Y es el número mayor ="+y);
                if (x > z)
                {
                    System.out.println("X es el segundo número mayor ="+x);
                    System.out.println("Z es el número menor ="+z);
                }
                else
                {
                    System.out.println("Z es el segundo número mayor ="+z);
                    System.out.println("X es el número menor ="+x);
                }
            }
            else 
            {
                if(z > x && z > y)
                {
                    System.out.println("Z es el número mayor ="+z);
                    if (x > y)
                    {
                        System.out.println("X es el segundo número mayor ="+x);
			System.out.println("Y es el número menor ="+y);
                    }
                    else
                    {
			System.out.println("X es el segundo número mayor ="+x);
			System.out.println("X es el número menor ="+x);
                    }
                }
            }
        }
    }
    
}
