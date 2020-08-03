package JsonTienda.jsontienda;

import java.util.ArrayList;
import java.util.concurrent.atomic.AtomicLong;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

class tienda{
    ArrayList productos;
    
    
    public tienda(ArrayList precios,ArrayList nombres){
        this.productos=productos.add[precios,nombres];
       
    }
 
    public ArrayList getProductos(){return productos;}
    
}

@SpringBootApplication
@RestController
public class JsontiendaApplication {
    
    ArrayList precios=new ArrayList();
    ArrayList nombres=new ArrayList();
    
    /**
     *
     * @param n
     * @param p
     * @return
     */
    @GetMapping("/consulta")
	public tienda lista(@RequestParam(value = "nombre", defaultValue = "Sin producto") String n,@RequestParam(value="precios", defaultValue ="0")String p){
            
            return new tienda (precios,nombres);
	} 
    @GetMapping("/add")
	public void añadir(@RequestParam(value = "nombre", defaultValue = "Sin producto") String n,@RequestParam(value="precios", defaultValue ="0")String p){ 
           precios.add(p);
           nombres.add(n);
	} 
    @GetMapping("/change_money")
	public void camprecio(@RequestParam(value="precios", defaultValue ="0")String p){
            precios.add(p);
        }
    @GetMapping("/change_nombre")
	public void camnombre(@RequestParam(value="nombre", defaultValue ="Sin producto")String n){
            nombres.add(n);
        }    
    
    
    
    
    
    
    
    
    

	public static void main(String[] args) {
		SpringApplication.run(JsontiendaApplication.class, args);
	}

}
