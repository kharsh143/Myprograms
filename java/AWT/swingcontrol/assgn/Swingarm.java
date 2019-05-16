import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
class demo extends JFrame implements ActionListener
{
   JLabel l1,l2;
   JTextField t1,t2;
   JButton b1;
   demo()
  {
     l1=new JLabel("Enter number");
     l2=new JLabel("Armstrong or not");
      t1=new JTextField(20);
      t2=new JTextField(20);
      b1=new JButton("ok");
     this.setLayout(new FlowLayout());
     this.add(l1);
      this.add(t1);
      this.add(l2);
         this.add(t2);
       this.add(b1);
     b1.addActionListener(this);
         this.setVisible(true);
       this.setSize(500,500);
  }
public void actionPerformed(ActionEvent e)
{
   int a=Integer.parseInt(t1.getText());
   int sum=0,rem,n;
     n=a;
    while(a>0)
   {

    rem=a%10;
     sum=sum+(rem*rem*rem);
      a=a/10;	
}
   if(sum==n)
    {

 t2.setText("Armstrong No");
    }
    else
    {
      t2.setText("not Armstrong...");
     }
}
}

class Swingarm
{
  public static void main(String args[])
{
   demo d=new demo();
}
}

















