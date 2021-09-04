#include <iostream>
using namespace std;

int main()
{
    int a[30],n,i,j,temp;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter "<<n<<" elements in array : ";
    for(i=0;i<n;i++) cin>>a[i];
    for(i=0;i<n;i++)
    {
        for(j=0; j<n-1;j++)
        {
            if(a[j]<a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<"Second Largest element is : "<<a[1];

    return 0;
}
