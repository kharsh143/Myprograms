interface Drawable{  
void draw();  
static void cube(){
System.out.println("i m in static method");
}  
}  
class Rectangle implements Drawable{  
public void draw(){System.out.println("drawing rectangle");}  
}  
  
class TestInterfaceStatic{  
public static void main(String args[]){  
Drawable d=new Rectangle();  
d.draw();  
System.out.println(Drawable.cube());  
}}  