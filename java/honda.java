class bike
{
final int speed=90;
final void run()
{

System.out.println("Speed Limit is"+speed);
System.out.println("running safely...");
}
}
class honda extends bike
{
public static void main(String ar[])
{
bike ob=new bike();
ob.run();
}
}