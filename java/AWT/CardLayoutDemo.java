import java.awt.*;  
import java.awt.event.*;  
class CardLayoutExample extends Frame implements ActionListener
{  
CardLayout card;  
Button b1,b2,b3,b4;  
    CardLayoutExample()
  {  
      card=new CardLayout(40,30);  
//create CardLayout object with 40 horizontal space and 30 vertical  space  
        this.setLayout(card);  
        b1=new Button("First");  
        b2=new Button("Second");  
        b3=new Button("Third"); 
b4=new Button("FOUR");   
        b1.addActionListener(this);  
        b2.addActionListener(this);  
        b3.addActionListener(this); 
 	b4.addActionListener(this); 

         this.add(b1);
         this.add(b2);
        this.add(b3);
	this.add(b4);
       this.setVisible(true);
        this.setSize(400,400);
                          
    }  
    public void actionPerformed(ActionEvent e) 
   {  
    card.previous(this);  
	card.last(this);  
//card.show(this);  
    }  
}
 class CardLayoutDemo
{
    public static void main(String[] args) 
     {  
        CardLayoutExample cl=new CardLayoutExample();  
}
}