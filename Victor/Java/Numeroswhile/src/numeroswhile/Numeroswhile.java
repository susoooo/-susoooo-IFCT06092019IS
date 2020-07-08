/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package numeroswhile;

/**
 *
 * @author victor
 */
import java.util.Scanner;
public class Numeroswhile {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int n1;
        int n2;
        int i;
        System.out.println("Mostrar números entre dos valores\n");
        System.out.println("Introduce el primer número");
        Scanner entradaEscaner = new Scanner (System.in); 
        n1 = entradaEscaner.nextInt (); 
        System.out.println("Introduce el segundo número");
        n2 = entradaEscaner.nextInt (); 
        i=n1;
        while (i <= n2 ) 
        {
            System.out.println(i);
            i++;
        }
    }
    
}
