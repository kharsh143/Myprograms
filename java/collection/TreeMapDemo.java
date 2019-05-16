import java.util.*;  
class TreeMapDemo{  
 public static void main(String args[]){  
  TreeMap<Integer,String> hm=new TreeMap<Integer,String>();  
  hm.put(100,"aaa");  
  hm.put(102,"bbb");  
  hm.put(101,"ccc");  
  hm.put(103,"ddd"); 
 
 /* for(Map.Entry m:hm.entrySet()){  
   System.out.println(m.getKey()+" "+m.getValue());
  }*/
Set s=hm.entrySet();
 Iterator i=s.iterator();
while(i.hasNext())
{
  System.out.println("Elements is"+i.next());
}   
 }  
}  