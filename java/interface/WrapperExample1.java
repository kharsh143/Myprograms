public class WrapperExample1
{  
public static void main(String args[])
{  
//Converting int into Integer  
int a=20;  
Integer i=Integer.valueOf(a);//converting int into Integer  
Integer j=a;//autoboxing, now compiler will write Integer.valueOf(a) internally  
  
System.out.println(a+" "+i+" "+j); 

Integer x=new Integer(3);    
int xa=x.intValue();//converting Integer to int  
int y=x;//unboxing, now compiler will write a.intValue() internally    
    
System.out.println(xa+" "+x+" "+y);  

 
}}  