package JsonEjemplo.jsonejemplo;

import java.util.concurrent.atomic.AtomicLong;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;


class Greeting {

	private final long id;
	private final String content;

	public Greeting(long id, String content) {
		this.id = id;
		this.content = content;
	}
	public long getId() {return id;}
	public String getContent() {return content;}
        
}
 
@SpringBootApplication/*Este parametro que indica donde empieza la App y el parametro de abajo que indica cual es la clase controladora
van siempre justo antes de la clase que lleva el main*/

@RestController
public class GreetingController {

	public static final String template = "Hello, %s!";
	public final AtomicLong counter = new AtomicLong();

	@GetMapping("/greeting")
	public Greeting greeting(@RequestParam(value = "name", defaultValue = "World") String name) {
		return new Greeting(counter.incrementAndGet(), String.format(template, name));
	}

	public static void main(String[] args) {
		SpringApplication.run(GreetingController.class, args);
	}

}

