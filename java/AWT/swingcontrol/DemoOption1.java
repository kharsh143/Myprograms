import javax.swing.*;  
 class OptionPaneExample
 {  
JFrame f;  
OptionPaneExample()
{  
    f=new JFrame();  
JOptionPane.showMessageDialog(f,"Hello, Welcome to Javatpoint.");  
JOptionPane.showMessageDialog(f,"Successfully Updated.",
                                                  "Alert",JOptionPane.WARNING_MESSAGE);     
String name=JOptionPane.showInputDialog(f,"Enter Name");   
System.out.println(name);   
}  
}
class DemoOption1
{
public static void main(String[] args) 
{  
    new OptionPaneExample();  
}  
}  