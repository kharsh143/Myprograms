class TestFinallyBlock{  
  public static void main(String args[]){  
  try{  
   int data=25/0;  
   System.out.println(data);  
  }  
  catch(NullPointerException e)
{System.out.println(e);}  
catch(ArithmeticException ae)
{
System.out.println("divide by zero.......");
}
  finally{System.out.println("finally block is always executed");}  
  System.out.println("rest of the code...");  
  }  
}  

E:\java\EXCEPTION>javac TestFinallyBlock.java

E:\java\EXCEPTION>java TestFinallyBlock
divide by zero.......
finally block is always executed
rest of the code...



