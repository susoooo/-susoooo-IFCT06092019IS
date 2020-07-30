/*
 
 *
 * @author guille
 */
 class Ordeador {
        boolean EncendidoApagado;
        boolean EnchuDesenchu;
    
       
    
         public void Encender (){
         if (EncendidoApagado==false & EnchuDesenchu==true){
             EncendidoApagado=true;
         }   
         }
         public void Apagar (){
         if (EncendidoApagado==true){
             EncendidoApagado=false;
         }   
         }
         public void Enchufar(){
         if (EnchuDesenchu==false){
             EnchuDesenchu=true;
         }
         }
         public void Desenchufar(){
         if (EnchuDesenchu==true){
             EnchuDesenchu= false;
         }
         }
         
         
  }
public class Programa {
     public static void main(String[] args) 
     {
        Ordeador Portatil= new Ordeador();
     
        Portatil.Enchufar ();
        Portatil.Encender ();
       // Portatil Cargar ();
        Portatil.Apagar ();
        Portatil.Desenchufar ();
         
     }   
         
         
         
}