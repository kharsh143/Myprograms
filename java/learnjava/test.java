class add
{
protected int add(int a,int b)
{
return a+b;
}
}
class t extends add
{
void show()
{
System.out.println("t class");
}
class d extends add
{
void disp()
{
System.out.println("i m in clas d");
}
}
}
class test extends d,t
{
public static void main(String a[])
{
test obj=new test();
System.out.println("Addition "+obj.add(11,22));
obj.show();
obj.disp();
}
}




