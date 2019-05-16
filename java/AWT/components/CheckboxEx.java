import  java.awt.*;
import  java.awt.event.*;
class  UserFrame extends Frame implements ItemListener
{
Label  l1, l2;
Checkbox cb1, cb2, cb3, rb1, rb2;
String qual = "";
String gender = "";
UserFrame()
{
this.setVisible(true);
this.setSize(500, 500);
this.setTitle("User Frame");
this.setLayout(new FlowLayout());
l1 = new Label("Qualifications :");
l2 = new Label("User Gender :");
cb1 = new Checkbox("BSC", null, false);
cb2 = new Checkbox("MCA", null, false);
cb3 = new Checkbox("PHD", null, false);
CheckboxGroup cg = new CheckboxGroup();
rb1 = new Checkbox("Male", cg, false);
rb2 = new Checkbox("Female", cg, false);

cb1.addItemListener(this);
cb2.addItemListener(this);
cb3.addItemListener(this);
rb1.addItemListener(this);
rb2.addItemListener(this);

this.add(l1);
this.add(cb1);
this.add(cb2);
this.add(cb3);
this.add(l2);
this.add(rb1);
this.add(rb2);
}
public void itemStateChanged(ItemEvent  ie)
{
if(cb1.getState() == true)
{
qual = qual+cb1.getLabel()+" ";
}
if(cb2.getState() == true)
{
qual = qual+cb2.getLabel()+" ";
}
if(cb3.getState() == true)
{
qual = qual+cb3.getLabel();
}
if(rb1.getState() == true)
{
gender = rb1.getLabel();
}
if(rb2.getState() == true)
{
gender = rb2.getLabel();
}
repaint();
}
public void paint(Graphics g)
{
Font f = new Font("Times new roman", Font.BOLD, 30);
g.setFont(f);
g.drawString("Qualifications :"+qual, 50, 250);
g.drawString("User Gender :"+gender, 50, 300);
qual = "";
}
}
class  CheckboxEx
{
public static void main(String[] args) 
{
UserFrame  frame = new UserFrame();
}
}
