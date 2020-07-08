/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author alex
 */
import java.util.Scanner;
public class convertidor {
   public static void main(String[] args) {
        // TODO code application logic here
        Scanner in = new Scanner(System.in);
    
	System.out.println("Bienvenido a  CONVERTIDOR");
	System.out.println("by Alex");
	System.out.println("Version 3.0");
	System.out.println("by Alex FerLO");
	
            System.out.println("DOLAR : ");
            double DOLAR = in.nextInt();
            double cambio = DOLAR*1.33250;
            System.out.println(cambio + " €");
       System.out.println("Gracias por utilizar  CONVERTIDOR");
}
}

	