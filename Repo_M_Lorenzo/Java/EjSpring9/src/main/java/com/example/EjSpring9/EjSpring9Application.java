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
        
        @GetMapping("/numeros")
        public String numeros(@RequestParam(value = "n1") int num1) {
        fecha=new Date();
        fechaForm=new SimpleDateFormat();
        String formato,actual;
        switch(num1)
        {
            case 1:
                formato="dd/MM/aaaa";
                fechaForm=new SimpleDateFormat(formato);
                break;
            
            case 2:
                formato="MM/dd/aaaa";
                fechaForm=new SimpleDateFormat(formato);
                break;
            
            case 3:
                formato="dd-MM-aaaa";
                fechaForm=new SimpleDateFormat(formato);
                break;
                
                
        }
        
            
            actual=fechaForm.format(fecha);
            
        return actual;
    }

}
