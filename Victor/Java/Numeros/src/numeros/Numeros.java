/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package numeros;

/**
 *
 * @author victor
 */
import java.util.Scanner;
public class Numeros {

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
        for (i = n1; i <= n2; i++) 
        {
            System.out.println(i);
        }
    }
    
}
