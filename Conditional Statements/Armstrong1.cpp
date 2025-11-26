#include<iostream>
using namespace std;

int main()
{
	int num;
	int digit;
	cout<<"Enter the number :: "<<endl;
	cin>>num;
	while(num>0)
	{
		digit = num % 10;
		num = num / 10;
	}
	cout<<"Each digit of a number is:: "<<digit<<endl;
	
	
	
	
	return 0;
}