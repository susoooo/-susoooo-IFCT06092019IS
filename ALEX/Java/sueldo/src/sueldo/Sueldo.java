/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package sueldo;
import java.util.Scanner;
/**
 *
 * @author alex
 */
public class Sueldo {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
      Scanner in = new Scanner(System.in);
        double sueldo;
        float horas;
        float precio;
        
        System.out.println("Introducir horas");
        horas = in.nextFloat();
        System.out.println("Introducir p/h");
        precio = in.nextFloat();
        in.close();
        
        if (horas<=40)
        {
            sueldo=horas*precio;
            System.out.println("Salario "+ sueldo +" €" );
        }
        if ((horas>40)&&(horas<=50))
        {
            sueldo=horas*(precio*1.5);
            System.out.println("Salario "+ sueldo +" €" );
        }
        if(horas>50)
        {
            sueldo=horas*(precio*2);
            System.out.println("Salario "+ sueldo +" €" );
        }
    }
    
}
