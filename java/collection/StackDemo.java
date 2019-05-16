import java.util.*;
class StackDemo
{
 public static void main(String args[])
{
Stack <String>s=new Stack<String>();
s.push("A");
s.push("B");
s.push("C");
System.out.println("Stack elements are:"+s);
System.out.println("Top of the stack element is:"+s.peek());
s.pop();
System.out.println("Stack elements are:"+s);
}
}
