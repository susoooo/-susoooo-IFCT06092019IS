package com.example.EjSpring9;


import java.text.SimpleDateFormat;
import java.util.Date;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

@SpringBootApplication
@RestController
public class EjSpring9Application {

        private Date fecha;
        private SimpleDateFormat fechaForm;
        
	public static void main(String[] args) {
		SpringApplication.run(EjSpring9Application.class, args);
	}
        
        @GetMapping("/fecha")
        public String fecha(@RequestParam(value = "n1") int num1) {
        fecha=new Date();
        fechaForm=new SimpleDateFormat();
        String formato,actual;
        switch(num1)
        {
            case 1:
                formato="dd/MM/yyyy";
                fechaForm=new SimpleDateFormat(formato);
                break;
            
            case 2:
                formato="MM/dd/yyyy";
                fechaForm=new SimpleDateFormat(formato);
                break;
            
            case 3:
                formato="dd-MM-yyyy";
                fechaForm=new SimpleDateFormat(formato);
                break;
                
            case 4:
                formato="dd";
                fechaForm=new SimpleDateFormat(formato);
                break;
            case 5:
                formato="MM";
                fechaForm=new SimpleDateFormat(formato);
                break;
            case 6:
                formato="yyyy";
                fechaForm=new SimpleDateFormat(formato);
                break;
            default:
                return ("Opcion incorrecta. Solo admitidas opciones del 1 al 6");
                
                
        }
        
            
            actual=fechaForm.format(fecha);
            
        return actual;
    }

}
