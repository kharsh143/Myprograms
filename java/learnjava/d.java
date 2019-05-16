class a
{
void am()
{
 protected int a=10;
System.out.println("a"+a);
}
}
class b
{
void bm()
{
System.out.println("a="+a);
}
}
class c extends a
{
void cm()
{
System.out.println("a="+a);
}
}
class d
{
public static void main(String sr[])
{
c ob=new c();
ob.am();
ob.bm();
ob.cm();
}

}