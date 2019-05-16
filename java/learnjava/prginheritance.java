class A
{
void am()
{
System.out.println("I m in class A");
}
}
class B extends A
{

void bm()
{
System.out.println("I m in class B");
}
}
class C extends B
{

void cm()
{
System.out.println("I m in class C");
}
}
class prginheritance
{
public static void main(String arg[])
{
C obj=new C();
obj.am();
obj.bm();
obj.cm();
}
}
