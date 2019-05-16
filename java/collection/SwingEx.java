import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
class RegistrationFrame extends JFrame implements ActionListener
{
JLabel l1,l2, l3, l4, l5, l6, l7;
JTextField tf1;
JPasswordField pf1;
JCheckBox cb1, cb2, cb3, cb4, cb5;
JRadioButton rb1, rb2;
JList l;
JComboBox cb;
JTextArea ta;
JButton b;
String uname="", upwd="", uqual="", ugender="", utech="", 
uprofession="", uaddr="";
Container c;
RegistrationFrame()
{
c = getContentPane();
this.setVisible(true);
this.setSize(700, 500);
this.setTitle("Registration Frame");
this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
c.setBackground(Color.green);
c.setLayout(new FlowLayout());
l1 = new JLabel("User Name");
l2 = new JLabel("Password");
l3 = new JLabel("Qualifications");
l4 = new JLabel("Gender");
l5 = new JLabel("Technologies");
l6 = new JLabel("Profession");
l7 = new JLabel("User Address");
tf1 = new JTextField(20);
tf1.setToolTipText("Text Field");
pf1 = new JPasswordField(20);
pf1.setToolTipText("Password Field");
cb1 = new JCheckBox("BSC", false);
cb2 = new JCheckBox("BTech", false);
cb3 = new JCheckBox("MCA", false);
cb4 = new JCheckBox("MTech", false);
cb5 = new JCheckBox("PHD", false);
rb1 = new JRadioButton("Male", false);
rb2 = new JRadioButton("Female", false);
ButtonGroup bg = new ButtonGroup();
bg.add(rb1);
bg.add(rb2);

Object[] list_Items = {"C", "C++", "JAVA", ".NET", "Oracle"};
l = new JList(list_Items);

Object[] cb_Items = {"Student", "Employee", "Teacher"};
cb = new JComboBox(cb_Items);
ta = new JTextArea(5, 20);
b = new JButton("Register");
b.addActionListener(this);
Font f = new Font("arial", Font.BOLD, 15);
l1.setFont(f);
l2.setFont(f);
l3.setFont(f);
l4.setFont(f);
l5.setFont(f);
l6.setFont(f);
l7.setFont(f);
tf1.setFont(f);
pf1.setFont(f);
cb1.setFont(f);
cb2.setFont(f);
cb3.setFont(f);
cb4.setFont(f);
cb5.setFont(f);
rb1.setFont(f);
rb2.setFont(f);
l.setFont(f);
cb.setFont(f);
ta.setFont(f);
b.setFont(f);

c.add(l1); c.add(tf1);
c.add(l2); c.add(pf1);
c.add(l3); c.add(cb1);c.add(cb2);c.add(cb3);
c.add(cb4);c.add(cb5);
c.add(l4); c.add(rb1);c.add(rb2);
c.add(l5); c.add(l);
c.add(l6); c.add(cb);
c.add(l7); c.add(ta);
c.add(b);

}
public void actionPerformed(ActionEvent ae)
{
uname = tf1.getText();
upwd = pf1.getText();
if(cb1.isSelected() == true)
{
uqual = uqual+cb1.getLabel()+" "; 
}
if(cb2.isSelected() == true)
{
uqual = uqual+cb2.getLabel()+" "; 
}
if(cb3.isSelected() == true)
{
uqual = uqual+cb3.getLabel()+" "; 
}
if(cb4.isSelected() == true)
{
uqual = uqual+cb4.getLabel()+" "; 
}
if(cb5.isSelected() == true)
{
uqual = uqual+cb5.getLabel(); 
}
if(rb1.isSelected() == true)
{
ugender = rb1.getLabel();
}
if(rb2.isSelected() == true)
{
ugender = rb2.getLabel();
}

Object[] items = l.getSelectedValues();
for(Object tech: items)
{
utech = utech+tech+" ";
}

uprofession = (String)cb.getSelectedItem();
uaddr = ta.getText();

class DisplayFrame extends JFrame
{
DisplayFrame()
{
this.setVisible(true);
this.setSize(600,500);
this.setTitle("Display Window");
this.setBackground(Color.pink);
}
public void paint(Graphics g)
{
Font f = new Font("arial", Font.BOLD, 25);
g.setFont(f);
g.drawString("User Name :"+uname,50,100);
g.drawString("Password :"+upwd,50,150);
g.drawString("Qualifications:"+uqual, 50, 200);
g.drawString("User Gender :"+ugender, 50, 250);
g.drawString("Technologoies :"+utech, 50, 300);
g.drawString("Proffession :"+uprofession, 50, 350);
g.drawString("User Address :"+uaddr,50,400);
uqual = "";
utech = "";
}
}
DisplayFrame disp_Frame = new DisplayFrame();
}

}
class SwingEx 
{
public static void main(String[] args) 
{
RegistrationFrame frame = new RegistrationFrame();
}
}