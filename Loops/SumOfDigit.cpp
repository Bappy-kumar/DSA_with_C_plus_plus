#include<iostream>
using namespace std;

int main()
{
	
	int num;
	int sum = 0;
	cout<<"Enter the number: "<<endl;
	cin>>num;
	while(num>0)
	{
		int digits = num % 10;
		sum = sum + digits;
		num = num / 10;
		
	}
	
	cout<<"The sum of digit of a number is: "<<sum<<endl;
	
	
	
	return 0;
}