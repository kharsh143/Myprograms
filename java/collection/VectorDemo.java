import java.util.*;
class VectorDemo
{
public static void main(String args[])
{
Vector v=new Vector();
System.out.println("Vector Capacity is:"+v.capacity());
for(int i=0;i<10;i++)
{
  v.addElement(i);
}
System.out.println(v);
v.addElement("A");
System.out.println("Vector Capacity is:"+v.capacity());
Iterator it=v.iterator();
  while(it.hasNext())
   {
      System.out.println(it.next());
   }
}
}
