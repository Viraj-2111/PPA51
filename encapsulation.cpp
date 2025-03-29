#include<iostream>

using namespace std;

class demo
{
    public:
        int A;
        int B;

            void fun()
            {
                cout<<"inside fun \n";
            }

            void gun()
            {
                cout<<"inside gun \n";
            }

};

int main()
{
    demo obj;

    cout<<sizeof(obj)<<"\n";

    obj.A = 11;
    obj.B = 21;

    obj.fun();
    obj.gun();

    cout<<obj.A<<"\n";
    cout<<obj.B<<"\n";

    return 0;
}