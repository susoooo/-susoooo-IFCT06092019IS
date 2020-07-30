/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package media;

import java.util.Scanner;

/**
 *
 * @author alex
 */
public class Media {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic her
         Scanner in = new Scanner(System.in);
        int opcion;
        double notas[];
        notas = new double[5];
        double mayor;
        double menor;
        double media;
        int i;
        media=0;
        System.out.println("Introducir calificacion del alumno ");
        for(i=0;i<5;i++)
        {
         notas[i] = in.nextDouble();
        }
        
        do{
        System.out.println("Seleccionar  opcion:");
        System.out.println("0- Salir.");
        System.out.println("1- Listar notas.");
        System.out.println("2- Calcular nota media.");
        System.out.println("3- Nota maxima.");
        System.out.println("4- Nota minima.");
        opcion = in.nextInt();
        
        switch (opcion) 
        {
            case 1: 
            {
                for(i=0;i<5;i++)
                {
                    System.out.println(notas[i]);
                }
                break;
            }
				
            case 2:
            {
                for(i=0;i<5;i++)
                {
                    media = media +notas[i];
                }
                media=media/5;
                System.out.println("La nota media es: " + media);
                break;
            }
            case 3: 
            {
                mayor=0;
                for(i=0;i<5;i++)
                {
                    if (notas[i]>mayor)
                    {
                        mayor=notas[i];
                    }
                }
                
                System.out.println("La nota mayor es: " + mayor);
                break;
            }
            case 4:
            {
                menor=10;
                for(i=0;i<5;i++)
                {
                    if (notas[i]<menor)
                    {
                        menor=notas[i];
                    }
                }
                System.out.println("La nota menor es: "+ menor);
                break;
            }
				
            default: 
            {
                opcion=0;
                System.out.println("Saliendo");
            }
        }
        }while(opcion!=0);
        in.close();
    }
    
}
