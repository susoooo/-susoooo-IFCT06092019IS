/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
//package cambio_$a€;
import java.util.Scanner;
/**
 *
 * @author mlorenzo
 */
public class Cambio_$a€ {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        System.out.println("Programa que calcula cambio de $ a €");

        System.out.println("Ingrese el importe en $: ");
        double dolar = in.nextInt();

        double euro = dolar*1.33250;
        
        System.out.println(dolar + "son " + euro);
        
    }
    
}
