/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package people;

/**
 *
 * @author alex
 */
 class Persona 
 {
     String nombre;
     String apellido1;
     String apellido2;
     String fechanacimiento;
     String lugarnacimiento;
     String nacionalidad;
     String dni;
     public String getNombre() {
        return nombre;
    }
     public String getApellido1() {
        return apellido1;
    }
     public String getApellido2() {
        return apellido2;
    }
     public String getFechanacimiento() {
        return fechanacimiento;
    }
     public String getLugarnacimiento() {
        return lugarnacimiento;
    }
     public String getNacionalidad() {
        return nacionalidad;
    }
     public String getDni() {
        return dni;
    }
     
     public Persona(String nombre,String apellido1,String apellido2,String fechanacimiento,String lugarnacimiento,String nacionalidad,String dni)
     { 
         
         this.nombre=nombre;
         this.apellido1=apellido1;
         this.apellido2=apellido2;
         this.fechanacimiento=fechanacimiento;
         this.lugarnacimiento=lugarnacimiento;
         this.nacionalidad=nacionalidad;
         this.dni=dni;
     }   
 }

    class Asalariado extends Persona
    {
        int salario;
        String retencion;
        public int getSalario(){
            return salario;
        }
        public String getRetencion(){
            return retencion;
        }
         Asalariado (String nombre,String apellido1,String apellido2,String fechanacimiento,String lugarnacimiento,String nacionalidad,String dni,int salario,String retencion)
        {
            super(nombre,apellido1,apellido2,fechanacimiento,lugarnacimiento,nacionalidad,dni);
            this.salario=salario;
            this.retencion=retencion;
            
        }
    }

        class Obrero extends Asalariado
        {
            String cargo;
            public String getCargo(){
                return cargo;
            }
                Obrero (String nombre,String apellido1,String apellido2,String fechanacimiento,String lugarnacimiento,String nacionalidad,String dni,int salario,String retencion,String cargo)
            {
                    super(nombre,apellido1,apellido2,fechanacimiento,lugarnacimiento,nacionalidad,dni,salario,retencion);
                    this.cargo=cargo;
            }
        }

            class Medico extends Asalariado
        {
            double pacientes;
            public double getPacientes(){
                return pacientes;
            }
                Medico (String nombre,String apellido1,String apellido2,String fechanacimiento,String lugarnacimiento,String nacionalidad,String dni,int salario,String retencion,double pacientes)
            {
                    super(nombre,apellido1,apellido2,fechanacimiento,lugarnacimiento,nacionalidad,dni,salario,retencion);
                    this.pacientes=pacientes;
            }
        }





     public class People
     {
        public static void main(String[] args) 
        {
            Persona ficha1;
            ficha1 = new Persona("Pepito","Perez","Criado","25/2/1992","cospeito","marruecos","g326586");
            System.out.println(ficha1.getNombre() + ficha1.getApellido1() + ficha1.getApellido2() + ficha1.getFechanacimiento() + ficha1.getLugarnacimiento() + ficha1.getNacionalidad() + ficha1.getDni());
            Asalariado honorarios;
            honorarios = new Asalariado("Pepito","Perez","Criado","25/2/1992","cospeito","marruecos","g326586",1100,"15 por ciento");
            System.out.println(ficha1.getNombre() + ficha1.getApellido1() + ficha1.getApellido2() + ficha1.getFechanacimiento() + ficha1.getLugarnacimiento() + ficha1.getNacionalidad() + ficha1.getDni() + honorarios.getSalario()+ honorarios.getRetencion());
            
        }
        
    
}
