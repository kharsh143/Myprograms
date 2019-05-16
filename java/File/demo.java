import java.io.*;  
class demo
{  
 public static void main(String args[])throws Exception
{  
  Student s1 =new Student(211,"ravi");  
  FileOutputStream fout=new FileOutputStream("test.txt");  
  ObjectOutputStream out=new ObjectOutputStream(fout);  
  out.writeObject(s1);  
  out.flush();  
  System.out.println("success");  
 }  
}  
