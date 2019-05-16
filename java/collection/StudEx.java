import java.io.*;
class StudEx
{
  public static void main(String args[])throws Exception
{
  FileOutputStream fos=new FileOutputStream("abc.txt");
 DataOutputStream dos=new DataOutputStream(fos); 
      dos.writeInt(67);
        dos.writeInt(65);
  dos.close();
    fos.close();
   FileInputStream fis=new FileInputStream("abc.txt");
   DataInputStream dis=new DataInputStream(fis);
     int a=dis.readInt();
      int b=dis.readInt();
      int c=a+b;
    System.out.println("addition is"+c);
 System.out.println(b);
     dis.close();
     fis.close();
}
}