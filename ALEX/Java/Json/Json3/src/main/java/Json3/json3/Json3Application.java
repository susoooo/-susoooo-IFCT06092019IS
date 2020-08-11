package Json3.json3;


import java.util.ArrayList;
import java.util.concurrent.atomic.AtomicLong;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;


class numberos{
    ArrayList numeros;
    
    public numberos(ArrayList numeros){
        this.numeros=numeros;
    }
    public ArrayList getNumeros(){return numeros;}
        
}

@SpringBootApplication
@RestController
public class Json3Application {
     
   ArrayList numeros=new ArrayList();
    @GetMapping("/add")
	public void text(@RequestParam(value = "num", defaultValue = "") String n){
            
           numeros.add(n);    
	}
    @GetMapping("/remove")
	public void remove(@RequestParam(value = "num", defaultValue = "") String n){
            numeros.remove(n);                  
	}    
    @GetMapping("/query")
	public numberos lista(){
            
            return new numberos (numeros);
	}   
        
        

	public static void main(String[] args) {
		SpringApplication.run(Json3Application.class, args);
	}

}
