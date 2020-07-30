/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.mycompany.hp;

/**
 *
 * @author guille
 */
class Forma  {
 String color;
 int coorc1;
 int coorc2;
 int coorc3;
 String nomfor;
 
 
 public String getcolor(){
   return color;   
 };
 public void setcolor(String color) {
        this.color = color;
    }
 public int getcoorc1(){ 
   return coorc1;
 }
 public void setcoorc1(int coorc1) {
        this.coorc1 = coorc1;
    }
  public int getcoorc2(){ 
   return coorc2;
 }
 public void setcoorc2(int coorc2) {
        this.coorc2 = coorc2;
    }
  public int getcoorc3(){ 
   return coorc3;
 }
 public void setcoorc3(int coorc3) {
        this.coorc3 = coorc3;
    }
  
 
 

 public  class Rectangulo extends Forma {
  int ladomay;
  int ladome;
 
  public int getladomay(){
     return ladomay; 
  }
 public void setladomay(int ladomay) {
        this.ladomay = ladomay;    
      } 
 public int getladome() {
     return ladome; 
    }
 public void setladome(int ladome){
         this.ladome = ladome;   
 }
 
  public int calculArea(){
   return(ladomay*ladome);
 }
   public int calculPeri() {
   return(2*ladomay+2*ladome);
 }
 
 
 
 
 
 
 
 
 
  }
  class Medico extends Asalariado{
   int pacientes;    
   public int getpacientes(){
        return pacientes;
   }
    public void setpacientes(int pacientes){
           this. pacientes = pacientes;   
    }
  }
   class Obrero extends Asalariado{
     String cargo;  
   public String getcargo(){
         return cargo;   
   }
   public void setcargo(String cargo){
         this.cargo = cargo;    
   }
   }
  public class Datperson {
     public static void main(String[] args) 
     { 
   Persona Nosalario;
   Nosalario = new Persona (); 
   Nosalario.setNome("Suso");
   Nosalario.setprimeiroapelido("González");
   Nosalario.setsegundoapelido("López");
   Nosalario.setdni(33333333);
   Nosalario.setfechanaz(121580);
   Nosalario.setlugarnaz("Lugo");
   Nosalario.setpaisnaz("Galiza");
   
     System.out.println( 
                        Nosalario.getnome() +
                        Nosalario.getprimeiroapelido()+
                        Nosalario.getsegundoapelido()+
                        Nosalario.getdni()+
                        Nosalario.getfechanaz()+
                        Nosalario.getlugarnaz()+
                        Nosalario.getpaisnaz());
              
     
     
    Asalariado Jipi;
    Jipi = new Asalariado();
   Jipi.setNome("Eduardo");
   Jipi.setprimeiroapelido("Gómez");
   Jipi.setsegundoapelido("Santos");
   Jipi.setdni(33333444);
   Jipi.setfechanaz(151380);
   Jipi.setlugarnaz("Lugo");
   Jipi.setpaisnaz("Galiza");
   Jipi.setsalario(1500);
   Jipi.setretencion(4.6f);
   
     System.out.println( 
                        Jipi.getnome()+
                        Jipi.getprimeiroapelido()+
                        Jipi.getsegundoapelido()+
                        Jipi.getdni()+
                        Jipi.getfechanaz()+
                        Jipi.getfechanaz()+
                        Jipi.getpaisnaz()+
                        Jipi.getsalario()+
                        Jipi.getretencion());
     
     
     
    Asalariado Ordinario;
    Ordinario = new Asalariado(); 
   Ordinario.setNome("Jacinto");
   Ordinario.setprimeiroapelido ("Robles");
   Ordinario.setsegundoapelido ("Fernández");
   Ordinario.setdni (23232323);
   Ordinario.setfechanaz(151380);
   Ordinario.setlugarnaz("Lugo");
   Ordinario.setpaisnaz("Galiza");
   Ordinario.setsalario(1500);
   Ordinario.setretencion(4.6f);
    
      System.out.println(
                        Ordinario.getnome()+
                        Ordinario.getprimeiroapelido()+
                        Ordinario.getsegundoapelido()+
                        Ordinario.getdni()+
                        Ordinario.getfechanaz()+
                        Ordinario.getfechanaz()+
                        Ordinario.getpaisnaz()+
                        Ordinario.getsalario()+
                        Ordinario.getretencion());
     
     
     Medico Galeno;
     Galeno = new Medico();
   
   Galeno.setNome("José");
   Galeno.setprimeiroapelido ("García");
   Galeno.setsegundoapelido ("Ruiz");
   Galeno.setdni (23234444);
   Galeno.setfechanaz(151380);
   Galeno.setlugarnaz("Lugo");
   Galeno.setpaisnaz("Galiza");
   Galeno.setpacientes(567);
     System.out.println(
                        Galeno.getnome()+
                        Galeno.getprimeiroapelido()+
                        Galeno.getsegundoapelido()+
                        Galeno.getdni()+
                        Galeno.getfechanaz()+
                        Galeno.getfechanaz()+
                        Galeno.getpaisnaz()+
                        Galeno.getpacientes());
     }
  }                        
     
