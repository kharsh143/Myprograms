package ItemCalc;
public class Calculator
{
public int add(int a,int b)
{
System.out.println("Wel come to package....");
return a+b;
}
public static void main(String ag[])
{
Calculator obj=new Calculator();
System.out.println(obj.add(10,20));
}
}