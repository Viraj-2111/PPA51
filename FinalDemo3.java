class Demo
{
    public int iNo1;
    final public int iNo2;

    public Demo(int A, int B)
    {
        iNo1 = A;
        iNo2 = B;
    }
}

class FinalDemo3
{
    public static void main(String abc[])
    {
        Demo dobj = new Demo(11,21);

        System.out.println("value of iNo1 :"+dobj.iNo1);
        System.out.println("value of iNo2 :"+dobj.iNo2);

        //dobj.iNo2++;
    }
}