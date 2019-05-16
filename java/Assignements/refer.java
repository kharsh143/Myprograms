//Assgn. 6 which uses objects as parameter
class test
{
int a,b;
void add(test t,int x,int y)
{
t.a=t.a+x;
t.b+=y;
}
}
class refer
{
public static void main(String arg[])
{
test a1=new test();
a1.a=10;
a1.b=20;
System.out.println("Before changes value is :"+a1.a+"\t"+a1.b);
a1.add(a1,a1.a,a1.b);
System.out.println("After changes value is :"+a1.a+"\t"+a1.b);

}
}


/*OUTPUT:
E:\java\Assignements>javac refer.java

E:\java\Assignements>java refer
Before changes value is :10     20
After changes value is :20      40
*/