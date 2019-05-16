interface printable{
void print();
}

class Demint implements printable{
public void print(){System.out.println("Hello");}

public static void main(String args[]){
Demint obj = new Demint();
obj.print();
 }
}
