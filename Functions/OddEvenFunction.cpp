#include<iostream>
using namespace std;

void oddEven(int num)
{
	if(num%2 == 0)
	{
		cout<<"The number is Even number: "<<num<<endl;
	}
	else
	{
		cout<<"The number is Odd number: "<<num<<endl;
	}
}

int main()
{    int num;
	cout<<"Enter a number to check if it is Odd or Even: "<<endl;
	cin>>num;
	oddEven(num);
	
	
	
	
	return 0;
}