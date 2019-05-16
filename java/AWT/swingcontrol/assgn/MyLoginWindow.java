import java.awt.*;
import java.awt.event.*;
class MyLoginWindow extends Frame implements ActionListener
{
    TextField name,pass;
    Button b1;

Label res;
    MyLoginWindow()
    {
        setLayout(new FlowLayout());
        this.setLayout(null);
	res= new Label("Login Status",Label.CENTER);
        Label n=new Label("Name:",Label.CENTER);
        Label p=new Label("password:",Label.CENTER);
        name=new TextField(20);
        pass=new TextField(20);
        pass.setEchoChar('*');
        b1=new Button("submit");
        
        this.add(n);
        this.add(name);
        this.add(p);
        this.add(pass);
        this.add(b1);
this.add(res);
b1.addActionListener(this);
        
        n.setBounds(70,90,90,60);
        p.setBounds(70,130,90,60);
        name.setBounds(200,100,90,20);
        pass.setBounds(200,140,90,20);
        b1.setBounds(100,260,70,40);
        res.setBounds(180,260,160,40);
     }

public void actionPerformed(ActionEvent ae)
{
String u=name.getText();
String p=pass.getText();
if(ae.getSource()==b1)
{
if(u.equals("")&&p.equals(""))
{
res.setText("ENTER DATA ...");
}
else 
if(u.equals("abc")&&p.equals("123"))
{

   res.setText("Login Succesfully...");
//System.out.println("Login SUccessfully...");
}
else
{
res.setText("Password Mismatch");
}
}

}

    public static void main(String args[])
    {
        MyLoginWindow ml=new MyLoginWindow();
        ml.setVisible(true);
        ml.setSize(400,400);
        ml.setTitle("my login window");
 
    }
}