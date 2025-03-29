#include<iostream>
using namespace std;

class demo
{
    public:
        int addition(int a, int b)
        {
            return a+b;
        }
        double addition(double a, double b)
        {
            return a+b;
        }
        int addition(int a,int b,int c)
        {
            return a+b+c;
        }
};

int main()
{
    demo obj;
    cout<<obj.addition(10,11)<<"\n";
    cout<<obj.addition(10.90,11.99)<<"\n";
    cout<<obj.addition(10,11,21)<<"\n";


    return 0;
}

/*

void fun(int a, int b);
void fun(int a, int b, int c);

*/