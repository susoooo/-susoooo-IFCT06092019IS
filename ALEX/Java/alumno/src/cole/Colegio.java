/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package cole;

/**
 *
 * @author alex
 */
 class Alumno {

   String dni;
   String nombre;
   String apellido;
   int [] arraynotas = new int[30];
   String [] arraymatriculadas = new String[30];
   
   public Alumno(String dni,String nombre,String apellido)
   {
       this.dni=dni;
       this.nombre=nombre;
       this.apellido=apellido;
       
   }
}
  
   public class Colegio
    {
    public static void main(String[] args) {
        Alumno estudiante;
        estudiante = new Alumno("33","juan","muño");
        System.out.println("Datos del alumno "+ estudiante);
    }
   }
   

