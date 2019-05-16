public class JavaExceptionExample
{  
  public static void main(String args[])
{  
   try{  
      
      int data=100/0;  
//String s=null;  


   }
catch(ArithmeticException e)
{
System.out.println(e);
}  
/*catch(NullPointerException  s)
{
System.out.println(s.length());
}*/
	String s=null;
   System.out.println(s.length());
   System.out.println("rest of the code...");  
  }  
}  