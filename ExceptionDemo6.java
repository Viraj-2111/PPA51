import java.util.Scanner;

class AgeInvalidException extends Exception
{

    public AgeInvalidException(String str)
{
    
    super(str);
    System.out.println("inside constuctor");

}
}

class ExceptionDemo6
{

    
    public static void main(String A[])
    {
        int Age = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your age : ");
        Age = sobj.nextInt();

        try
        {
            System.out.println("inside try");
            if(Age < 18)
            {
                AgeInvalidException aobj = new AgeInvalidException("---------------------");
                throw aobj;
            }
        }

            catch(AgeInvalidException obj)
            {
                System.out.println("inside catch");
                System.out.println(obj);
            }
            
            finally
            {
                System.out.println("inside finally");
            }

            System.out.println("End of application");
        }
    }
