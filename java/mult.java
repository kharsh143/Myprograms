class A
{
void am()
{
System.out.println("I m in class A");
}
}
class B 
{

void bm()
{
System.out.println("I m in class B");
}
}
class C extends A,B
{

void cm()
{
System.out.println("I m in class C");
}
}
class mult
{
public static void main(String arg[])
{
C obj=new C();
B o=new B();
obj.am();
o.bm();
obj.cm();
}
}
