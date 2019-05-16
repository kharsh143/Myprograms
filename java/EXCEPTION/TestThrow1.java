public class TestThrow1
{  
   static void validate(int age)
   {  
     if(age<18)  
      throw new ArithmeticException("\nnot valid age..");  
     else  
      System.out.println("welcome to vote");  
   }  
   public static void main(String args[])
  {  
      validate(17);  
      System.out.println("rest of the code...");  
  }  
}  