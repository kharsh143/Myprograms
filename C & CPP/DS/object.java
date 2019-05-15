import java.util.Scanner;
class Add
{
     private int a,b;
	 public void getdata()
	 {
	    System.out.println("Enter Two Numbers");
		Scanner sc=new Scanner(System.in);
		a=sc.nextInt();
		b=sc.nextInt();
	 }
	 public void showdata()
	 {
        System.out.println("The Addition is" + a+b); 	 
	 
	 }


}
public class object
{
   public static void main(String[] args)
   {
      Add a1=new Add();
	  a1.getdata();
	  a1.showdata();
   
   
   }
 

}