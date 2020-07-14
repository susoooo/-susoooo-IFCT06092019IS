/*
1-Crea una clase que represente a una persona. Al menos debe contener información sobre su nombre, apellido primero y segundo, 
fecha de nacimiento, lugar de nacimiento y pais de nacimiento. Crea constructores que permitan la creación de personas sin saber 
sus datos, conociendo su DNI, su nombre y apellidos, ambos, y todos los datos incluidos en la clase.
2-A partir de la clase persona crea una clase asalariado que guarde información sobre el sueldo que cobra la persona neto al mes 
y la retención que se le aplica en la nómina. Crea al menos un constructor y los correspondientes métodos de get y set.
2-A partir de la clase asalariado, define ahora un par de clases: obrero y médico. En la clase obrero, guarda el nombre del cargo 
que desempeña. Para la clase médico, guarda información sobre la cantidad de pacientes que tiene a su cargo. Crea los constructores 
y metodos get y set que creas necesarios.
3-Crea un programa que, utilizando las clases anteriores, cree un objeto para almacenar datos sobre una persona que no es asalariada, 
un asalariado que no es médico ni obrero, sobre dos asalariados y sobre un médico. Todos los objetos creados deberán contener datos 
en sus propiedades. Haz que el programa muestre los datos de los distintos objetos creados por pantalla.
 */

class persoa1 
{
    
    String nome;
    String apelido1;
    String apelido2;
    String datanacem;
    String lugarnacem;
    String paisnacem;
  
    //Creamos método-construtor (debe levar o mesmo nome que a clase):
    persoa1 (String param_nome, String param_apelido1, 
                        String param_apelido2, String param_datanacem, 
                        String param_lugarnacem, String param_paisnacem)
    
    {
    nome=param_nome;
    apelido1=param_apelido1;
    apelido2=param_apelido2;
    datanacem=param_datanacem;
    lugarnacem=param_lugarnacem;
    paisnacem=param_paisnacem;
    }
 
public void imprimir()
    {
        System.out.println(nome +"; " + apelido1 + "; " + apelido2 +"; "+ datanacem +"; " + lugarnacem +"; " + paisnacem+ ".");
       
    }
   
}

class asalariado extends persoa1 
{
	int soldo;
        int retencion;
        
        
	public asalariado (String param_nome, String param_apelido1, 
                        String param_apelido2, String param_datanacem, 
                        String param_lugarnacem, String param_paisnacem, 
                        int param_soldo, int param_retencion)
        {
            super(param_nome, param_apelido1, param_apelido2, param_datanacem, param_lugarnacem, param_paisnacem);
            soldo=param_soldo;
            retencion=param_retencion;
        }
	
        public int getsacarsoldo()
        {
        return soldo;
        }
        
        public int getretencion()
        {
        return retencion;
        }
        
        public void imprimir()
    {
        System.out.println("Nome: " + nome +";\n" +"Primeiro apelido: "+ apelido1 + ";\n" +"Segundo apelido: "+ apelido2 +";\n"+
                "Data de nacemento: "+ datanacem +";\n" +"Lugar de nacemento: "+ lugarnacem +";\n" +"País de nacemento: "+ 
                paisnacem+ ";\n"+"Soldo: "+soldo+";\n"+"% de retención: "+retencion+".\n");
       
    }
}


class obreiro extends asalariado 
{
	String nomecargo;
        
        
	public obreiro (String param_nome, String param_apelido1, 
                        String param_apelido2, String param_datanacem, 
                        String param_lugarnacem, String param_paisnacem, 
                        int param_soldo, int param_retencion, String param_nomecargo)
                         
        {
            super(param_nome, param_apelido1, param_apelido2, param_datanacem, param_lugarnacem, param_paisnacem,
                    param_soldo, param_retencion);
           nomecargo=param_nomecargo;
                    
        }
	
        public String getrecollercargo()
        {
        return nomecargo;
        }
        
        public void imprimir()
        {
        System.out.println("Nome: " + nome +";\n" +"Primeiro apelido: "+ apelido1 + ";\n" +"Segundo apelido: "+ apelido2 +";\n"+
                "Data de nacemento: "+ datanacem +";\n" +"Lugar de nacemento: "+ lugarnacem +";\n" +"País de nacemento: "+ 
                paisnacem+ ";\n"+"Soldo: "+soldo+";\n"+"% de retención: "+retencion+".\n"+"Nome do cargo: "+nomecargo+";\n");
       
        }
        
        
        
}

 
class medico extends asalariado 
{
	int numpacientes;
        
        
	public medico (String param_nome, String param_apelido1, 
                        String param_apelido2, String param_datanacem, 
                        String param_lugarnacem, String param_paisnacem, 
                        int param_soldo, int param_retencion, int param_numpacientes)
                         
        {
            super(param_nome, param_apelido1, param_apelido2, param_datanacem, param_lugarnacem, param_paisnacem,
                    param_soldo, param_retencion);
           numpacientes=param_numpacientes;  
        }
	
        public int getnumpacientes()
        {
        return numpacientes;
        }
        
        public void imprimir()
    {
        System.out.println(nome +"; " + apelido1 + "; " + apelido2 +"; "+ datanacem +"; " + lugarnacem +"; " + paisnacem+ "; "+soldo+"; "+retencion+"; "+numpacientes+".");
       
    }
        
}



public class persoaherencia 
{
      
    public static void main(String args[]) 
    {
        
        try 
            {
            persoa1 jose, ramon, pepe, moncho;
                
                 /*creamos obxectos usando construtor persoa1 e pasamos os parámetros*/
                 jose = new persoa1 ("Jose", "López", "Fernández", "01/01/1970", "Lugo", "Galiza");
                 //ramon = new persoa1 ("Ramón", "Fernández", "López", "02/02/1971", "Castroverde", "Galiza");
                 //pepe = new persoa1 ("Pepe", "Ruíz", "Outeiro", "03/03/1974", "Ourense", "Galiza");
                 //moncho = new persoa1 ("Moncho", "Rodríguez", "Rouco", "04/04/1975", "Ponteceso", "Galiza");
             
            asalariado alberto;
                 alberto= new asalariado ("Alberto", "Núñez", "Feijóo", "20/11/1975","Ferrol del Caudillo","Mongolia", 10000, 1);

            medico felipe;
                 felipe= new medico ("Felipe", "Márquez","Franco", "20/12/1965", "Xove", "Namibia", 950, 23, 200);
                   
            obreiro santiago;
                 santiago= new obreiro ("Santiago", "López","Carballo", "12/02/1959", 
                                        "Vilalba", "Galiza", 1200, 12, "Encargado");   
           
                jose.imprimir();
                System.out.println("-----");
                
                alberto.imprimir();
                System.out.println("-----");
                
                felipe.imprimir();
                System.out.println("-----");
                
                santiago.imprimir();
                System.out.println("-----");
                        
            }
        
           
        
        catch (Exception e) 
            {
            System.out.println("Sucedeu un erro na lectura");
            }
    }
                
}
