import java.awt.*;
import java.awt.event.*;
class login extends Frame implements ActionListener
{
Label l1,l2;
TextField tf1,tf2;
Button b;
String status=" ";
login()
{
this.setVisible(true);
this.setSize(500,500);
this.setTitle("Login Frame...");
this.Background(Color.pink);
this.addActionListener(new WindowAdapter()
{
public void windowClosing(WindowEvent ae)
{
System.exit(0);
}
});



}
}
class loginDemo
{
public static void main(String ar[])
{
login ob=new login();
}
}