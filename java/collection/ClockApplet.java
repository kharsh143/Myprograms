/*<APPLET CODE = "ClockApplet" WIDTH = "500" HEIGHT = "400">
</APPLET>*/
import java.applet.*;
import java.awt.*;
import java.util.*;
import java.text.*;

public class ClockApplet extends Applet implements Runnable
{
	Thread t,t1;
  	public void start()
	{
  		t = new Thread(this);
  		t.start();
	}
	public void run()
	{
  		t1 = Thread.currentThread();
  		while(t1 == t)
		{
  			repaint();
  			try
			{
  				t1.sleep(1000);  
  			}
			catch(InterruptedException e)
			{}
  		}
	}
	public void paint(Graphics g)
	{
  		Calendar cal = new GregorianCalendar();
  		Date d=cal.getTime();
  		SimpleDateFormat sdf=new SimpleDateFormat("dd-MM-yyyy hh:mm:ss");
  		g.drawString(sdf.format(d), 20, 30);
	}
}