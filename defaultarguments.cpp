#include<iostream>
using namespace std;

float calculateArea(float red, float pi = 3.14) 
{
    float ans = 0.0f ;
    
    ans = pi * red * red;
    return ans;



};

int main()
{

float ret = 0.0f;

ret = calculateArea(10.5f,3.14f);
cout<<"area of circle is :"<<ret<<"\n";

ret = calculateArea(10.5f);
cout<<"area of circle is :"<<ret<<"\n";

ret = calculateArea(10.5f,7.20f);
cout<<"area of circle is :"<<ret<<"\n";

    return 0;
}