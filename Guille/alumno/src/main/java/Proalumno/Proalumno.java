package Proalumno;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author guille
 */
class fichalumno
{ 
 int dni;
 String nome;
 String apelidos;
 int[] notas = new int [30];
 String [] asign = new String [30];
 int Nonot;
 int nas;
 public int getdni(){
   return dni;   
 };
 public void setdni(int dni) {
        this.dni = dni;
    }
 public String getnome(){ 
   return nome;
 }
 public void setNome(String nome) {
        this.nome = nome;
    }
 public String getapelidos(){
    return apelidos;   
 };
 public void setapelidos(String apelidos) {
        this.apelidos = apelidos;
    }
 public int notas(int nn){
     return notas[nn];   
 };
 public void setnotas(int nn,int notas) {
        this.notas[nn] = notas;
    }
 public String getasign(int nas){
     return asign[nas]; 
};
 public void setasign(int nas,String novas) {
        this.asign[nas] = novas;
    }
 public int Nonot(){
  return Nonot;   
 };
 public void setNonot(int Nonot) {
        this.Nonot = Nonot;
    }
 
 
 
 
 float medianot(){
 int contador;
 float actualiza;
 float medianot;
 actualiza=0;
 
     for (contador=0;contador<Nonot;contador++)
 {  
      actualiza = actualiza + notas[contador];
              }
     
      medianot = actualiza/Nonot;     
      return medianot;
 
} 
}     
  public class Proalumno {
     public static void main(String[] args) 
     { 
   fichalumno Datos,medianot;
   Datos = new fichalumno ();
   Datos.setnotas(0, 5);
   Datos.setnotas(1, 7);
   Datos.setNonot(2);
   System.out.println(Datos.medianot());
   
     }
     
     
}
