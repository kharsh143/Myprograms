import java.awt.*;  
public class ListExample  
{  
     ListExample(){  
        Frame f= new Frame();  
        List l1=new List(5);  
        l1.setBounds(100,100, 100,100);  
        l1.add("CJ");  
        l1.add("DBMS");  
        l1.add("CGM");  
        l1.add("Electronics");  
        l1.add("Maths");  
        f.add(l1);  
        f.setSize(400,400);  
        f.setLayout(null);  
        f.setVisible(true);  
     }  
public static void main(String args[])  
{  
   new ListExample();  
}  
}  