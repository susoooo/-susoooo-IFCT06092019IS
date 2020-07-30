/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.mycompany.novoalumno02;



/**
 *
 * @author guille
 */
class novoalumno
{ 
 int dni;
 String nome;
 String apelidos;
 int[] notas = new int [30];
 String [] asign = new String [30];
 int Nonot;
 
 float medianot(){
 int contador;
 float actualiza;
 actualiza=0;
 
     for (contador=0;contador<Nonot;contador++)
 {  
      actualiza = actualiza + notas[contador];
              }
     
      float medianot = actualiza/Nonot;     
      return medianot;
 
} 
}     
  public class proalumno {
     public void main(String[] args) 
     { 
   novoalumno Datos,medianot;
   Datos = new novoalumno ();
   medianot = new novoalumno(); 
     }
     
     
}
