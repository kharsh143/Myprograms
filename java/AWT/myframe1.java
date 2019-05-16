import java.awt.*;
class myframe extends Frame
{
myframe()
{
Button b=new Button("CLICK_ME");
//Label l=new Label("ENTER MOBILE NO");
//TextField t=new TextField(5);
//add(t);
add(b);
//add(l);
//l.setBounds(20,40,120,20);
//t.setBounds(20,80,100,20);
setLayout(null);
b.setBounds(60,40,120,40);

}
}
class myframe1
{
public static void main(String ar[])
{
myframe f=new myframe();
f.setTitle("WEL COME TO AWT");
f.setSize(500,500);
f.setVisible(true);

}
}