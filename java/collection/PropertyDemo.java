import java.util.*;  
import java.io.*;  
 class  PropertyDemo
{  
    public static void main(String[] args)throws Exception
{  
        FileReader reader=new FileReader("db1.properties");  
           Properties p=new Properties();  
        p.load(reader);  
          
        System.out.println(p.getProperty("user1"));  
        System.out.println(p.getProperty("password1"));  
  /* p.setProperty("user","system");
    FileWriter fw=new FileWriter("db1.properties");
    p.store(fw,"updated by programmer");
System.out.println(p.getProperty("user"));  
        System.out.println(p.getProperty("password"));  */
    }  
    }  