import java.util.*;  
public class TreeMapremoveDemo {  
   public static void main(String args[]) {  
   // Create and populate tree map  
   Map<Integer, String> map = new TreeMap<Integer, String>();           
   map.put(102,"Let us C");  
   map.put(103, "Operating System");  
   map.put(101, "Data Communication and Networking");  
   System.out.println("Values before remove: "+ map);    
   // Remove value for key 102  
   map.remove(102);  
   System.out.println("Values after remove: "+ map);  
   }      
}  