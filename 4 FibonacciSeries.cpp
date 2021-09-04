#include <iostream>
using namespace std;

int main()
{
    int a=-1,b=1,c=0,n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Fibonacci Series upto "<<n<<" terms is as follows :"<<endl;
    for(int i=1; i<=n; ++i)
    {
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }

    return 0;
}
