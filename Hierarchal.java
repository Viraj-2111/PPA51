class Base 
{
    public Base()
    {
        System.out.println("Inside base constructor");
    }
    public void Fun()
    {
        System.out.println("inside base fun");
    }
}

class Derived extends Base
{
    public int X,Y;

    public Derived()
    {
        System.out.println("inside derived constructor");
    }
    public void Gun()
    {
        System.out.println("inside Derived Gun");
    }

}

class DerivedX extends Base
{
    public int P,Q;

    public DerivedX()
    {
        System.out.println("inside derivedX constructor");
    }
    public void Sun()
    {
        System.out.println("inside DerivedX Sun");
    }

}

class Hierarchal
{

    public static void main(String[] args)
    {
        System.out.println("inside main function");

        Derived dobj1 = new Derived();

        DerivedX dobj2 = new DerivedX();

        dobj1.Fun();
        dobj1.Gun();

        dobj2.Fun();
        dobj2.Sun();
        
    }
    
}
