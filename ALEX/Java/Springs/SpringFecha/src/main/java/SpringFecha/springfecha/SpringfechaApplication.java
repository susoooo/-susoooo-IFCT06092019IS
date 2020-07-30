package SpringFecha.springfecha;

import java.text.SimpleDateFormat;
import java.util.Date;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

@SpringBootApplication
@RestController
public class SpringfechaApplication {
        Date fecha;
        SimpleDateFormat formato;

	public static void main(String[] args) {
		SpringApplication.run(SpringfechaApplication.class, args);
	}

    /**
     *
     * @param n
     * @return
     */
    @GetMapping("/fecha")
        public String fechas(@RequestParam(value = "n") int n) 
        {
        fecha=new Date();
        formato=new SimpleDateFormat();
        String forma="";
        String resultado;
        switch(n)
            {
            case 1:
                forma="dd/MM/yyyy";
                formato=new SimpleDateFormat(forma);
                break;
            
            case 2:
                forma="MM/dd/yyyy";
                formato=new SimpleDateFormat(forma);
                break;
            
            case 3:
                forma="dd-MM-yyyy";
                formato=new SimpleDateFormat(forma);
                break;
            case 4:
                forma="dd";
                formato=new SimpleDateFormat(forma);
                break;
            case 5:
                forma="MM";
                formato=new SimpleDateFormat(forma);
                break;
            case 6:
                forma="yyyy";
                formato=new SimpleDateFormat(forma);
                break;  
            
        
        } 
        if(forma.equals(""))
        {    
                resultado="Introduzca un numero del 1 al 6";
        }
        else
        {
            resultado=formato.format(fecha);
        }
        return resultado;
        }
}
