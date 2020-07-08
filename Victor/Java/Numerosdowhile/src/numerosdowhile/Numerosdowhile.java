/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package numerosdowhile;

/**
 *
 * @author victor
 */
import java.util.Scanner;
public class Numerosdowhile {

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
        do  
        {
            System.out.println(i);
            i++;
        }while (i <= n2 );
    }
    
}
