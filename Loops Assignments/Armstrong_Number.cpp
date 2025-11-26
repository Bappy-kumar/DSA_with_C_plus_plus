#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int num;
	cout<<"Enter the number to check if it is a armstrong or not: "<<endl;
	cin>>num;
	int original = num;
	int sum= 0;
	int digit_count = 0;
	int temp = num;
	while(temp>0)
	{
		temp = temp / 10;
		digit_count++;
	}
	
	temp = num;
	while(temp>0)
	{
		int digit = temp % 10;
		sum +=pow(digit, digit_count);
		temp = temp / 10;
		
	}
   
	
	if(sum == original )
	{
		cout<<original<<" Armstrong number: "<<endl;
	}
	else
	{
		cout<<original<<" Not a Armstrong number: "<<endl;
	}
return 0;
}