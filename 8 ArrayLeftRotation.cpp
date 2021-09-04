#include <iostream>
using namespace std;

int main()
{
    int a[1000000],n,i,j,temp,steps;
    //cout<<"Enter n : ";
    cin>>n;
    //cout<<"Enter the number of steps you want to rotate the array :";
    cin>>steps;
    //cout<<"Enter "<<n<<" elements in array : ";
    for(i=0;i<n;i++) cin>>a[i];
    for(i=1;i<=steps;i++)
    {
        temp=a[0];
        for(j=0; j<n-1;j++)   a[j]=a[j+1];
        a[j]=temp;
    }
    //cout<<"Array after Left Rotating "<<steps<<" times :"<<endl;
    for(i=0;i<n;i++) cout<<a[i]<<" ";

    return 0;
}
