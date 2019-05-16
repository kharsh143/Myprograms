import java.util.*;  
class TreeSetDemo{  
 public static void main(String args[]){  
  //Creating and adding elements  
  TreeSet<String> al=new TreeSet<String>();  
  al.add("aaa");  
  al.add("bbb");  
  al.add("ccc");  
  al.add("ddd");  
  //Traversing elements  
  Iterator<String> itr=al.iterator();  
  while(itr.hasNext())
 {  
   System.out.println(itr.next());  
  }  
 }  
}  