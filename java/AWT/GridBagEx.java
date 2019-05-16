import java.awt.*;
  
class GridBagLayoutExample extends Frame
{  
   
       GridBagLayoutExample()
       {  
          GridBagLayout grid = new GridBagLayout();  
            GridBagConstraints gbc = new GridBagConstraints();  
            setTitle("GridBag Layout Example"); 
            this.setLayout(grid);
    gbc.fill = GridBagConstraints.HORIZONTAL;  
    gbc.gridx = 0;  
    gbc.gridy = 0;  
    this.add(new Button("Button One"), gbc);  
    gbc.gridx = 1;  
    gbc.gridy = 0;  
    this.add(new Button("Button two"), gbc);  
    //gbc.fill = GridBagConstraints.HORIZONTAL;  
   gbc.gridx = 0;  
    gbc.gridy = 1;  
    this.add(new Button("Button Three"), gbc);  
    gbc.gridx = 1;  
    gbc.gridy = 1;  
    this.add(new Button("Button Four"), gbc);  
    gbc.gridx = 0;  
    gbc.gridy = 2; 
this.add(new Button("Button Five"), gbc);  
    gbc.gridx = 1;  
    gbc.gridy = 2;  
    gbc.fill = GridBagConstraints.HORIZONTAL;  
    gbc.gridwidth = 2;  
    this.add(new Button("Button Five"), gbc);  
            setSize(300, 300);  
            setVisible(true);  
            
      
        }  
      
}  
class GridBagEx
{
   public static void main(String args[])
{
   GridBagLayoutExample f=new GridBagLayoutExample();
}
}