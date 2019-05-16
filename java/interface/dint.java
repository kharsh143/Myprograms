interface printable
{  
void print();  
}  
class dint implements printable
{  
public void print()
{
System.out.println("Hello");
}  
 public static void main(String args[])
{  
dint obj = new dint();  
obj.print();  
 }  
}