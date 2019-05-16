import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.io.*;
class MenuDemo extends JFrame implements ActionListener{
JMenuBar mb;
JMenu mnu;
JMenuItem mopen,msave,mclear,mexit;
JTextArea tf1;
	public MenuDemo()
	{
	
	Container con=getContentPane();
	con.setLayout(null);
	mopen=new JMenuItem("Open");
	msave=new JMenuItem("Save");
	mclear=new JMenuItem("Clear");
	mexit=new JMenuItem("Exit");
	mnu=new JMenu("File");
	mb=new JMenuBar();
	tf1=new JTextArea();
	tf1.setBounds(100,100,400,450);
	
	mopen.addActionListener(this);
	msave.addActionListener(this);
	mclear.addActionListener(this);
	mexit.addActionListener(this);
	
	con.add(tf1);

	mnu.add(mopen);		
	mnu.add(msave);
	mnu.add(mclear);
	mnu.add(mexit);
	mb.add(mnu);
	setJMenuBar(mb);
	setVisible(true);
	setBounds(50,50,700,700);
	setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}
	public void actionPerformed(ActionEvent ae)
	{
	if(ae.getSource()==mopen){
		//for opening...
		try{
		Frame f=new Frame();
		FileDialog fd=new FileDialog(f,"my open dialog",FileDialog.LOAD);
		fd.setVisible(true);
		String path=fd.getDirectory()+fd.getFile();
		FileInputStream fis=new FileInputStream(path);
		String s1="";char ch;int v;
		while(true){
			v=fis.read();
			if(v==-1) break;
			else {
				ch=(char)v;
				s1=s1+ch;
				}
			}
		tf1.setText(s1);
		}catch(Exception x){x.printStackTrace();}
		}
	
	else if	(ae.getSource()==msave){
		//for saving the file....
		try{
		Frame f=new Frame();
		FileDialog fd=new FileDialog(f,"my save dialog",FileDialog.SAVE);
		fd.setVisible(true);
		String path=fd.getDirectory()+fd.getFile();
		FileOutputStream fos=new FileOutputStream(path);
		String s1=tf1.getText(); int i;
		for(i=0;i<s1.length();i++)
			fos.write(s1.charAt(i));
		fos.close();
		}catch(Exception x){x.printStackTrace();}

		}
	
	else if (ae.getSource()==mclear){
		tf1.setText("");
		}
	
	else if	(ae.getSource()==mexit){
		System.exit(0);
		}
	}
}
class Question3
{
	public static void main(String cp[])
	{
	new MenuDemo();
	}
}