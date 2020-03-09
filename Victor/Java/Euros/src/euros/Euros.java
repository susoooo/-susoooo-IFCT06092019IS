/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package euros;

/**
 *
 * @author victor
 */
import java.util.Scanner;
public class Euros {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        double dol;
        double res;
        System.out.println("Conversor de Dólares a Euros\n");
        System.out.println("Introduce los Dólares");
        Scanner entradaEscaner = new Scanner (System.in); 
        dol = entradaEscaner.nextDouble (); 
        res = dol*1.3325;
        System.out.println("Euros: "+res);
    }
    
}
