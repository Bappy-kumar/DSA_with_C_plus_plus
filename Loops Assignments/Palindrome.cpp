#include<iostream>
using namespace std;

int main()
{
	int num;
	cout<<"Enter the number: "<<endl;
	cin>>num;
	int original = num;
	int reversed = 0;
	int temp = num;
	while(temp > 0)
	{
		 int digit = temp % 10;
	     reversed = reversed * 10 + digit;
	     temp = temp / 10;
	}
	
	if(reversed == original)
	{
		cout<<"The number is a palindrome: "<<num<<endl;
	}
	else
	{
		cout<<"The number is not a palindrome: "<<num<<endl;
	}
	
	
	
	
	
	
	return 0;
}