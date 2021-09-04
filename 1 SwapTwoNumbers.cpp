#include <iostream>
using namespace std;

int main()
{
    int a,b,t;
    cout<<"Enter two numbers :\nNum 1 = ";cin>>a;
    cout<<"Num 2 = "; cin>>b;
    t=a;
    a=b;
    b=t;
    cout<<"After Swapping\nNum 1 = "<<a<<"\nNum 2 = "<<b;
    return 0;
}
