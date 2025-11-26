#include<iostream>
using namespace std;

int main()
{    
     int a,b,t;
	cout<<"Enter two numbers to swap: "<<endl;
	cin>>a>>b;
	t=a;
	a=b;
	b=t;
	cout<<"Numbers after swapping are: "<<a<<" "<<b<<endl;
	return 0;
}