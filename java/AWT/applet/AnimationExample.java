import java.awt.*;  
import java.applet.*;
/*<applet code="AnimationExample.class" width="300" height="300">  
</applet>   */  
public class AnimationExample extends Applet
{  
  Image picture;    
  public void init()
  {  
    picture =getImage(getDocumentBase(),"gif1.gif");  
  }    
  public void paint(Graphics g)
 {  
  for(int i=0;i<500;i++)
   {  
      g.drawImage(picture, 30,i, this);  
       try{   Thread.sleep(200); }
	catch(Exception e){}  
    }  
  }  
}  























