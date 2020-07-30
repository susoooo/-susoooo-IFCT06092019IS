/*
4-Crea una clase que represente a un alumno. Cada alumno se identifica por su DNI. 
Se desea almacenar información de su nombre, sus apellidos, y sus notas finales en 
las asignaturas en las que se ha matriculado. De dichas asignaturas se desea 
almacenar tambien el nombre. Un alumno como mucho puede haberse matriculado de 30 
asignaturas. Crea un programa en el que se pueda meter los datos de un alumno , y 
que calcule la nota media del alumno, utilizando objetos.
 */


package com.mycompany.puntoespazo;

import java.io.BufferedReader;
import java.io.InputStreamReader;

class alumno  
{
    
    int dni;
    String nome;
    String apelidos; 
    float notamedia;
    String [] nomeasign = new String [30];
    float [] notaasign = new float [30];
    int num_asignaturas=0; //número de asignaturas por alumno (necesario este dato para calcular a nota media)
    


public void calcular_media()
        {
        float sumanotas;
        sumanotas = 0;
        
        for (int contador=0; contador <= num_asignaturas; contador++) 
        {
        sumanotas= sumanotas + notaasign[contador];
        }
        notamedia = sumanotas / num_asignaturas;
        System.out.println("Nota media de " + nome + " é: " + notamedia);
        }

public void meter_notas(float param_nota, String param_asignatura)    
        {
        notaasign[num_asignaturas]=param_nota;
        nomeasign[num_asignaturas]=param_asignatura;
        num_asignaturas++;
        }

public void meter_nome(String param_nome)
    {
    nome=param_nome;
    }
        

}



  public class calculodenotas {
      
        public static void main(String args[]) 
    {
        
        try 
            {
                alumno jose, ramon, pepe, moncho;
                
                 /*creamos obxectos*/
                 jose = new alumno ();
                 ramon = new alumno ();
                 pepe = new alumno ();
                 moncho = new alumno ();
                 /*chamamos os métodos do obxecto*/
                jose.meter_nome("Jose");
                jose.meter_notas(5, "Ciencias");
                jose.meter_notas(8, "Matemáticas");
                jose.meter_notas(6, "Física");
                jose.meter_notas(7, "Inglés");
                jose.calcular_media();
            
                
            }
        
        catch (Exception e) 
            {
            System.out.println("Sucedeu un erro na lectura");
            }
    }
        
        
        
    
  }
