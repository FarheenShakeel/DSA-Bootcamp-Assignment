#include <iostream>
using namespace std;

int main()
{
    int a,b,c,l;
    cout<<"Enter 3 numbers : ";
    cin>>a>>b>>c;
    l=(a>b)?((a>c)?a:c):((b>c)?b:c);
    cout<<"Largest Number : "<<l;

    return 0;
}
