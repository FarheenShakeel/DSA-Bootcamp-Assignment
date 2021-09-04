#include <iostream>
using namespace std;

int main()
{
    int n;
    int grade,x;
    //cout<<"Enter number of students (n) : ";
    cin>>n;
    //cout<<"Grades : "<<endl;
    for(int i=0; i<n; i++)
    {
        //cout<<"Student "<<i+1<<" : ";
        cin>>grade;
        if (grade>=38) 
        {
            x = grade%5;
            if (x>= 3) grade+= 5-x;
        }
        //cout<<"Final Grade : ";
        cout<<grade<<endl;
    }

    return 0;
}
