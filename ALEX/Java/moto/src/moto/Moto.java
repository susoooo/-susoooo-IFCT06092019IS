/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package moto;

/**
 *
 * @author alex
 */
public class Moto
{ 
  // Variables
  String marca; 
  String modelo; 
  int kilometraje; 
  String color; 
  
  // Declaración de clase del constructor
  public Moto(String marca, String modelo, 
    int kilometraje, String color) 
  { 
    this.marca = marca; 
    this.modelo = modelo; 
    this.kilometraje = kilometraje; 
    this.color = color; 
  } 
  
  // Método 1
  public String getMarca() 
  { 
    return marca; 
  } 
  
  // Método 2
  public String getModelo() 
  { 
    return modelo; 
  } 
  
  // Método 3 
  public int getKilometraje() 
  {
    return kilometraje;
  }

  // Método 4
  public String getColor()
  {
    return color;
  } 
  
  
  public String datos() 
  { 
    return("La marca de mi moto es: "+ this.getMarca()+ 
        ".\nPertenece al modelo "+this.getModelo()+
        ".\nTiene "+this.getKilometraje()+" Kilometros"+
        "\nEs de color "+ this.getColor()); 
  } 
  
  public static void main(String[] args) 
  { 
    Moto miMoto = new Moto("Ducati","Desmocedichi", 5000, "Rojo"); 
    System.out.println(miMoto.datos()); 
  } 
}