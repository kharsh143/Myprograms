import java.awt.*;
class Border
{
Frame f;
Border()
{
Frame f=new Frame();
f.setTitle("LAYOUT EXAMPLES....");
 // BORDER LAYOUT
/*
Button b1=new Button("NORTH");
Button b2=new Button("SOUTH");
Button b3=new Button("EAST");
Button b4=new Button("WEST");
//Button b5=new Button("CENTER");
TextField f1=new TextField("TEXT BOX ");

f.setLayout(new BorderLayout(40,30));
f.add(b1,BorderLayout.NORTH);
f.add(b2,BorderLayout.SOUTH);
f.add(b3,BorderLayout.EAST);
f.add(b4,BorderLayout.WEST);
f.add(f1,BorderLayout.CENTER);
*/

 //FLOWLayout Example

Button b1=new Button("1");
Button b2=new Button("2");
Button b3=new Button("3");
f.add(b1);
f.add(b2);
f.add(b3);
//f.setLayout(new FlowLayout(10));
//f.setLayout(new FlowLayout(FlowLayout.RIGHT));
//f.setLayout(new FlowLayout(FlowLayout.LEFT));
//f.setLayout(new FlowLayout(FlowLayout.CENTER));
f.setLayout(new FlowLayout(FlowLayout.LEADING));



/*
//GridLayout Example*
Button b1=new Button("1");
Button b2=new Button("2");
Button b3=new Button("3");
Button b4=new Button("4");
Button b11=new Button("11");
Button b22=new Button("22");
Button b33=new Button("33");
f.add(b1);
f.add(b2);
f.add(b3);
f.add(b4);
f.add(b11);
f.add(b22);
f.add(b33);
f.setLayout(new GridLayout(2,6));
//f.setLayout(new GridLayout(2,3,10,20));

*/








f.setSize(700,700);
f.setVisible(true);
}
}
class border1
{
public static void main(String ar[])
{
Border ob=new Border();
}
}