class withtry
{
public static void main(String arg[])
{
try
{
int a=10;
int b=0;
int c=a/b;
System.out.println("c value is"+c);
}
catch (ArithmeticException e)
{
System.out.println(e);
System.out.println("We cannot divide by zero...");
}
System.out.println("Hello");
}
}


/*

E:\java\EXCEPTION>javac withtry.java

E:\java\EXCEPTION>java withtry
We cannot divide by zero...
Hello

E:\java\EXCEPTION>
*/