

class Demo extends Thread
{


        public void run()
    {
        System.out.println("Thread is running with name : "+Thread.currentThread().getName());
            try
            {
                for(int i = 0; i < 10; i++)
                {
                    System.out.println(Thread.currentThread().getName() + "with id :"+i);
                    Thread.sleep(1000);
                }
            }
        catch(Exception obj){}
         
    }
}

public class ThreadDemo6
{
    public static void main(String args[] )

    {
        System.out.println("Inside main thred");

        Demo dobj1 = new Demo();
        Thread tobj1 = new Thread(dobj1);
        tobj1.setName("PPA");

        Demo dobj2 = new Demo();
        Thread tobj2 = new Thread(dobj2);
        tobj2.setName("LB");

        tobj1.start();
        tobj2.start();

        System.out.println("End of main thread....");
    }
}
