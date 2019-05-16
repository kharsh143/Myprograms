class superclass
{
int num=100;
void show()
{
System.out.println("i m in super class");
}
}
class subclass extends superclass
{
int num=110;
void printno()
{
System.out.println(super.num);
super.show();
}
public static void main(String ar[])
{
subclass ob=new subclass();
ob.printno();

}
}