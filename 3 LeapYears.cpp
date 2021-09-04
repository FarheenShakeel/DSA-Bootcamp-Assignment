#include <iostream>
using namespace std;

int main()
{
    int year;
    bool leap=0;
    cout<<"Enter the year : ";
    cin>>year;
    if(!(year % 1000))  leap=1;
    else if(!(year % 4))  leap=1;
    if(leap)
        cout<<year<<" is a leap year!";
    else
        cout<<year<<" is not a leap year!";

    return 0;
}
