import java.util.Scanner;
import java.util.*;
class exdemo
{
public static void main(String arg[])
{
while(true)
{
	try
	{
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter The Value");
	int x=sc.nextInt();
	int k=44/x;
	System.out.println("the value of k="+k);
	break;
	}
	catch(ArithmeticException ae)
	{
	System.out.println("Enter only non-Zero value....");
	}
	catch(InputMismatchException xe)
	{
	System.out.println("Enter only  integer value.....");
	}
	
}
}
}







