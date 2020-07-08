/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package trabajador;

/**
 *
 * @author victor
 */
import java.util.Scanner;
public class Trabajador {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        double horas;
        double precio;
        double extra;
        double extra2;
        double res;
        System.out.println("Calcular salario semanal de trabajador\n");
        System.out.println("Introduce las horas trabajadas por semana");
        Scanner entradaEscaner = new Scanner (System.in); 
        horas = entradaEscaner.nextDouble (); 
        System.out.println("Introduce precio por hora");
        precio = entradaEscaner.nextDouble (); 
        if (horas<=40)
        {
            res=horas*precio;
        }
        else
        {
            extra=horas-40;
            if (extra<=10)
            {
                res=(40*precio)+(extra*(precio+(precio*0.5)));
            }
            else
            {
                extra2=extra-10;
                res=(40*precio)+(extra*(precio+(precio*0.5)))+(extra2*(precio*2));
            }
        }
        System.out.println("Salario semanal "+res);
    }
    
}
