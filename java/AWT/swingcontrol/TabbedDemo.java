import javax.swing.*;  
class TabbedPaneExample {  
JFrame f;  
TabbedPaneExample(){  
    f=new JFrame();  
    JTextArea ta=new JTextArea(200,200);  
    JPanel p1=new JPanel();  
    p1.add(ta);  
    JPanel p2=new JPanel();  
    JPanel p3=new JPanel();  
    JTabbedPane tp=new JTabbedPane();  
    tp.setBounds(50,50,200,200);  
    tp.addTab("main",new MainPanel());  
    tp.addTab("visit",p2);  
    tp.addTab("help",p3);    
    f.add(tp);  
    f.setSize(400,400);  
    f.setLayout(null);  
    f.setVisible(true);  
}  
class MainPanel extends JPanel
{
     MainPanel()
{
               JButton b1=new JButton("ok");
add(b1);
}
}
}
class TabbedDemo
{
public static void main(String[] args) 
{  
    TabbedPaneExample t1=new TabbedPaneExample();  
}}  