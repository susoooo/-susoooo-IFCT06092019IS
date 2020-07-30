package Datperson;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author guille
 */
class Persona {
    
 
 int dni;
 String nome;
 String primeiroapelido;
 String segundoapelido;
 Number fechanaz;
 String lugarnaz;
 String paisnaz;
 
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
 public String getprimeiroapelido(){
    return primeiroapelido;   
 };
 public void setprimeiroapelido(String primeiroapelido) {
        this.primeiroapelido = primeiroapelido;
    }
 public String getsegundoapelido(){
    return segundoapelido;   
 };
 public void setsegundoapelido(String segundoapelido){
        this.segundoapelido = segundoapelido;
  }
 public Number getfechanaz(){
    return fechanaz;   
 };
 public void setfechanaz(Number fechanaz) {
        this.fechanaz = fechanaz;
 }
 public String getlugarnaz(){
    return lugarnaz;   
 };
 public void setlugarnaz(String lugarnaz) {
        this.lugarnaz = lugarnaz;
  }
 public String getpaisnaz(){
    return paisnaz;   
 };
 public void setpaisnaz(String paisnaz) {
        this.paisnaz = paisnaz;
 }
} 
  class Asalariado extends Persona{
  int salario;
  float retencion;
 
  public int getsalario(){
     return salario; 
  }
 public void setsalario(int salario) {
        this.salario = salario;    
      } 
 public float getretencion() {
     return retencion; 
    }
 public void setretencion(float retencion){
         this.retencion = retencion;   
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
     