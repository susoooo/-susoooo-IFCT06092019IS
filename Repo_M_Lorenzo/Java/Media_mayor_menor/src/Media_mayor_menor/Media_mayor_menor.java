package Media_mayor_menor;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
import java.util.Scanner;
import java.lang.Math;

/**
 *
 * @author mlorenzo
 */
public class Media_mayor_menor {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int opcion;
        float notas[];
        notas = new float[40];
        float mayor;
        float menor;
        float media;
        int i;
        media=0;
        System.out.println("Introduzca la nota del alumno:");
        for(i=0;i<40;i++)
        {
            notas[i] =0;
        }
        for(i=0;i<40;i++)
        {
            notas[i] = (float)(Math.random()*10);
        }
        
        do{
        System.out.println("Seleccione la opcion:");
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
                for(i=0;i<40;i++)
                {
                    System.out.println(notas[i]);
                }
                break;
            }
				
            case 2:
            {
                for(i=0;i<40;i++)
                {
                    media=media+notas[i];
                }
                media=media/40;
                System.out.println("La nota media es: " + media);
                break;
            }
            case 3: 
            {
                mayor=0;
                for(i=0;i<40;i++)
                {
                    if (notas[i]>mayor)
                    {
                        mayor=notas[i];
                    }
                }
                
                System.out.println("La mayor nota es: " + mayor);
                break;
            }
            case 4:
            {
                menor=10;
                for(i=0;i<40;i++)
                {
                    if (notas[i]<menor)
                    {
                        menor=notas[i];
                    }
                }
                System.out.println("La menor nota es: "+ menor);
                break;
            }
				
            default: 
            {
                opcion=0;
                System.out.println("Saliendo. Adiós y gracias");
            }
        }
        }while(opcion!=0);
        in.close();
    }
    
}
