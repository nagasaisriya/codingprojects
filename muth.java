import java.io.*;
import java.util.Random;
class num extends Thread
{
public void run(){
Random r=new Random();
for(int i=0;i<5;i++)
{
 int ran=r.nextInt(50);
 System.out.println("Random number generated= "+ran);
 if(ran%2==0)
 {sqr s=new sqr(ran);
  s.start();}
 else
 {cube c=new cube(ran);
  c.start();}
try{Thread.sleep(1000);}
catch(InterruptedException e){System.out.println("Exception found");}
}
}
}
class sqr extends Thread
{
 int x;
 sqr(int n){x=n;}
 public void run()
  {System.out.println("SQUARE: "+x*x);}
}
class cube extends Thread
{
 int x;
 cube(int n){x=n;}
 public void run()
  {System.out.println("CUBE: "+x*x*x);}
}
public class muth
{
public static void main(String args[])
{
num n=new num();
n.start();
}
}