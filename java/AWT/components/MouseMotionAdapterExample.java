import java.awt.*;  
import java.awt.event.*;  
public class MouseMotionAdapterExample extends MouseMotionAdapter
{  
    Frame f;  
    MouseMotionAdapterExample(){  
        f=new Frame("Mouse Motion Adapter");  
        f.addMouseMotionListener(this);  
          
        f.setSize(300,300);  
        f.setLayout(null);  
        f.setVisible(true);  
    }  
public void mouseDragged(MouseEvent e) {  
    Graphics g=f.getGraphics();  
    g.setColor(Color.PINK);  
    g.fillOval(e.getX(),e.getY(),10,10);  
}  
public static void main(String[] args) {  
    new MouseMotionAdapterExample();  
}  
}  