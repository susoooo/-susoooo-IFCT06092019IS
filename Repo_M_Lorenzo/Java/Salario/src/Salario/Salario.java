package Salario;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
import java.util.Scanner;

/**
 *
 * @author mlorenzo
 */
public class Salario {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        double salario;
        float horas;
        float precio;
        System.out.println("CALCULO DE SALARIOS");
        System.out.println("Introduzca el numero de horas:");
        horas = in.nextFloat();
        System.out.println("Introduzca el precio por hora");
        precio = in.nextFloat();
        in.close();
        
        if (horas<=40)
        {
            salario=horas*precio;
            System.out.println("Va a cobrar "+salario+" €" );
        }
        if ((horas>40)&&(horas<=50))
        {
            salario=horas*(precio*1.5);
            System.out.println("Va a cobrar "+salario+" €" );
        }
        if(horas>50)
        {
            salario=horas*(precio*2);
            System.out.println("Va a cobrar "+salario+" €" );
        }
        
        
    }
    
}
