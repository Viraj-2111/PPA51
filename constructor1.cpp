#include<iostream>

using namespace std;

class marvellous 
{
    public:
    int no1;
    int no2;

    marvellous()
    {
        cout<<"inside default constructor \n";
        no1 = 0;
        no2 = 0;
    }
    
    marvellous(int A, int B)
    {
        cout<<"inside parameterise constructor \n";
        no1 = A;
        no2 = B;
    }

    ~marvellous()
    {
        cout<<"inside destructor \n";
    }

    void fun()
    {
        cout<<"inside fun \n";
    }


};

int main()
{
    marvellous mobj1;

    marvellous mobj2(11,21);


    return 0;
}