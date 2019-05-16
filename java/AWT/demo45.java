import java.awt.*;
class frame2 extends Frame
{
Button b1,b2;
TextField t1,t2;
Label l1,l2;
frame2()
{
b1=new Button("click 1");
t1=new TextField();
b1.setBounds(20,60,120,20);
t1.setBounds(20,80,120,20);
add(b1);
add(t1);
setLayout(null);
}
}
class demo45
{
public static void main(String af[])
{
frame2 ob=new frame2();
ob.setSize(400,400);
ob.setVisible(true);
ob.setTitle("My First Application");
}
}