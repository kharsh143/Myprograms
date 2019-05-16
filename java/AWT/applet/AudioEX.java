import java.awt.*;
import java.applet.*;
import java.awt.event.*;
/*<applet code="AudioEX.class"  height="400" width="300">
</applet>*/
public class AudioEX extends Applet implements ActionListener 
{
   Button b1,b2;
   AudioClip ac;
   
   public void init() {
      b1=new Button("Play");
      add(b1);
      b1.addActionListener(this);
      b2=new Button(" Stop ");
      add(b2);
      b2.addActionListener(this);
      ac= getAudioClip(getCodeBase(), "audio.mp3");
   }
   public void actionPerformed(ActionEvent ae) 
   {
                                                                                                                        
        if(ae.getSource()==b1)
       {
            ac.play();
           System.out.println("play");
       }
    if(ae.getSource()==b2)
    {
           ac.stop();
          System.out.println("stop");
    }
    
   }

}