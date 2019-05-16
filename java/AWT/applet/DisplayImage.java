import java.awt.*;  
import java.applet.*;  
/*<applet code="DisplayImage.class" width="600" height="500">  
</applet>   */

public class DisplayImage extends Applet 
{  
  Image picture;    
  public void init() 
   {  
    picture = getImage(getDocumentBase(),"image.jpg");  
   }  
   public void paint(Graphics g)
	 {  
    	g.drawImage(picture,120,200, this);  
  	}     
}  