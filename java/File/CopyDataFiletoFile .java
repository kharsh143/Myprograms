import java.io.*; 
class CopyDataFiletoFile 
{ 
             public static void main(String args[])throws IOException 
   	     { 
              FileInputStream Fread =new FileInputStream("E:\\java\\File\\Demo.txt"); 
              FileOutputStream Fwrite=new FileOutputStream("E:\\java\\File\\Copy_Demo.txt") ; 
              System.out.println("File is Copied"); 
              int c; 
              while((c=Fread.read())!=-1) 
              Fwrite.write((char)c); 
              Fread.close(); 
              Fwrite.close(); 
        	 } 
} 
