/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package area;

/**
 *
 * @author victor
 */
import java.util.Scanner;
public class Area {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int l1;
        int l2;
        System.out.println("Calcular área y perímetro\n");
        System.out.println("Introduce un lado del rectángulo");
        Scanner entradaEscaner = new Scanner (System.in); 
        l1 = entradaEscaner.nextInt (); 
        System.out.println("Introduce otro lado del rectángulo");
        l2 = entradaEscaner.nextInt (); 
        System.out.println("Perímetro: "+(l1+l2));
        System.out.println("Área: "+l1*l2);
    }
    
}
