
              package com.example.demo;
              import org.springframework.boot.SpringApplication;
              import org.springframework.boot.autoconfigure.SpringBootApplication;
              import org.springframework.web.bind.annotation.GetMapping;
              import org.springframework.web.bind.annotation.RequestParam;
              import org.springframework.web.bind.annotation.RestController;
              
              @SpringBootApplication
              @RestController
              public class DemoApplication {
                
                  
                  public static void main(String[] args) {
                  SpringApplication.run(DemoApplication.class, args);
                  }
                  
    /**
     *
     * @param name
     * @return
     */
    @GetMapping("/hola")
                  public String hello(@RequestParam(value = "nombre", defaultValue = "Tirando millas") String name) {
                 return String.format("Hello %s!", name);
                 // return ("<HTML><H5>HOOOLA</H5></HTML");
                  }
                  
                   @GetMapping("/ex1luns")
                  public String luns(@RequestParam(value = "luns", defaultValue = "Semana tola") String name) {
                 return String.format("Hoxe %s!", name);
                  }
                  
                    @GetMapping("/ex1martes")
                  public String martes(@RequestParam(value = "martes", defaultValue = "Semana tola") String name) {
                 return String.format("Hoxe %s!", name);
                  }
                    @GetMapping("/ex1mercores")
                  public String mercores(@RequestParam(value = "mercores", defaultValue = "Semana tola") String name) {
                 return String.format("Hoxe %s!", name);
                  }
                   @GetMapping("/ex1xoves")
                  public String xoves(@RequestParam(value = "xoves", defaultValue = "Semana tola") String name) {
                 return String.format("Hoxe %s!", name);
                  }
                   @GetMapping("/ex1venres")
                  public String venres(@RequestParam(value = "venres", defaultValue = "Semana tola") String name) {
                 return String.format("Hoxe %s!", name);
                  }
                   @GetMapping("/ex1sabado")
                  public String sabado(@RequestParam(value = "sabado", defaultValue = "Semana tola") String name) {
                 return String.format("Hoxe %s!", name);
                  }
                   @GetMapping("/ex1domingo")
                  public String domingo(@RequestParam(value = "domingo", defaultValue = "Semana tola") String name) {
                 return String.format("Hoxe %s!", name);
                  }
                  @GetMapping("stars")
                   public String stars(@RequestParam(value = "stars", defaultValue = "Starwars") String name) {
                   return ("<iframe src=\"https://www.starwars.com\" width=\"100%\" height=\"80%\"title=\"Que bien programao!!!\"></iframe>");
                  }
               
              
              
              
              
              }
            