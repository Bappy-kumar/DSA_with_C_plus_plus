#include<iostream>
using namespace std;


int main()
{
    int a,b;
    cout<<"Enter two numbers: "<<endl;
    cin>>a>>b;
    int largest = a>b? a : b;
    cout<<" largest is "<< largest <<endl;
    return 0;
}