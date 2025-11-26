#include<iostream>
using namespace std;

int main()
{
	
	int num;
	cout<<"Enter the number: "<<endl;
	cin>>num;
	int digit_count = 0;
	while(num>0)
	{
	   num = num/10;
	   digit_count++;
	}
	
	cout<<"The total number of digits in a number is: "<<digit_count<<endl;
	
	
	return 0;
}