import javax.swing.*;  
import java.awt.event.*;  
 class OptionPaneExample extends WindowAdapter
{  
JFrame f;  
OptionPaneExample(){  
    f=new JFrame();   
    f.addWindowListener(this);  
    f.setSize(300, 300);  
    f.setLayout(null);  
    f.setDefaultCloseOperation(JFrame.DO_NOTHING_ON_CLOSE);  
    f.setVisible(true);  
}  
public void windowClosing(WindowEvent e) 
{  
    int a=JOptionPane.showConfirmDialog(f,"Are you sure?");  
if(a==JOptionPane.YES_OPTION)
{  
    f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);  
}  
} 
} 
class DemoOption2
{
public static void main(String[] args) {  

  OptionPaneExample d=new  OptionPaneExample();  
}     
}  