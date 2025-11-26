#include<iostream>
using namespace std;

int main()
{
	
	int num;
	int digit;
	int sum = 0;
	cout<<"Enter the number: "<<endl;
	cin>>num;
	while(num>0)
	{
		digit = num % 10;
		if(digit % 2!=0)
		{
			sum+=digit;
		}
		num = num / 10;
	}
	
	cout<<"Sum of odd digit of a number is: "<<sum<<endl;
	return 0;
}