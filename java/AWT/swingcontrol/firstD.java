import javax.swing.*;
import java.awt.*;
class firstD
{
public static void main(String arg[])
{

JFrame f=new JFrame();          
JButton b=new JButton("Login");  
b.setBounds(150,200,100, 40); 
   f.add(b);  
JLabel l1=new JLabel("enter user");
l1.setBounds(20,90,120,20);
f.add(l1);
JLabel l2=new JLabel("enter Password");
l2.setBounds(20,110,120,30);
f.add(l2);
JRadioButton r1=new JRadioButton("Male");    
JRadioButton r2=new JRadioButton("Female");
f.add(r1);f.add(r2);
ButtonGroup bg=new ButtonGroup();    
bg.add(r1);bg.add(r2);    
    
JRadioButton r3=new JRadioButton("r1");    
JRadioButton r4=new JRadioButton("r4");
f.add(r3);f.add(r4);
ButtonGroup bg1=new ButtonGroup();    
bg1.add(r3);bg1.add(r4);

 String country[]={"India","Aus","U.S.A","England","Newzealand"};        
  JComboBox cb=new JComboBox(country);    
cb.setBounds(200,400,200,30);
f.add(cb);
r1.setBounds(60,300,100,20);
r2.setBounds(200,300,100,20);
r3.setBounds(60,350,100,20);
r4.setBounds(200,350,100,20);
 JTextField t1=new JTextField("Enter User name");  
    t1.setBounds(140,90, 200,20);  
     f.add(t1);  
JTextField t2=new JTextField("Password");  
    t2.setBounds(140,110, 200,20);  
     f.add(t2);  
   



f.setSize(700,700);  
f.setLayout(null);
f.setVisible(true);  

}
}