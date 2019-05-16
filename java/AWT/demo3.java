import java.awt.*;
class d2 extends Frame
{
d2()
{
Button b1=new Button("click");
TextField t1=new TextField();
add(b1);
add(t1);
b1.setBounds(20,60,120,30);
t1.setBounds(20,100,120,30);
setLayout(null);
}
}

class demo3
{
public static void main(String ag[])
{
d2 ob=new d2();
ob.setSize(400,400);
ob.setVisible(true);

}
}