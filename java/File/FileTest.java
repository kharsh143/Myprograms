//fileoutputstream 
import java.io.FileOutputStream;  
public class FileTest
 {  
    public static void main(String args[])
    {    
           try
            {    
          FileOutputStream fout=new FileOutputStream("E:\\java\\File\\Filetestout.txt");    
	     String s="Wel Come....Sangameshwar College Computer Dept";    
        byte b[]=s.getBytes();   //converting string into byte array    
             fout.write(b);    
             fout.close();    
             System.out.println("successfully written...");    
            }
               catch(Exception e) 
                 { 
                    System.out.println(e);                                      
            }    }    
        }
