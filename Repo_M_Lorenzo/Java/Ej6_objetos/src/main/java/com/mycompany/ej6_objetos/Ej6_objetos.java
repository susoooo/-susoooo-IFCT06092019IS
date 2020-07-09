/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.mycompany.ej6_objetos;

/**
 *
 * @author mlorenzo
 */
class persona
{
    private String nombre, apellido1, apellido2, dni;
    private String f_nacimiento,l_nacimiento,p_nacimiento;
    
    public persona()
    {
        this.dni="12345678A";
        this.nombre="Manuel Angel";
        this.apellido1="Lorenzo";
        this.apellido2="Cruzado";
        this.f_nacimiento="16/09/1984";
        this.l_nacimiento="Lugo";
        this.p_nacimiento="España";
    }
    public persona(String d)
    {
        this.dni=d;
        this.nombre="Manuel Angel";
        this.apellido1="Lorenzo";
        this.apellido2="Cruzado";
        this.f_nacimiento="16/09/1984";
        this.l_nacimiento="Lugo";
        this.p_nacimiento="España";
    }
    public persona(String a, String b)
    {
        this.dni="12345678A";
        this.nombre=a;
        this.apellido1=b;
        this.apellido2="Cruzado";
        this.f_nacimiento="16/09/1984";
        this.l_nacimiento="Lugo";
        this.p_nacimiento="España";
    }
    public persona(String a, String b, String c)
    {
        this.dni="12345678A";
        this.nombre=a;
        this.apellido1=b;
        this.apellido2=c;
        this.f_nacimiento="16/09/1984";
        this.l_nacimiento="Lugo";
        this.p_nacimiento="España";
    }
    public persona(String Dni,String nom,String ap1,String ap2,String fn, String ln, String pn)
    {
        this.dni=Dni;
        this.nombre=nom;
        this.apellido1=ap1;
        this.apellido2=ap2;
        this.f_nacimiento=fn;
        this.l_nacimiento=ln;
        this.p_nacimiento=pn;
    }
    public String ver()
    {
        return "Dni: "+this.dni+"\n"+"Nombre: "+this.nombre+"\n"+"Primer apellido: "+this.apellido1+"\n"
                +"Segundo apellido: "+this.apellido2+"\n"+"F. Nacimiento: "+this.f_nacimiento+"\n"
                +"L. Nacimiento: "+this.l_nacimiento+"\n"+"P. Nacimiento: "+this.p_nacimiento+"\n";
    }
}

class asalariado extends persona
{
    private Integer sueldo, retencion;
    
    public asalariado(String Dni,String nom,String ap1,String ap2,String fn, String ln, String pn,int salario, int ret)
    {
        super(Dni,nom,ap1,ap2,fn,ln,pn);
        this.retencion=ret;
        this.sueldo=salario;
    }
    public String ver_datos()
    {
        return super.ver()+"\n"+"Sueldo: "+this.sueldo+"\n"+"Retencion: "+this.retencion+"%"+"\n";
    }
}

class obrero extends asalariado
{
    private String cargo;
    
    public obrero(String Dni,String nom,String ap1,String ap2,String fn, String ln, String pn,int salario, int ret,String crg)
    {
        super(Dni,nom,ap1,ap2,fn,ln,pn,salario,ret);
        this.cargo=crg;
    }
    public String ver_data()
    {
        return super.ver_datos()+"\n"+"Cargo: "+this.cargo+"\n";
    }
}
class medico extends asalariado
{
    private Integer pacientes;
    
    public medico(String Dni,String nom,String ap1,String ap2,String fn, String ln, String pn,int salario, int ret,int n_pac)
    {
        super(Dni,nom,ap1,ap2,fn,ln,pn,salario,ret);
        this.pacientes=n_pac;
    }
    public String ver_dat()
    {
        return super.ver_datos()+"\n"+"Numero de pacientes: "+this.pacientes+"\n";
    }
}

public class Ej6_objetos {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        persona p1;
        p1=new persona();        
        System.out.println(p1.ver());
        
        asalariado a1;
        a1=new asalariado("12345678A","Pepe","Lopez","Lopez","1/1/1965","Poio","españa",1500,3);        
        System.out.println(a1.ver_datos());
        
        obrero o1;
        o1=new obrero("12345678A","Pepe","Lopez","Lopez","1/1/1965","Poio","españa",2500,3,"Encofrador");        
        System.out.println(o1.ver_data());
        
        medico m1;
        m1=new medico("12345678A","Pepe","Lopez","Lopez","1/1/1965","Poio","españa",4500,12,150);        
        System.out.println(m1.ver_dat());
        
    }
    
}
