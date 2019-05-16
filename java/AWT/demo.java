import java.awt.event.*;
import java.awt.*;
class first extends Frame implements ActionListener
{
Button b1=new Button("Display..");
TextField t1=new TextField("Before CLick");
Label l=new Label("ENTER NAME");

first()
{
add(b1);
add(t1);
add(l);
l.setBounds(20,60,100,30);
t1.setBounds(140,60,120,30);
b1.setBounds(20,120,100,30);
//b1.setBounds(20,100,120,30);
b1.addActionListener(this);
setLayout(null);
 setSize(500,500);
setVisible(true);
}
public void actionPerformed(ActionEvent ae)
{
String text="WEL COME......";
t1.setText(text);
}
}
class demo 
{
public static void main(String as[])
{
first ob=new first();
ob.setTitle("Sangameshwar college..");
}

}







/*
Label l=new Label("name");
add(l);*/