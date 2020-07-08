/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package factorial;

/**
 *
 * @author victor
 */
import java.util.Scanner;
public class Factorial {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int num;
        int res;
        int i;
        System.out.println("Calcula factorial\n");
        System.out.println("Introduce el número");
        Scanner entradaEscaner = new Scanner (System.in); 
        num = entradaEscaner.nextInt ();
        res=num;
        for (i = num-1; i >=1 ; i--) 
        {
            res=res*i;
        }
        System.out.println("Factorial: "+res);
    }
    
}
