/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.example.EjSpringRest2;

import java.util.Date;

/**
 *
 * @author mlorenzo
 */

public class Greeting {

	private final long id;
	private final String content,link,title,author,sticky;
        private Date date;
        

	public Greeting(long id, String content,Date date,String link, String title,String author,String sticky) {
		this.id = id;
		this.content = content;
                this.date=new Date();
                this.link=link;
                this.title=title;
                this.author=author;
                this.sticky=sticky;
                
	}

  
	public long getId() {return id;}
	public String getContent() {return content;}
        public Date getDate(){return date;}
        public String getLink(){return link;}
        public String getTitle(){return title;}
        public String getAuthor(){return author;}
        public String getSticky(){return sticky;}
        
}

