/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package fichas2;

/**
 *
 * @author alex
 */
    class Persona /*Creamos la clase con los parametros solicitados*/
{
    public String nombre;
    public String apellido1;
    public String apellido2; 
    public String dni;
    public String f_nacimiento;
    public String l_nacimiento;
    public String p_nacimiento;
    
    public Persona()/*Creamos el constructor, sin parametros, los introducimos nosotros como se puede ver*/
    {
        this.dni="33540214G";
        this.nombre="Alejandro";
        this.apellido1="Fernandez";
        this.apellido2="Lopez";
        this.f_nacimiento="26/02/1986";
        this.l_nacimiento="Outeiro de rei";
        this.p_nacimiento="España";
    }
    public Persona(String d)/*Creamos un constructor ,pero sin definir un parametro*/
    {
        this.dni=d;
        this.nombre="Alejandro";
        this.apellido1="Fernandez";
        this.apellido2="Lopez";
        this.f_nacimiento="26/02/1986";
        this.l_nacimiento="Outeiro de rei";
        this.p_nacimiento="España";
    }
    public Persona(String a, String b)/*Lo mismo que arriba*/
    {
        this.dni="33540214G";
        this.nombre=a;
        this.apellido1=b;
        this.apellido2="Lopez";
        this.f_nacimiento="26/02/1986";
        this.l_nacimiento="Outeiro de rei";
        this.p_nacimiento="España";
    }
    public Persona(String a, String b, String c)
    {
        this.dni="33540214G";
        this.nombre=a;
        this.apellido1=b;
        this.apellido2=c;
        this.f_nacimiento="26/02/1986";
        this.l_nacimiento="Outeiro de rei";
        this.p_nacimiento="España";
    }
    public Persona(String Dni,String nom,String ap1,String ap2,String fn, String ln, String pn)/*Creamos el constructor
            sin definir parametros*/
        
    {
        this.dni=Dni;
        this.nombre=nom;
        this.apellido1=ap1;
        this.apellido2=ap2;
        this.f_nacimiento=fn;
        this.l_nacimiento=ln;
        this.p_nacimiento=pn;
    }
    public String ver()/*metodo de tipo String para poder ver con un return los datos introducidos */
    {
        return "Dni: "+this.dni+"\n"+"Nombre: "+this.nombre+"\n"+"Primer apellido: "+this.apellido1+"\n"
                +"Segundo apellido: "+this.apellido2+"\n"+"F. Nacimiento: "+this.f_nacimiento+"\n"
                +"L. Nacimiento: "+this.l_nacimiento+"\n"+"P. Nacimiento: "+this.p_nacimiento+"\n";
    }
}
    
    
    
class Asalariado extends Persona /*Creamos clase hija usando extends y definimos 2 variables que nos piden*/
{
    public Integer sueldo;
    public Integer retencion;
    
    public Asalariado(String Dni,String nom,String ap1,String ap2,String fn, String ln, String pn,int salario, int ret)
    {/*En el constructor de la clase hija tenemos que meter los parametros de la clase madre y los que nos piden
        para la clase hija*/
        super(Dni,nom,ap1,ap2,fn,ln,pn);/*El constructor de la clase hija debe llamar al constructor de la madre
        usando el super,incluyendo dentro los parametros del constructor de la clase madre*/
        
        this.retencion=ret;
        this.sueldo=salario;
    }
    public String ver_datos()/*Metodo creado para leer los datos como arriba,la diferencia es que usamos el
            super.ver(), para poder leer los datos del constructor de la madre*/
    {
        return super.ver()+"\n"+"Sueldo: "+this.sueldo+"\n"+"Retencion: "+this.retencion+"%"+"\n";
    }
}

class Obrero extends Asalariado/*clase hija creada igual que la anterior*/
{
    public String cargo;
    
    public Obrero(String Dni,String nom,String ap1,String ap2,String fn, String ln, String pn,int salario, int ret,String crg)
    {
        super(Dni,nom,ap1,ap2,fn,ln,pn,salario,ret);
        this.cargo=crg;
    }
    public String ver_data()
    {
        return super.ver_datos()+"\n"+"Cargo: "+this.cargo+"\n";
    }
}
class Medico extends Asalariado/*clase hija creada igual que las anteriores*/
{
    public Integer pacientes;
    
    public Medico(String Dni,String nom,String ap1,String ap2,String fn, String ln, String pn,int salario, int ret,int n_pac)
    {
        super(Dni,nom,ap1,ap2,fn,ln,pn,salario,ret);
        this.pacientes=n_pac;
    }
    public String ver_dat()
    {
        return super.ver_datos()+"\n"+"Numero de pacientes: "+this.pacientes+"\n";
    }
}

public class Fichas2/*Clase principal donde va el main*/
{

   public static void main(String[] args) /*Metodo main*/
   {
        
        Persona p1;/*creamos el objeto p1 de la clase persona*/
        p1=new Persona();        
        System.out.println(p1.ver());/*Usamos esto para imprimir usando el println y con p1.ver() el objeto p1
        llama al metodo ver()*/
                
        Asalariado a1;/*creamos el objeto a1 de la clase asalariado y el resto igual que el objeto p1*/
        a1=new Asalariado("12345678A","Pepe","Lopez","Lopez","1/1/1965","Poio","españa",1500,3);        
        System.out.println(a1.ver_datos());
        
        Obrero o1;/*Exactamente igual que arriba*/
        o1=new Obrero("12345678A","Pepe","Lopez","Lopez","1/1/1965","Poio","españa",2500,3,"Encofrador");        
        System.out.println(o1.ver_data());
        
        Medico m1;/*Igual que arriba*/
        m1=new Medico("12345678A","Pepe","Lopez","Lopez","1/1/1965","Poio","españa",4500,12,150);        
        System.out.println(m1.ver_dat());
        
    }
    
}
