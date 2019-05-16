import java.util.*;  
class HashSetDemo
{  
 public static void main(String args[])
{  
  //Creating HashSet and adding elements  
  HashSet<String> set=new HashSet<String>();  
  set.add("abc");  
  set.add("pqr");  
  set.add("sss");  
  set.add("rrr"); 
   System.out.println("Size of hash set is"+set.size());
 System.out.println("Size of hash set is"+set.Capacity());
  //Traversing elements  
  Iterator<String> itr=set.iterator();  
  while(itr.hasNext()){  
   System.out.println(itr.next());
  
  }  
 }  
}  