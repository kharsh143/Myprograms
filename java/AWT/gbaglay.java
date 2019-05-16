import java.awt.*;
class lay extends Frame
{
lay()
{

GridBagLayout grid=new GridBagLayout();
GridBagConstraints gbc=new GridBagConstraints();
setLayout(grid);

setVisible(true);
setSize(500,500);
}

}
class gbaglay
{
public static void main(String arg[])
{
lay ob=new lay();

}
}