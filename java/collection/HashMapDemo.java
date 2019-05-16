import java.util.*;  
class HashMapDemo{  
 public static void main(String args[]){  
  HashMap<Integer,String> hm=new HashMap<Integer,String>();  
  hm.put(100,"aaa");  
  hm.put(101,"bbb");  
  hm.put(102,"ccc"); 
Set s=hm.entrySet();
 Iterator i=s.iterator();
while(i.hasNext())
{
  System.out.println("Elements is"+i.next());
} 
  /*for(Map.Entry m:hm.entrySet()){  
   System.out.println(m.getKey()+" "+m.getValue());
 }*/
  }  
 }  
  