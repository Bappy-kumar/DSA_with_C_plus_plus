//C++ Program to find largest among three numbers:
#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"Enter three numbers: "<<endl;
	cin>>a>>b>>c;
	if(a>b && a>c)
	{
		cout<<"greater number is: "<<a<<endl;
	}
	else if(b>>a && b>c)
	{
		cout<<"greater number is: "<<b<<endl;
	}
	else
	{
		cout<<"greater number is: "<<c<<endl;
	}
	
	
	
	return 0;
}