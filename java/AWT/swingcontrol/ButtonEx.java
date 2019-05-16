import  java.awt.*;
import javax.swing.*;
import  java.awt.event.*;
class  MyFrame extends JFrame implements ActionListener
{
	    JLabel l1,l2,l3;
       	JTextField t1,t2,t3;
	    JButton b1,b2;
	MyFrame()
	    {
	l1=new JLabel("Enter first number");
	l2=new JLabel("Enter Second number");
	l3=new JLabel("Result");
	t1=new JTextField();
	       t2=new JTextField();
	 t3=new JTextField();
	       b1=new JButton("Add");
	b2=new JButton("Substraction");
	this.setLayout(null);
	this.add(l1);
	this.add(t1);
	this.add(l2);
	this.add(t2);
	this.add(l3);
	this.add(t3);
	this.add(b1);
	this.add(b2);
	l1.setBounds(20,40,100,20);
	t1.setBounds(180,40,130,20);
	l2.setBounds(20,70,120,20);
	t2.setBounds(180,70,130,20);
	l3.setBounds(20,100,120,20);
	t3.setBounds(180,100,130,20);
	b1.setBounds(40,160,100,20);
	b2.setBounds(160,160,100,20);
	b1.addActionListener(this);
	b2.addActionListener(this);
	this.setVisible(true);
	this.setSize(700,600);
	     }
	public void actionPerformed(ActionEvent ae)
	{
		if(ae.getSource()==b1)
	 	{
		   int a,b,c;
	           a=Integer.parseInt(t1.getText());
	 	   b=Integer.parseInt(t2.getText());
	           c=a+b;
	          String n=String.valueOf(c);
	         t3.setText(n);
		 }

	if(ae.getSource()==b2)
	      {
		int a,b,c;
		a=Integer.parseInt(t1.getText());
		b=Integer.parseInt(t2.getText());
		          c=a-b;
		String n=String.valueOf(c);
		t3.setText(n);
		}		
	}
}
class ButtonEx
{
public static void main(String args[])
{
MyFrame f1=new MyFrame();
f1.setTitle("Swing Programme...");
}
}





