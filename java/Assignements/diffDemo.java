//Mutable and immutable Ass.No7
class diffDemo
{
public static void main(String arg[])
{
	String s="Sachin";  
   s.concat(" Tendulkar");//concat() method appends the string at the end  
   System.out.println(s);//will print Sachin because strings are immutable objects  

	String s1="Sachin";  
   s1=s1.concat(" Tendulkar");  //mutable by adding s1 
   System.out.println(s1);  


}
}

/*OUTPUT

E:\java\Assignements>javac diffDemo.java

E:\java\Assignements>java diffDemo
Sachin
Sachin Tendulkar
*/