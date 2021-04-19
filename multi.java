import java.io.*;
interface i1{
public void eat();
}
interface i2{
void slep();
}

class human implements i1,i2{
public void eat(){System.out.println("Humans should eat food");}
public void slep(){System.out.println("Humans should sleep well");}
}
class multi{
public static void main(String args[])
{
 human h=new human();
 h.eat();
 h.slep();
}
}