#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    if(n>0)
    {
        cout<<"The number is positive number: "<<n<<endl;

    } else if(n<0)
    {
        cout<<"The number is negative number: "<<n<<endl;
    }
    else
    {
        cout<<"The number is zero: "<<n<<endl;
    }
    return 0;
}