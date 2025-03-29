#include<iostream>
using namespace std;

class base
{
    public:
         int i;
    private:
         int j;
    protected:
         int x;
    public:
        base()
        {
            i = 10;
            j = 20;
            x = 30;
        }
};

class derived
{
    public:
        void fun()
        {
           
        }
};
int main()
{

    return 0;
}