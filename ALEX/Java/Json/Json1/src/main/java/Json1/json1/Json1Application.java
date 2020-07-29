package Json1.json1;

import java.util.concurrent.atomic.AtomicLong;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

class Datos {

	public long id;
	public String date;
        public String link;
        public String title;
        public long author;
        public String sticky;
        
	public Datos(long id,String date,String link
        ,String title,long author,String sticky) 
        {
		this.id = id; 
		this.date = date;
                this.link = link;
                this.title = title;
                this.author = author;
                this.sticky = sticky;
	}
	public long getId() {return id;}
	public String getDate() {return date;}
        public String getLink() {return link;}
        public String getTitle() {return title;}
        public long getAuthor() {return author;}
        public String getSticky() {return sticky;}
}

@SpringBootApplication
@RestController
public class Json1Application {

    @GetMapping("/datos")
          public Datos dat() 
          {
            return new Datos(3523,"422g","https://www.kaggle.com/bennijesus/lovecraft-fiction","Cthulhu Mythos",124553,"false");    
          }
    
	public static void main(String[] args) {
		SpringApplication.run(Json1Application.class, args);
	}

}
