import java.awt.*;  
  
class MyFlowLayout
{  
Frame f;  
MyFlowLayout()
{  
    f=new Frame();  
      
    Button b1=new Button("1");  
    Button b2=new Button("2");  
    Button b3=new Button("3");  
    Button b4=new Button("4");  
    Button b5=new Button("5");  
              
    f.add(b1);
f.add(b2);
f.add(b3);
f.add(b4);
f.add(b5);  
      
    f.setLayout(new FlowLayout());  
    //setting flow layout of right alignment  
  
    f.setSize(300,300);  
    f.setVisible(true);  
}  
}
class FlowEx
{
public static void main(String[] args)
 {  
    MyFlowLayout f=new MyFlowLayout();  
}  
}  