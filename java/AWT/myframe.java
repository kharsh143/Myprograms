
import java.awt.*;
class myframe1 extends Frame
{
myframe1()
{
Button b1=new Button();
b1.setBounds(10,20,100,80);
add(b1);
}

}
class myframe
{
public static void main(String ag[])
{
myframe1 ob=new myframe1();
ob.setVisible(true);
ob.setSize(300,300);
ob.setTitle("DESIGN PAGE....");
}
}


