//try catch example with custom exception message
class cwithtry
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
catch (Exception e)
{
System.out.println("we cannot divide by zero...");
}
System.out.println("Hello");
}
}
