import java.awt.*;  
import java.applet.*;  
/*<applet code="DisplayImage.class"  height="400" width="300">
</applet>*/
  
public class DisplayImage extends Applet {  
  
  Image picture;  
  
  public void init() {  
    picture = getImage(getDocumentBase(),"f.jpeg");  
  }  
    
  public void paint(Graphics g) {  
    g.drawImage(picture, 30,30, this);  
  }  
      
  }  