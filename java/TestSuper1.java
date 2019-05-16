class Animal
{  
String color="white";
Animal()
{
System.out.println("Constructor call with super Keyword");
}
void disp()
{
System.out.println("I m in Animal Function....");
}  
}  
class Dog extends Animal
{  
String color="black"; 
 
void printColor()
{  
super.color="color changed";
System.out.println(color);//prints color of Dog class  
System.out.println(super.color);//prints color of Animal class  
super.disp();

}  
}  
class TestSuper1
{  
public static void main(String args[])
{  
Dog d=new Dog();  
d.printColor();  
}
}  