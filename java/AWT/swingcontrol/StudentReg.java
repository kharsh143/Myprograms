import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class StudentReg extends JPanel implements ActionListener {
   
    JButton b1;
    JTextField t1,t2,t3;
    JLabel l1,l2,l3,l4;
    JCheckBox c1,c2,c3;
    JRadioButton r1,r2;
    ButtonGroup bg1;
    JComboBox cb;
    String str="Game : ";
    JCheckBox c[] = new JCheckBox[3];
    public StudentReg()
    {
        b1 = new JButton("Submit");
        t1 = new JTextField("Enter Name",15);
        t2 = new JTextField("Dept",10);
        t3 = new JTextField("Solapur",10);
        l1 = new JLabel("Name");
        l2 = new JLabel("Branch");
        l3 = new JLabel("Address");
        l4 = new JLabel("Subject");
        r1 = new JRadioButton("Male");
        r1.setActionCommand("male");
        r2 = new JRadioButton("Female");
        r2.setActionCommand("female");
        c1 = new JCheckBox("Cricket");
        c2 = new JCheckBox("FootBall");
        c3 = new JCheckBox("VollyBall");
        cb = new JComboBox();
        bg1 = new ButtonGroup();
       
        cb.addItem("c");
        cb.addItem("CPP");
        cb.addItem("java");
       
        b1.addActionListener(this);
        bg1.add(r1);
        bg1.add(r2);
       
        add(l1);
        add(t1);
        add(l2);
        add(t2);
        add(l3);
        add(t3);   
        add(l4);
        add(cb);
        add(r1);add(r2);
        add(c1);add(c2);add(c3);
        add(b1);
   
    }
   public void actionPerformed(ActionEvent e)
   {
       String name = t1.getText();
       System.out.println("Name : "+name);
       String branch = t2.getText();
       System.out.println("Branch : "+branch);
       String add = t3.getText();
       System.out.println("Address : "+add);
      
       String car = cb.getSelectedItem().toString();
       System.out.println("Car : "+car);
       if(bg1.getSelection().getActionCommand().equals("male"))
       {
            System.out.println("Gender : Male");
       }
       else
       {
            System.out.println("Gender : Female");
       }
      
        if(c1.isSelected())
        { 
           str = str +"Cricket ";
          
        }
        if(c2.isSelected())
        {
           str = str+"+ FootBall";   
          
        }
        if(c3.isSelected())
        {
            str = str+ "+ VollyBall ";         
        }
        System.out.println(" "+str);
   }
   public static void main(String args[])
   {
        JFrame frame = new JFrame("JButtonDemo");
   
        frame.addWindowListener(new WindowAdapter()
        {
            public void windowClosing(WindowEvent e)
            {
                System.exit(0);
            }
        });
        frame.getContentPane().add(new StudentReg());
        frame.pack();
        frame.setVisible(true);
   }
}
