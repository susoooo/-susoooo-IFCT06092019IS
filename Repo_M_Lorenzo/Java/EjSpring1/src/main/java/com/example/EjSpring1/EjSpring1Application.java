package com.example.EjSpring1;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

@SpringBootApplication
@RestController
public class EjSpring1Application {

	public static void main(String[] args) {
		SpringApplication.run(EjSpring1Application.class, args);
	}
        
        @GetMapping("/lunes")
    public String lunes(@RequestParam(value = "nombre", defaultValue = "É hora de levantarse") String name) {
    return String.format("Bos dias. %s!", name);
    //return ("<HTML><H1>HOOOOLA</H1></HTML>");
    }
    @GetMapping("/martes")
    public String martes(@RequestParam(value = "nombre", defaultValue = "É hora de levantarse") String name) {
    return String.format("Bos dias. %s!", name);
    //return ("<HTML><H1>HOOOOLA</H1></HTML>");
    }
    @GetMapping("/miercoles")
    public String miercoles(@RequestParam(value = "nombre", defaultValue = "É hora de levantarse") String name) {
    
        //System.out.print("Hola");
        return String.format("Bos dias. %s!", name);
    //return ("<HTML><H1>HOOOOLA</H1></HTML>");
    }

}
